#include <iostream>
#include <map>
#include "pch.h"
using namespace std;

#include "Management.h"
#include "Managerhome.h"


Managerhome::Managerhome()
{
	article_Snum = 0;
}

void Managerhome::manage_post()
{
	management.manage_post (posttitle, posttext);
}

void Managerhome::numbering()
{
	management.numbering();
}

void Managerhome::manage_del()
{
	management.manage_del(article_Snum);
}

void Managerhome::manage_repost()
{
	management.manage_repost(article_Snum);
}
void Managerhome::reportedreply_view()
{
	management.reportedreply_view();
}
void Managerhome::censor_reply()
{
	management.censor_reply();
}
