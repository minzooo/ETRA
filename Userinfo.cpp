#include "pch.h"
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

int Userinfo::greeter(CString user_id, CString user_pw)
{

	if (u_data.find(user_id) != u_data.end() || m_data.find(user_id) != m_data.end())
	{
		
		if (user_pw == u_data[user_id])
		{
			return 1;
		}
		else if (user_pw == m_data[user_id])
		{
			return 2;
		}
		
	}

	else
	{
		return 0;
	}

}

