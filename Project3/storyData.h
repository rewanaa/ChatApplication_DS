#pragma once
using namespace System;

public ref class storyData {
public:
	int story_user_id;
	String^ published_time;
	String^ storyText;
	String^ storyPhoto;
	time_t published_time_t;
    bool type;
};