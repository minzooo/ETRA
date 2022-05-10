#pragma once
#pragma once
#include "Userinfo.h"
#include "Reaction.h"
#include "Showingarticle.h"
#include "Management.h"


class userhome
{
private:
	Userinfo userinfo;
	Reaction reaction;
	Showing_article showingarticle;

	string user_id;
	string user_pw;

	int choose_viewtype;
	string text_reply;
	int preference;
	int article_num;
	int as;
	int es;
	int ns;


public:

	userhome();
	void search();
	void greeter(string, string);
	

	/*void test_wrong_login();
	void test_proper_reply_write();
	void test_improper_reply_write();
	void test_view_article();
	void test_reply_write(int, int, int, string);
	void test_showing_preference();
	void test_reply_sorting();
	void test_reply_report();*/


	// Reaction

	void use_reply_write(int, int, int, string);
	void use_reply_report(int);
	void use_reply_switch(int);
	void use_reply_keyword();
	void use_LnD_save(int, int);
	void use_LnD_show(int);
	void use_Sort_reply_latest();
	void use_Sort_reply_likes();
	void use_keyword_show();


	//Showing articles
	void use_sortby_event();
	void use_sortby_newspaper();
	void use_sort_event();
	void use_sortby_views();
	void use_view_article();
	void use_ortby_latest();
	void use_sortby_search();
	void use_views_event();
};


