#include<iostream>
#include<fstream>
#include<map>
#include<string>
#include<cstring>
#include<vector>

#include "Reaction.h"
#include "Autofilter.h"
#include "Management.h"
using namespace std;

Reaction::Reaction() 
{
	latest_reply = 0;
}

string Reaction::reply_view(int reply_serial)
{
	// Management.get_reply_text(reaction_reply_text);
	//cout << reaction_reply_text[reply_serial] << "\n";
	return reaction_reply_text[reply_serial];
}


void Reaction::reply_write(int es, int ns, int as , string text_reply)
{
	management.get_reply_text(reaction_reply_text);
	management.get_reply_info(reaction_reply_info);
	int latest_reply = 0;
	for (auto& iter : reaction_reply_text) {
		latest_reply = iter.first;
	}
	latest_reply += 4;
	
	// 댓글 호불호 정보 저장하는 맵을 생성하는 부분. 
	LnD_databyreply[latest_reply] = vector<int>{ 0, 0 };
	
	
	if (Autofilter(text_reply) != "This is improper!!!!!")
	{
		reaction_reply_info[latest_reply] = vector<int>{ 0, 0, 0, 0 }; // {article, event, newspaper, reported}
		reaction_reply_text.insert(make_pair(latest_reply, text_reply));

		ofstream reply("reply_text.txt");
		if (reply.is_open())
		{
			reaction_reply_text.insert(make_pair(latest_reply, text_reply));				 
			management.save_reply_text(reaction_reply_text);

			reaction_reply_info[latest_reply] = { es, ns, as ,0};
			management.save_reply_info(reaction_reply_info);
			reply_view(latest_reply);

			reply.close();
		}
		else
		{
			cout << "error" << endl;
		}
	}
	else
	{
		reaction_reply_info[latest_reply] = vector<int>{ 0, 0, 0, 0 };
		reaction_reply_text.insert(make_pair(latest_reply, Autofilter(text_reply)));
		management.save_reply_text(reaction_reply_text);

		reaction_reply_info[latest_reply] = { es, ns, as ,0 };
		management.save_reply_info(reaction_reply_info);
		reply_view(latest_reply);
	}
	

	//writeFile.write(text_reply.c_str(), text_reply.size());
	//writeFile.close();
}

void Reaction::reply_report(int reply_serial)
{
	management.save_report(reply_serial);
	//cout << reply_info[reply_serial][4] << "\n";
}

void Reaction::reply_switch(int viewtype)
{
	//유저홈의 choose_viewtype 을 viewtype으로 사용
	//cout << "Enter the viewtype: " << '\n';
	management.get_reply_text(reaction_reply_text);

	if (viewtype == 1)
	{
		for (iter_3 = event_rs.begin(); iter_3 != event_rs.end(); ++iter_3)
		{
			cout << reaction_reply_text[iter_3->first] << '\n';
		}
		management.save_reply_text(reaction_reply_text);
	}
	else if (viewtype == 2)
	{
		for (iter_3 = newspaper_rs.begin(); iter_3 != newspaper_rs.end(); ++iter_3)
		{
			cout << reaction_reply_text[iter->first] << '\n';
		}
		management.save_reply_text(reaction_reply_text);
	}
}

void Reaction::Sort_reply_latest()
{
	management.get_reply_text(reaction_reply_text);
	for (iter_2 = reaction_reply_text.begin(); iter_2 != reaction_reply_text.end(); ++iter_2)
	{
		cout << iter_2->first << " : " << iter_2->second << "\n";
	}
	management.save_reply_text(reaction_reply_text);
}

void Reaction::Sort_reply_likes()
{
	multimap<int, string, greater<int>>under_likes;
	multimap<int, string, greater<int>>::iterator iter_3;

	management.get_reply_info(reaction_reply_info);
	management.get_reply_text(reaction_reply_text);

	for (iter = reaction_reply_info.begin(); iter != reaction_reply_info.end(); iter++++++++)
	{
		under_likes.insert(make_pair(reaction_reply_info[iter->first][3] - reaction_reply_info[iter->first][4], reaction_reply_text[iter->first]));
	}

	for (iter_3 = under_likes.begin(); iter_3 != under_likes.end(); ++iter_3)
	{
		cout << iter_3->first << " : " << iter_3->second << "\n";
	}

}


