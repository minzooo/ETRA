#pragma once
#include <iostream>
#include <map>
#include<string>
#include <vector>

#include "Management.h"
using namespace std;

class Showing_article
{
private:
	
	Management management;

	// map<string, int> forSort_S_event;

	map<int, int> forSort_S_searchword;

	map<int, int> forSort_S_view;


	//map<int, string> forSort_S_article;

	map<int, int> forsort_S_searchword;

	map<int, int> viewof_event;

	map<int, vector<int>>showingarticle_article_info;
	map<int, string, greater<int>>showingarticle_article_text;
	map<int, string>showingarticle_event_text;
	map<int, string>showingarticle_newspaper;
	map<int, string, greater<int>>showingarticle_reply_text;


public:

	void sortby_event(int event);

	void sortby_newspaper(int newspaper_num);

	void sort_event();

	void sortby_views();

	void view_article(int);

	void sortby_latest();

	void sortby_search(string searchword);

	void views_event();


	// 테스팅코드
	void test_sortby_event();
	void test_sortby_newspaper();
	void test_sort_event();
	void test_sortby_views();
	void test_view_article();
	void test_sortby_latest();
	void test_sortby_search();
	void test_views_event();
};