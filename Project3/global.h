#pragma once
#pragma once
#include "SqlRepo.h"
#include "UserData.h"
#include "chatsUsersData.h"
#include "chatRoomsData.h"
#include "UserDescData.h"
#include "statusData.h"
#include "messageData.h"
#include "usersContactsData.h"
#include "chatMessageData.h"
#include "storyData.h"
#include "User.h"


using namespace DBRepository;


#include <msclr/gcroot.h>
using namespace msclr;

#include<string>
using namespace std;

namespace global {
	extern int theUserID;// global variable for the current account ID
	extern int theChatID;// global variable for the current chatroom ID
	extern gcroot<SqlRepo<UserData^>^> usersRepo;
	extern gcroot<SqlRepo<chatRoomsData^>^> chatRoomsRepo;
	extern gcroot<SqlRepo<UserDescData^>^> descRepo;
	extern gcroot<SqlRepo<statusData^>^> statusRepo;
	extern gcroot<SqlRepo<messageData^>^> messageRepo;
	extern gcroot<SqlRepo<chatMessageData^>^> chatMessageRepo;
	extern gcroot<SqlRepo<usersContactsData^>^> userContactsRepo;
	extern gcroot<SqlRepo<chatsUsersData^>^> chatsUsersRepo;
	extern gcroot<SqlRepo<storyData^>^> storyRepo;
	//convert .NET String to c++ string
	extern string cliToSTD(String^ cliString);

	//convert c++ string to .NET String
	extern String^ stdToCLI(string stdString);
}