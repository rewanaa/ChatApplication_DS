#include "userProfileDesc.h"

userProfileDesc::userProfileDesc() {
	userID = global::theUserID;
	 personalPhoto="";
	aboutDescription="Available";
	 visibility=true;

	 UserDescData^ desc = gcnew UserDescData();
	 desc->UserId = userID;
	 desc->photo = global::stdToCLI(personalPhoto);
	 desc->about = global::stdToCLI(aboutDescription);
	 desc->visibility = visibility;
	 global::descRepo->insert(desc);

}
userProfileDesc::userProfileDesc(int ID) {
	UserDescData^ desc = global::descRepo->getItem(ID);
	userID = ID;
	personalPhoto = global::cliToSTD(desc->photo);
	aboutDescription = global::cliToSTD(desc->about);
	visibility = desc->visibility;
}
void userProfileDesc ::changeVisibility() {
	visibility = !visibility;
	UserDescData^ desc = gcnew UserDescData();
	desc = global::descRepo->getItem(global::theUserID);
	desc->visibility = !visibility;
	bool updated = global::descRepo->update(global::theUserID, desc);
}
void userProfileDesc::editAboutDescription(string newAbout) {
	aboutDescription = newAbout;
	UserDescData^ desc = gcnew UserDescData();
	desc = global::descRepo->getItem(global::theUserID);
	desc->about = global::stdToCLI(aboutDescription);
	bool updated = global::descRepo->update(global::theUserID, desc);

}
void userProfileDesc::changeProfilePhoto(string newPhoto) {
	personalPhoto = newPhoto;
	UserDescData^ desc = gcnew UserDescData();
	desc = global::descRepo->getItem(global::theUserID);
	desc->photo = global::stdToCLI(personalPhoto);
	bool updated = global::descRepo->update(global::theUserID, desc);
}

string userProfileDesc::getProfilePhoto() {
	return personalPhoto;
}
