#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <map>
#include <string.h>
#include<vector>
#include <atlstr.h>
using namespace std;

class Management
{
public:
    Management();
    void manage_post(CString, CString);
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

    void get_article_text(map<int, CString, greater<int>>);
    void save_article_text(map<int, CString, greater<int>>);
    
    void get_reply_text(map<int, CString, greater<int>>);
    void save_reply_text(map<int, CString, greater<int>>);

    void get_event_text(map<int, CString>);
    void save_event_text(map<int, CString>);
    
    void get_newspaper(map<int, CString>);
    void save_newspeper(map<int, CString>);

private:
 
    map<int, vector<int>> article_info;
    map<int, vector<int>> reply_info;
    map<int, CString, greater<int>> article_text;
    map<int, CString, greater<int>> article_title;
    map<int, CString, greater<int>> reply_text;

    map<int, CString> event_text;
    map<int, CString> newspaper;

    map<int, vector<int>>LnD_databyevent;
    map<int, vector<int>>LnD_databynewspaper;
    map<int, vector<int>>LnD_databyarticle;


    CString events;
    CString newspapers;
    int latest_article;
    
    CString revised_text;
    int unseen = 0; //censer_reply
};
