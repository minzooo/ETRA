#include <iostream>
#include <map>
#include<string>
#include <vector>

#include "Showingarticle.h"
#include "Management.h"


void Showing_article::sortby_event(int event)
{
	management.get_article_info(showingarticle_article_info);
	management.get_event_text(showingarticle_event_text);

	for (map<int, vector<int>>::iterator itr = showingarticle_article_info.begin(); itr != showingarticle_article_info.end(); ++itr)
	{
		for (auto& iter : showingarticle_event_text) {
			int serial_number = iter.first;
			string event_text = iter.second;
			if (itr->second[1] == event == serial_number)
			{
				cout << event_text << endl;
			}
		}
	}
}

void Showing_article::sortby_newspaper(int newspaper_num)
{
	management.get_article_info(showingarticle_article_info);
	management.get_event_text(showingarticle_newspaper);

	for (map<int, vector<int>>::iterator itr = showingarticle_article_info.begin(); itr != showingarticle_article_info.end(); ++itr)
	{
		for (auto& iter : showingarticle_newspaper) {
			int serial_number = iter.first;
			string newspaper = iter.second;
			if (itr->second[0] == newspaper_num == serial_number)
			{
				cout << newspaper << endl;
			}
		}
	}
}

void Showing_article::sort_event()
{
	for (map<int, int>::iterator itr = forSort_S_searchword.begin(); itr != forSort_S_searchword.end(); ++itr)
	{
		cout << itr->second << endl;
	}
}

void Showing_article::sortby_views()
{
	management.get_article_text(showingarticle_article_text);
	int sort_type = 0;
	cout << "Choose viewtype : " << "\n";
	cin >> sort_type;

	if (sort_type == 0) {
		for (map<int, int, greater<int>> ::iterator itr = forSort_S_view.begin(); itr != forSort_S_view.end(); itr++)
		{
			for (map<int, string, greater<int>> ::iterator it = showingarticle_article_text.begin(); it != showingarticle_article_text.end(); it++)
			{
				if (it->first == itr->first) {
					cout << it->second;
				}
			}
		}
	}
	else if (sort_type == 1) {
		for (map<int, int, greater<int>> ::iterator itr = forSort_S_view.begin(); itr != forSort_S_view.end(); itr++)
		{
			for (map<int, string, greater<int>> ::iterator it = showingarticle_article_text.begin(); it != showingarticle_article_text.end(); it++)
			{
				if (it->first == itr->first) {
					cout << it->second;
				}
			}
		}
	}
}

void Showing_article::view_article(int num)
{
	management.get_article_text(showingarticle_article_text);
	management.get_reply_text(showingarticle_reply_text);
	
	int viewtime = 0;

	for (map<int, int>::iterator itr = forSort_S_view.begin(); itr != forSort_S_view.end(); itr++)
	{
		if (num == itr->first) {
			forSort_S_view.find(num)->second += 1;
			//cout << itr->second;
		}
	}

	for (map<int, string> ::iterator itr = showingarticle_article_text.begin(); itr != showingarticle_article_text.end(); itr++)
	{
		if (num == itr->first) {
			cout << itr->second << "\n";
		}
	}


	for (map<int, string> ::iterator itr = showingarticle_reply_text.begin(); itr != showingarticle_reply_text.end(); itr++)
	{
		if (num == itr->first) {
			cout << itr->second << "\n";
		}
	}
}

void Showing_article::sortby_latest()
{
	management.get_article_text(showingarticle_article_text);
	for (map<int, string, greater<int>>::iterator itr = showingarticle_article_text.begin(); itr != showingarticle_article_text.end(); ++itr)
	{
		cout << itr->second << "\n";
	}
}

void Showing_article::sortby_search(string search_word) 
{
	management.get_article_text(showingarticle_article_text);
	string str;
	string searchword;
	cin >> searchword;

	for (map<int, string>::iterator itr = showingarticle_article_text.begin(); itr != showingarticle_article_text.end(); ++itr)
	{
		int x = 0;
		int cnt = 0;
		int index = str.find(searchword, x);
		while (1) {
			//int index = str.find(searchword, x);
			if (index == -1) break;
			cnt++;
			x = index + 1;
			for (map<int, int>::iterator itr = forSort_S_searchword.begin(); itr != forSort_S_searchword.end(); ++itr)
			{
				(*itr).second += cnt;
				//cout << itr->second << "\n";
			}
		}
		//cout << itr->second << "\n";
	}

}

void Showing_article::views_event()
{
	int event;

	cin >> event;

	for (map<int, int>::iterator itr = viewof_event.begin(); itr != viewof_event.end(); itr++)
	{
		if (event == itr->first) {
			viewof_event.find(event)->second += 1;
			cout << itr->second;
		}
	}
}

void Showing_article::test_sortby_event()
{
	sortby_event();
}

void Showing_article::test_sortby_newspaper()
{
	sortby_newspaper();
}

void Showing_article::test_sort_event()
{
	sort_event();
}

void Showing_article::test_sortby_views()
{
	sortby_views();
}

void Showing_article::test_view_article()
{
	view_article();
}

void Showing_article::test_sortby_latest()
{
	sortby_latest();
}

void Showing_article::test_sortby_search()
{
	sortby_search();
}

void Showing_article::test_views_event()
{
	views_event(); 

}
