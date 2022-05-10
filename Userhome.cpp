
using namespace std;

#include "Userhome.h"
#include "showingarticle.h"
#include "Reaction.h"

Reaction reaction;
Showing_article showingarticle;

userhome::userhome()
{
	choose_viewtype = 1;
}

void userhome::search()
{
	//string searchword;
	//showingarticle::search(searchword);
}

void userhome::greeter(string id, string pw)
{
	id = user_id;
	pw = user_pw;
	userinfo.greeter(id, pw);
}


// Reaction

void use_reply_write(int es, int ns, int as, string text_reply)
{
	reaction.reply_write(es, ns, as, text_reply);
}

void use_reply_report(int reply_serial)
{
	reaction.reply_report(reply_serial);
}
void use_reply_switch(int num)
{
	cout << "enter 0 or 1";
	reaction.reply_switch(num);
}
void use_reply_keyword_show()
{
	reaction.keyword_show();
}
void use_LnD_save(int serial_number, int preference)
{
	reaction.LnD_save(serial_number, preference);
}
void use_LnD_show(int serial_number)
{
	reaction.LnD_show(serial_number);
}
void use_Sort_reply_latest()
{
	reaction.Sort_reply_latest();
}
void use_Sort_reply_likes()
{
	reaction.Sort_reply_likes();
}

//Showing articles

void use_sortby_event()
{
	showingarticle.sortby_event();
}

void sortby_newspaper()
{
	showingarticle.sortby_newspaper();
}

void sort_event()
{
	showingarticle.sort_event();
}

void sortby_views()
{
	showingarticle.sortby_views();
}

void view_article(int num)
{
	showingarticle.view_article(num);
}

void sortby_latest()
{
	showingarticle.sortby_latest();
}

void sortby_search(string searchword)
{
	showingarticle.sortby_search(searchword);
}

void views_event()
{
	showingarticle.views_event();
}

/*
void userhome::test_view_article()
{
	cout << "::::::: view :::::::" << '\n';
	article_num = 3;
	showingarticle.view_article(article_num);
}

void userhome::test_reply_write(int as, int ns, int es, string text_reply) 
{
	as = 3;
	ns = 2;
	es = 1;
	string text_reply = "hello world";

	///
	for (int i = 0; i <= 40; i+=4)
	{
		if (Autofilter(text_reply) != "This is improper!!!!!")
		{
			reaction.reply_write(text_reply);
			userhome_reply_info[i] = { es, ns, as };
			reaction.reply_view(i);
		}
		else
		{
			cout << "This is improper!!!!!" << "\n";
		}
	}
}

void userhome::test_showing_preference()
{
	for (int i = 0; i <= 40; i += 4)
	{
		reaction.LnD_save(i, 0);
		reaction.LnD_show(i);
	}
}

void userhome::test_reply_sorting()
{
	cout << "lastest" << "\n";
	reaction.Sort_reply_latest();

	cout << "likes" << "\n";
	reaction.Sort_reply_likes();
}

void userhome::test_reply_report()
{
	for (int i = 0; i <= 40; i += 4)
	{
		reaction.reply_report(i);
	}
}*/


