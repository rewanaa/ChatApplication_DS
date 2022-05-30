#pragma once
#include <string>
#include <iostream>
#include <ctime>
#define _CRT_SECURE_NO_WARNINGS
#include "userStory.h"


userStory::userStory(string storyAdded, bool type)
{
	storyData^ storyFound = global::storyRepo->getItem(global::theUserID);

	time_t now = time(0);
	timeOfaddingStory = now;
	timeOfStory = ctime(&now);
	if (storyFound ->story_user_id == global::theUserID) {
		storyFound->type = type;
		if (type == 0)
			storyFound->storyPhoto = global::stdToCLI(storyAdded);
		else
			storyFound->storyText = global::stdToCLI(storyAdded);

		storyFound->published_time_t = timeOfaddingStory;
		storyFound->published_time = global::stdToCLI(timeOfStory);
		global::storyRepo->update(global::theUserID, storyFound);
	}
	else{
	userID = global::theUserID;
	storyType = type;

	if (type == 0)
		storyPhoto = storyAdded;
	else 
		storyText = storyAdded;




	storyData^ story = gcnew storyData();
	story->story_user_id = global::theUserID;
	story->published_time = global::stdToCLI(timeOfStory);
	story->published_time_t = timeOfaddingStory;
	story->storyPhoto = global::stdToCLI(storyPhoto);
	story->storyText = global::stdToCLI(storyText);
	story->type = type;
	global::storyRepo->insert(story);
	}

}


