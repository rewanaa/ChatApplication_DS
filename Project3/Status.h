#pragma once
#include <string>
#include <iostream>
#include <ctime>


//using namespace Globals;
#include "global.h"
using namespace std;
class Status
{
	int messageID;
	string dateAndTime;
	time_t timeOfMsg;
	string Date_of_message_sent;
	string  time_of_message_sent ;
	bool status_type;
	//0 for unseen & 1 for seen

public :
	Status(int msgID);
	string status_of_message();
	string getDateAndTimeOfMessage();
	void change_status();
	statusData ^ getStatusData();

};



