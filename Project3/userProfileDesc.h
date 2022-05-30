#pragma once
#include<iostream>
#include<string>
#include"SqlRepo.h"
using namespace std;
//using namespace Globals;

#include "global.h"

class userProfileDesc
{
	int userID;
	string personalPhoto;
	string aboutDescription;
	bool visibility;


public:
	userProfileDesc();
	userProfileDesc(int ID);
	void changeProfilePhoto(string newPhoto);
	string getProfilePhoto();
	void changeVisibility();
	void editAboutDescription(string newAbout);
	
};
