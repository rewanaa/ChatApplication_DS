#pragma once
#include "User.h"
#include "Messages.h"
#include<iostream>
#include <vector>
#include <ctime>

using namespace std;
using namespace System;
//using namespace Globals;

#include "global.h"

class ChatData
{
	int ChatRoomID;
	vector<int> UsersIDs;
	vector<int> allMessagesIDs;
	bool ChatRoom_Type;
	string dateAndTime;
	time_t timeOfLastMsg;

public:
	ChatData(bool type);
	ChatData(int wantedChatID);
	void AddMember(int addedID);
	void AddMessage(string msg);
	List<messageData^>^ DisplayMessages();
	void undoMessage();
	int getChatID();
	string getAndUpdateDateAndTime();
	//time_t getChatRoomTime();

};
