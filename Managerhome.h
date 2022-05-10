#pragma once
#include "Userhome.h"
#include "Management.h"


class Managerhome
{
private:
	userhome userhome;
	Management management;

	string posttext;
	int article_Snum;
public:

	Managerhome();

	void manage_post();
	void numbering();
	void manage_del();
	void manage_repost();
	void reportedreply_view();
	void censor_reply();

	void test_post();
};
