#pragma once
#include "userProfileDesc.h"
#include"ChatData.h"
#include"chatRoomsData.h"
#include "SqlRepo.h"
#include"Messages.h"
#include "Status.h"
#include "userStory.h"
#include "ChatData.h"
#include <stack>
#include <vector>
#include<string>
#include<iostream>
using namespace std;
//using namespace Globals;

#include "global.h"

class User {

	int UserId;
	string password;
	string MobileNum;
	string Fname;
	string Lname;
	vector <int> chatRoomsIDs;
	vector <int> contactsIDs;


public:

    User();
	User(int IDUsed);
    void AddContacts(int contactID);
    List<UserData^>^ displayContacts();
	void deleteContact(int contactID);


	void AddStory(string story , bool type);
	storyData^ displayMystory();
	List<storyData^>^ displayContactsStories();
	void autoDeleteStory(int accountID);
	void deleteMyStory();

	
	
	void addChatRoom(bool type);
	List<chatRoomsData^>^ displayChatRooms();
	void deleteChatRoom(int chatRoomID);

	int displayID();
	void calcTime(int storyUserID,time_t time);


};
