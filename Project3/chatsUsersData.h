#pragma once
#include <ctime>
using namespace System;

public ref class chatsUsersData {
public:
	int chatroom_ID;
	int member_ID;
	time_t timeOfLastMsgINChat;

};