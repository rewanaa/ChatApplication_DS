#define _CRT_SECURE_NO_WARNINGS
#include "Status.h"
//#include<ctime>

Status::Status(int msgID)
{
	messageID = msgID;
	time_t now = time(0);
	timeOfMsg = now;
	 dateAndTime = ctime(&now);

	Date_of_message_sent  = dateAndTime.substr(8, 2) + '-' + dateAndTime.substr(4, 3) + '-' + dateAndTime.substr(20, 4);
	time_of_message_sent = dateAndTime.substr(11, 8);
	status_type = 0;

	statusData^ status = gcnew statusData();
	status->messageID = messageID;
	status->Date_of_message = global::stdToCLI(Date_of_message_sent);
	status->time_of_message = global::stdToCLI(time_of_message_sent);
	status->dateAndtime = global::stdToCLI(dateAndTime);
	status->statusType = status_type;
	status->timeOfMsg = timeOfMsg;

	global::statusRepo->insert(status);

}

 string Status::status_of_message()
{
	if (status_type == 0) {
		return "unSeen";

	}
	return "Seen";
}

void Status::change_status()
{
	status_type = !status_type;
	statusData^ status = gcnew statusData();
	status = global::statusRepo->getItem(messageID);
	status->statusType = !status_type;
	bool updated = global::statusRepo->update(messageID, status);
}

statusData^ Status::getStatusData()
{
	statusData^ status = gcnew statusData();
	status = global::statusRepo->getItem(messageID);
	return status;
}


string Status::getDateAndTimeOfMessage()
{
	return dateAndTime;
}



