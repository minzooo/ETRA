#include <iostream>
#include <map>
using namespace std;

#include "Userhome.h"
#include "Managerhome.h"



int main()
{
	userhome home = userhome();
	Managerhome mhome = Managerhome();

	

	//home.test_wrong_login();
	//home.test_proper_reply_write();
	//home.test_improper_reply_write();
	///test_post&view////
	mhome.test_post();
	//home.test_view_article();

	return 0;

}