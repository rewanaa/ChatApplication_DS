#include "Messages.h"
#include "Status.h"
#include <iostream>

using namespace std;


Messages::Messages()
{
	UserID = global::theUserID;
	Text = " ";
	Status * status = new Status(MessageId);
	
	//add message to database and get the ID
	messageData^ message = gcnew messageData();
	message->text = global::stdToCLI(Text);
	message->chatID = global::theChatID;
	message->userID = global::theUserID;


	global::messageRepo->insert(message);
	List<messageData^>^ msgsAdded = global::messageRepo->getAll();
	MessageId = msgsAdded[msgsAdded->Count - 1]->messageID;


	//connect message with chatroom
	chatMessageData^ chatMessage = gcnew chatMessageData();
	chatMessage->chat_ID = global::theChatID;
	chatMessage->message_ID = MessageId;
	global::chatMessageRepo->insert(chatMessage);

	
}
Messages::Messages(int msgID) {
	messageData^ message = global::messageRepo->getItem(msgID) ;
	 MessageId=msgID;
	 UserID= message->userID;
	Text= global::cliToSTD(message->text);

	

}
Messages::Messages( string text)
{
	UserID = global::theUserID;
	Text = text;

	//add message to database and get the ID
	messageData^ message = gcnew messageData();


	message->text = global::stdToCLI(Text);
	message->chatID = global::theChatID;
	message->userID = global::theUserID;

	global::messageRepo->insert(message);

	List<messageData^>^ msgsAdded = global::messageRepo->getAll();
	MessageId = msgsAdded[msgsAdded->Count - 1]->messageID;

	Status* status = new Status(MessageId);
	//connect message with chatroom
	chatMessageData^ chatMessage = gcnew chatMessageData();
	chatMessage->chat_ID = global::theChatID;
	chatMessage->message_ID = MessageId;
	global::chatMessageRepo->insert(chatMessage);


}

int Messages::getUserID()
{
	return UserID;
}

int Messages::getMessageID()
{
	return MessageId;
}

//Status Messages::getStatus() {
//	return status;
//}

string Messages::getText() {
	return Text;
}



