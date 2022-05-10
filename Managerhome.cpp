#include <iostream>
#include <map>
using namespace std;

#include "Management.h"
#include "Managerhome.h"


Managerhome::Managerhome()
{
	article_Snum = 0;
}

void Managerhome::manage_post()
{
	management.manage_post();
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

void Managerhome::test_post()
{
	
	posttext = "This is testing article text.";
	cout << ":::::::article post& view test:::::::" << '\n'<<":::::::post:::::::" << "text: " << posttext << '\n';
	management.manage_post();

}