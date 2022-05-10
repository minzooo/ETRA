#pragma once
#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<cstring>
#include<vector>

#include "Autofilter.h"
#include "Management.h"
using namespace std;

class Reaction
{
private:

	Management management;

	//map<int, string, greater<int>>reply_text;
	map<int, string, greater<int>>::iterator iter_2;

	map<int, vector<int>>article_info;
	multimap<int, int>event_rs;
	multimap<int, int>newspaper_rs;
	multimap<int, int>::iterator iter_3;

	//map<int, vector<int>>reply_info;

	map<int, vector<int>> LnD_databyreply;
	map<int, vector<int>> LnD_databyevent;
	map<int, vector<int>> LnD_databynewspaper;
	map<int, vector<int>> LnD_databyarticle;
	map<int, vector<int>>::iterator iter;
	
	int latest_reply;
	map <int, vector<int>> reaction_reply_info;
	map<int, string, greater<int>>reaction_reply_text;

public:
	Reaction();
	string reply_view(int);
	void reply_write(int,int,int,string);
	void reply_report(int);
	void reply_switch(int);
	void LnD_save(int,int);
	void LnD_show(int);
	void Sort_reply_latest();
	void Sort_reply_likes();
	void keyword_show();
};

