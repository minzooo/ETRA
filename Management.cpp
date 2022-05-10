#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>
#include<vector>
#include "Management.h"
using namespace std;

map<int, string> newspaper =
{
    {2, "경향신문"},
    {6, "국민일보"},
    {10, "동아일보"},
    {14, "문화일보"},
    {18, "서울신문"},
    {22, "세계일보"},
    {26, "조선일보"},
    {30, "중앙일보"},
    {34, "한겨례"},
    {38, "한국일보"}
};


map<int, string> event_text;

Management::Management() 
{
    latest_article = 3;
}

void Management::manage_post()
{
    string title;
    cout << "Enter title: ";
    cin >> title;

    string text;
    cout << "Enter text: ";
    cin >> text;

    int latest_article = 3;
    for (auto& iter : article_text) {
        latest_article = iter.first;
    }

    latest_article += 4;

    // 같은 기사 고유번호를 키값으로 가진 article_info(e, n, reply) 만들어주는 부분
    article_info[latest_article] = vector<int>{ 0, 0, 0 };

    article_title[latest_article] = title;
    article_text[latest_article] = text;
    
}

void Management::save_report(int reply_serial)
{
    reply_info[reply_serial][3] += 1;
}

void Management::numbering() {

    int latest_article;
    for (auto& iter : article_text) {
        latest_article = iter.first;
    }
    int latest_reply;
    for (auto& iter : reply_text) {
        latest_reply = iter.first;
    }
    int latest_event;
    for (auto& iter : event_text) {
        latest_event = iter.first;
    }
    int latest_newspaper;
    for (auto& iter : newspaper) {
        latest_newspaper = iter.first;
    }

    latest_event += 4;
	latest_newspaper += 4;
	latest_article += 4;
	
    // 호불호 정보 저장하는 맵
    LnD_databyevent[latest_event] = vector<int>{ 0, 0 };
    LnD_databynewspaper[latest_newspaper] = vector<int>{ 0, 0 };
    LnD_databyarticle[latest_article] = vector<int>{ 0, 0 };
    

    //cout << "Which newspaper: ";
    //cin >> newspapers;

    for (int j = 2; j < (article_info.size()) * 4 + 2; j += 4) {
        if (newspapers == newspaper[j]) {
            vector<int> temp = article_info[latest_article];
            temp[1] = j;
            break;
        }
        else {
            string n_newspapers;
            cout << "Which newspaper: ";
            cin >> n_newspapers;
            newspaper.insert(make_pair(latest_newspaper, n_newspapers));
            vector<int> temp = article_info[latest_article];
            temp[1] = latest_newspaper;
            break;
        }
        break;
    }

    
    //printf("Which event: ");
    //cin >> events;

    for (int i = 1; i < (article_info.size()) * 4 + 1; i += 4) {
        if (events == event_text[i]) {
            vector<int> temp = article_info[latest_article];
            temp[0] = i;
            break;
        }
        else {
            string n_events;
            cout << "Which event: ";
            cin >> n_events;
            event_text.insert(make_pair(latest_event, n_events));
            vector<int> temp = article_info[latest_article];
            temp[0] = latest_event;
            break;
        }
        break;
    }

}

void Management::manage_del(int article_Snum) {
    
   // cout << "Enter an article number: ";
   // cin >> article_Snum;

    article_text.erase(article_Snum);
    article_title.erase(article_Snum);

    if (reply_info[article_Snum][0] = article_Snum) {
        reply_text.erase(article_Snum);
    }
    
}

void Management::manage_repost(int article_Snum) {
  
    //cout << "Enter an article number: ";
    //cin>>article_Snum;
    //cout << "Enter text: ";

    article_text[article_Snum] = revised_text;
}


void Management::reportedreply_view()
{ 
    for (int i = 0; i < (reply_info.size()) * 4; i += 4) {
        if (reply_info[i][3] != 0) {
            cout << reply_text[i];
        }
    }
}

void Management::censor_reply() {
    int unseen = 0 ;
    printf("Enter 0 or 1");
    scanf("%d", unseen);
    for (int i = 0; i < reply_text.size() + 1; i++) {
        if (unseen == 1) { // unseen 버튼을 누르는 것이 1 
            reply_text[i] = "This is improper";
        }
    }
}

void Management::get_article_info( map <int, vector<int>> temp)
{
    temp = article_info;
}

void Management::save_article_info( map <int, vector<int>> temp)
{
    article_info = temp;
}


void Management::get_reply_info(map <int, vector<int>> temp)
{
    temp = reply_info;
}

void Management::save_reply_info(map <int, vector<int>> temp)
{
    reply_info = temp;
}


void Management::get_article_text(map <int, string, greater<int>> temp)
{
    temp = article_text;
}

void Management::save_article_text(map <int, string, greater<int>> temp)
{
    article_text = temp;
}


void Management::get_reply_text(map <int, string, greater<int>> temp)
{
    temp = reply_text;
}

void Management::save_reply_text(map <int, string, greater<int>> temp)
{
    reply_text = temp;
}


void Management::get_event_text(map <int, string> temp)
{
    temp = event_text;
}

void Management::save_event_text(map <int, string> temp)
{
    event_text = temp;
}

void Management::get_newspaper(map <int, string> temp)
{
    temp = newspaper;
}

void Management::save_event_text(map <int, string> temp)
{
    newspaper = temp;
}

void Management::save_newspaper(map<int, string> temp)
{
    temp = newspaper;
}