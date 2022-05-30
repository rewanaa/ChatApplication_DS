#pragma once
using namespace System;

public ref class statusData {
public:
	int messageID;
	String^ Date_of_message;
	String^  time_of_message;
	String^ dateAndtime;
	time_t timeOfMsg;
	bool statusType;//seen or unseen


};
