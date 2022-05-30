#include "ChatData.h"




ChatData::ChatData(bool type) {
	ChatRoom_Type = type;
	chatRoomsData^ chat = gcnew chatRoomsData();
	chat->type = ChatRoom_Type;
	chat->timeOfLastMsg = time(0);
	

	global::chatRoomsRepo->insert(chat);
	List<chatRoomsData^>^ chatsAdded = global::chatRoomsRepo->getAll();
	ChatRoomID = chatsAdded[chatsAdded->Count - 1]->chatroomID;


	global::theChatID = ChatRoomID;

	
}
ChatData::ChatData(int wantedChatID) {
	chatRoomsData^ chat = global::chatRoomsRepo->getItem(wantedChatID);
	ChatRoomID = chat->chatroomID;
	ChatRoom_Type= chat->type;
	timeOfLastMsg= chat->timeOfLastMsg;


}
void ChatData::AddMember(int addedID) {
	UsersIDs.push_back(addedID);


	//theChatID change when you create or enter chatroom 
	chatsUsersData^ newMember = gcnew chatsUsersData();
	newMember->chatroom_ID = ChatRoomID;
	newMember->member_ID = addedID;
	newMember->timeOfLastMsgINChat = time(0);

	global::chatsUsersRepo->insert(newMember);

}


void ChatData::AddMessage(string msg) {
	Messages *newMessage = new Messages(msg);
	allMessagesIDs.push_back(newMessage->getMessageID());
	getAndUpdateDateAndTime();

}


List<messageData^>^ ChatData::DisplayMessages() {

	//get messages of that chatroom form chat/message table
	QueryFilter^ filter = gcnew QueryFilter();
	filter = filter->whereColumn("chat_ID")
		->isEqualTo(global::theChatID)
		->build();
 
	List<chatMessageData^>^ filteredMessages = global::chatMessageRepo->getFiltered(filter);

	//get list of messages of the current chatroom
	List<messageData^>^ msgs = gcnew List<messageData^>();
	for (int i = 0; i < filteredMessages->Count; i++)
	{
		msgs->Add( global::messageRepo->getItem(filteredMessages[i]->message_ID));
		if (msgs[i]->userID != global::theUserID)
		{
			statusData^ status = gcnew statusData();
			status = global::statusRepo->getItem(msgs[i]->messageID);
			status->statusType = 1;
			bool updated = global::statusRepo->update(msgs[i]->messageID, status);
		}

	}


	return msgs;
	
}


void ChatData::undoMessage() {
	List<messageData^>^ msgs = DisplayMessages();
	int msgID = msgs[msgs->Count -1]->messageID;

	global::chatMessageRepo->remove(msgID);
	global::messageRepo->remove(msgID);
	//allMessagesIDs.pop_back();
}


int ChatData::getChatID() {
	return ChatRoomID;
}

string ChatData::getAndUpdateDateAndTime() {
	// get
		//messageData ^ lastMsg = gcnew messageData();
		//statusData^ lastMsgStatus = gcnew statusData();
		int lastMsgID = allMessagesIDs[allMessagesIDs.size() - 1];
		messageData^ lastMsg = global::messageRepo->getItem(lastMsgID);
		statusData^ lastMsgStatus = global::statusRepo->getItem(lastMsgID);


	dateAndTime = global::cliToSTD(lastMsgStatus->dateAndtime);

	//update
	chatRoomsData^ chatupdated = global::chatRoomsRepo->getItem(global::theChatID);
	chatupdated->timeOfLastMsg = lastMsgStatus->timeOfMsg;
	bool updated = global::chatRoomsRepo->update(ChatRoomID, chatupdated);

	return dateAndTime;
}
