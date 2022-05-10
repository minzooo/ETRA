#include<iostream>
#include<string>
#include<map>
using namespace std;

#include "Userinfo.h"

void Userinfo::make_testdata()
{
	u_data.insert(make_pair("user", "1234"));
	m_data.insert(make_pair("manager", "0987"));
}

void Userinfo::greeter(string user_id, string user_pw)
{


	if (u_data.find(user_id) != u_data.end() || m_data.find(user_id) != m_data.end())
	{
		if (user_pw == u_data[user_id])
		{
			cout << "call userhome";
		}
		else if (user_pw == m_data[user_id])
		{
			cout << "call manager home";
		}
	}

	else
	{
		cout << "Not found your account!!!";
	}

}

