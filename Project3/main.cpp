#include "signIn.h"
#include "SignUp.h"
#include "chatroom.h"
#include<string>
#include "SqlRepo.h"
#include "global.h"

//using namespace Globals;
using namespace global;
using namespace System;
using namespace std;
using namespace System::ComponentModel;
using namespace System::Drawing;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main() {

	SqlDbManager::startConnection("Data Source=DESKTOP-PS268NT;Initial Catalog=ChatApplication;Integrated Security=True");
	if (!usersRepo->tableExists()) {
		usersRepo->createTable("UserId");
	}
	if (!chatRoomsRepo->tableExists()) {
		chatRoomsRepo->createTable("chatroomID");
	}
	if (!descRepo->tableExists()) {
		descRepo->createTable("UserId");
	}
	if (!statusRepo->tableExists()) {
		statusRepo->createTable("messageID");
	}
	if (!messageRepo->tableExists()) {
		messageRepo->createTable("messageID");
	}
	if (!chatMessageRepo->tableExists()) {
		chatMessageRepo->createTable("message_ID");
	}
	if (!userContactsRepo->tableExists()) {
		userContactsRepo->createTable("user_ID,contact_ID");
	}
	if (!chatsUsersRepo->tableExists()) {
		chatsUsersRepo->createTable("chatroom_ID,member_ID");
	}
	if (!storyRepo->tableExists()) {
		storyRepo->createTable("story_user_id");
	}
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	/*Application::Run(gcnew CppCLRWinformsProjekt::chatroom());*/

	while (true) {
		Project3::SignIn form;
		form.ShowDialog();
		if (form.switchToSignup) {
			Project3::SignUp signup;
			signup.ShowDialog();
			if (signup.switchToLogin) {
				continue;
			}
			else {
				//user = signup.user;
				break;
			}
		}
		else {
			break;
		}

	}
}

