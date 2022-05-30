#include "pch.h"
#include "global.h"
#include "SqlRepo.h"
#include <msclr/gcroot.h>

using namespace msclr;
using namespace DBRepository;

namespace global {

	extern int theUserID = 2;
	extern int theChatID = 1;

	extern gcroot<SqlRepo<UserData^>^> usersRepo = gcnew SqlRepo<UserData^>("UserData", true);
	extern gcroot<SqlRepo<chatRoomsData^>^> chatRoomsRepo = gcnew SqlRepo<chatRoomsData^>("chatRoomsData",true);
	extern gcroot<SqlRepo<UserDescData^>^> descRepo = gcnew SqlRepo<UserDescData^>("UserDescData");
	extern gcroot<SqlRepo<statusData^>^> statusRepo = gcnew SqlRepo<statusData^>("statusData");
	extern gcroot<SqlRepo<messageData^>^> messageRepo = gcnew SqlRepo<messageData^>("messageData", true);
	extern gcroot<SqlRepo<chatMessageData^>^> chatMessageRepo = gcnew SqlRepo<chatMessageData^>("chatMessageData");
	extern gcroot<SqlRepo<usersContactsData^>^> userContactsRepo = gcnew SqlRepo<usersContactsData^>("usersContactsData");
	extern gcroot<SqlRepo<chatsUsersData^>^> chatsUsersRepo = gcnew SqlRepo<chatsUsersData^>("chatsUsersData");
	extern gcroot<SqlRepo<storyData^>^> storyRepo = gcnew SqlRepo<storyData^>("storyData");

	string cliToSTD(String^ cliString) {
		char cStr[450] = { 0 };
		if (cliString->Length < sizeof(cStr))
			sprintf(cStr, "%s", cliString);
		string stdString(cStr);
		//string stdString(cStr);
		return stdString;
	}

	String^ stdToCLI(string stdString) {
		return gcnew String(stdString.c_str());
	}
}