#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>
#include<vector>
using namespace std;

class Management
{
public:
    Management();
    void manage_post();
    void numbering();
    void manage_del(int);
    void manage_repost(int);
    void reportedreply_view();
    void censor_reply();
    void save_report(int);

    void get_article_info(map<int ,vector<int>>);
    void save_article_info(map<int, vector<int>>);

    void get_reply_info( map <int, vector<int>>);
    void save_reply_info( map <int, vector<int>>);

    void get_article_text(map<int, string, greater<int>>);
    void save_article_text(map<int, string, greater<int>>);
    
    void get_reply_text(map<int, string, greater<int>>);
    void save_reply_text(map<int, string, greater<int>>);

    void get_event_text(map<int, string>);
    void save_event_text(map<int, string>);
    
    void get_newspaper(map<int, string>);
    void save_newspaper(map<int, string>);

private:
 
    map<int, vector<int>> article_info;
    map<int, vector<int>> reply_info;
    map<int, string, greater<int>> article_text;
    map<int, string, greater<int>> article_title;
    map<int, string, greater<int>> reply_text;

    map<int, string> event_text;
    map<int, string> newspaper;

    map<int, vector<int>>LnD_databyevent;
    map<int, vector<int>>LnD_databynewspaper;
    map<int, vector<int>>LnD_databyarticle;


    string events;
    string newspapers;
    int latest_article;
    
    string revised_text;
    int unseen; //censer_reply

};
