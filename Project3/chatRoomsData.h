#pragma once
using namespace System;
#include <stdio.h>
#include <time.h>
#include <stdint.h>

public ref class chatRoomsData {
public:
	int chatroomID;
	bool type;
	time_t timeOfLastMsg;

};