void Reaction::LnD_save(int serial_number,int preference)
{
	//cout << "Enter a serial number (0,1,2,3)" << "\n";
	//serial_number = 2;

	if (serial_number % 4 == 0)
	{
		//int preference;
		//cout << "Show your preference (like = 0, dislike = 1)" << "\n";
		//cin >> preference;
		if (preference == 0)
		{
			LnD_databyreply[serial_number][0] += 1;
		}
		if (preference == 1)
		{
			LnD_databyreply[serial_number][1] += 1;
		}
		//cout << LnD_databyreply[serial_number][0] << "\n" << LnD_databyreply[serial_number][1] << "\n";
	}

	if (serial_number % 4 == 1)
	{
		//int preference;
		//cout << "Show your preference (like = 0, dislike = 1)" << "\n";
		//cin >> preference;
		if (preference == 0)
		{
			LnD_databyevent[serial_number][0] += 1;
		}
		if (preference == 1)
		{
			LnD_databyevent[serial_number][1] += 1;
		}
		//cout << LnD_databyevent[serial_number][0] << "\n" << LnD_databyevent[serial_number][1] << "\n";
	}

	if (serial_number % 4 == 2)
	{
		//int preference;
		//cout << "Show your preference(like = 0, dislike = 1)" << "\n";
		//cin >> preference;
		if (preference == 0)
		{
			LnD_databynewspaper[serial_number][0] += 1;
		}
		if (preference == 1)
		{
			LnD_databynewspaper[serial_number][1] += 1;
		}
		//cout << LnD_databynewspaper[serial_number][0] << "\n" << LnD_databynewspaper[serial_number][1] << "\n";
	}


	if (serial_number % 4 == 3)
	{
		//int preference;
		//cout << "Show your preference (like = 0, dislike = 1)" << "\n";
		//cin >> preference;
		if (preference == 0)
		{
			LnD_databyarticle[serial_number][0] += 1;
		}
		if (preference == 1)
		{
			LnD_databyarticle[serial_number][1] += 1;
		}
		//cout << LnD_databyarticle[serial_number][0] << "\n" << LnD_databyarticle[serial_number][1] << "\n";
	}
}

void Reaction::LnD_show(int serial_number)
{
	if (serial_number % 4 == 0)
	{
		for (iter = LnD_databyreply.begin(); iter != LnD_databyreply.end(); ++iter)
		{
			vector<int>under_replydata = iter->second;
			cout << "Like : " << under_replydata[0] << "Dislike : " << under_replydata[1];
		}
	}

	if (serial_number % 4 == 1)
	{
		for (iter = LnD_databyevent.begin(); iter != LnD_databyevent.end(); ++iter)
		{
			vector<int>under_eventdata = iter->second;
			cout << "Like : " << under_eventdata[0] << "Dislike : " << under_eventdata[1];
		}
	}
	if (serial_number % 4 == 2)
	{
		for (iter = LnD_databynewspaper.begin(); iter != LnD_databynewspaper.end(); ++iter)
		{
			vector<int>under_newspaperdata = iter->second;
			cout << "Like : " << under_newspaperdata[0] << "Dislike : " << under_newspaperdata[1];
		}
	}

	if (serial_number % 4 == 3)
	{
		for (iter = LnD_databyarticle.begin(); iter != LnD_databyarticle.end(); ++iter)
		{
			vector<int>under_articledata = iter->second;
			cout << "Like : " << under_articledata[0] << "Dislike : " << under_articledata[1];
		}
	}
}

// nlp로 받은 
void Reaction::keyword_show()
{
	string line;
	ifstream file("reply_text.txt");
	if (file.is_open())
	{
		while (getline(file, line))
		{
			cout << line << endl;
		}
		file.close();
	}
	else
	{
		cout << "Unable to open file";
	}
}

