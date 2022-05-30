#include "User.h"
#include "ChatData.h"
#include "userProfileDesc.h"
#include<bits/stdc++.h>
using namespace std;

User::User() {
	UserData^ user = gcnew UserData();
	user = global::usersRepo->getItem(global::theUserID);
	UserId = user->UserId;
	password = global::cliToSTD(user->password);
	MobileNum = global::cliToSTD(user->MobileNum);
	Fname = global::cliToSTD(user->Fname);
	Lname = global::cliToSTD(user->Lname);

	userProfileDesc *desc = new userProfileDesc();
	
}
User::User(int IDUsed) {

	UserData^ user = global::usersRepo->getItem(IDUsed);
	UserId = user->UserId;
	password = global::cliToSTD(user->password);
	MobileNum = global::cliToSTD(user->MobileNum);
	Fname = global::cliToSTD(user->Fname);
	Lname = global::cliToSTD(user->Lname);

	userProfileDesc* desc = new userProfileDesc(IDUsed);

}


void User::AddContacts(int contactID) {
	contactsIDs.push_back(contactID);

	//database will find the ID of that number
	usersContactsData^ userContact = gcnew usersContactsData();
	userContact->user_ID = global::theUserID;
	userContact->contact_ID = contactID;
	UserData^ contactAdded = global::usersRepo->getItem(contactID);
	userContact->contact_fName = contactAdded->Fname;
	global::userContactsRepo->insert(userContact);
}


void User::deleteContact(int contactID) {
	//list<int> pKey = { global::theUserID,contactID };
	QueryFilter^ DeleteFilter = gcnew QueryFilter();
	DeleteFilter = DeleteFilter->whereColumn("user_ID")
		->isEqualTo(global::theUserID)
		->andCase()
		->whereColumn("contact_ID")
		->isEqualTo(contactID)
		->build();

	global::userContactsRepo->removeFiltered(DeleteFilter);
}

List<UserData^>^ User::displayContacts() {
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("user_ID")
		->isEqualTo(global::theUserID)
		->orderBy("contact_fName", false)
		->build();

	// return a List of contacts of the current user
	List<usersContactsData^>^ filteredContacts = global::userContactsRepo->getFiltered(filter);

	List<UserData^>^ contacts = gcnew List<UserData^>();

	for (int i = 0; i < filteredContacts->Count; i++)
	{
		contacts->Add(global::usersRepo->getItem(filteredContacts[i]->contact_ID));

	}

	return contacts;
}


void User::AddStory(string storyAdded, bool type) {

	//check if story found and update or create 
	//storyData^ storyFound = global::storyRepo->getItem(global::theUserID);
	//if (storyFound != nullptr){
	//storyFound->type = type;
	//if (type == 0)
	//	storyFound->storyPhoto = global::stdToCLI(storyAdded);
	//else 
	//	storyFound->storyText = global::stdToCLI(storyAdded);

	//storyFound->published_time_t = time(0);
	//storyFound->published_time = global::stdToCLI(ctime(0));
 //    global::storyRepo->update(UserId, storyFound);
	//}
	//else
	userStory *addedStory = new userStory(storyAdded, type);
}

void User::autoDeleteStory(int accountID)
	{
	storyData^ storyToDelete = gcnew storyData();
		storyToDelete = global::storyRepo->getItem(accountID);
		if (storyToDelete == nullptr) return;
	calcTime(accountID,storyToDelete->published_time_t);

}
void User::calcTime(int storyUserID,time_t timeOfStory)
{
	time_t now = time(0);
	double diff = difftime(now, timeOfStory);

	if (diff >= 86400) // 24h passed the delete story
	{
		global::storyRepo->remove(storyUserID);
	}


}

List<storyData^>^ User::displayContactsStories() {
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("user_ID")
		->isEqualTo(global::theUserID)
		->build();

	// return a List of contacts of the current user
	List<usersContactsData^>^ filteredContacts = global::userContactsRepo->getFiltered(filter);

	List<storyData^>^ contactsStories = gcnew List<storyData^>();
	for (int i = 0; i < filteredContacts->Count; i++)
	{
		autoDeleteStory(filteredContacts[i]->contact_ID);
		if( global::storyRepo->getItem(filteredContacts[i]->contact_ID) == nullptr) continue;
		contactsStories->Add(global::storyRepo->getItem(filteredContacts[i]->contact_ID));
	}
	return contactsStories;
}

storyData^ User::displayMystory() {
	storyData^ myStory = gcnew storyData();
	myStory = global::storyRepo->getItem(global::theUserID);

	return myStory;
}

void User::deleteMyStory()
{
	global::storyRepo->remove(global::theUserID);
}


void User::addChatRoom(bool type) {

	ChatData newChat = new ChatData(type);

	newChat.AddMember(global::theUserID);
	chatRoomsIDs.push_back(global::theChatID);

	
}

void User::deleteChatRoom(int chatRoomID) {
	
	QueryFilter^ DeleteFilter = gcnew QueryFilter();
	DeleteFilter = DeleteFilter->whereColumn("chatroomID")
		->isEqualTo(chatRoomID)
		->build();
	global::chatRoomsRepo->removeFiltered(DeleteFilter);

	QueryFilter^ DeleteFilter2 = gcnew QueryFilter();
	DeleteFilter2 = DeleteFilter2->whereColumn("chatroom_ID")
		->isEqualTo(chatRoomID)
		->build();
	global::chatsUsersRepo->removeFiltered(DeleteFilter2);

}

List<chatRoomsData^>^ User::displayChatRooms() {
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("member_ID")
		->isEqualTo(global::theUserID)
		->orderBy("timeOfLastMsgINChat",true)
		->build();

	// return a List of chats of the current user
	List<chatsUsersData^>^ filteredChatRooms = global::chatsUsersRepo->getFiltered(filter);

	List<chatRoomsData^>^ chatRooms = gcnew List<chatRoomsData^>();
	for (int i = 0; i < filteredChatRooms->Count; i++)
	{
		chatRooms->Add(global::chatRoomsRepo->getItem(filteredChatRooms[i]->chatroom_ID));

	}


	return chatRooms;

}


int User::displayID()
{
	return UserId;
}