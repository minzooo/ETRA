#pragma once
#include <iostream>
#include <map>
#include <string>

class Userinfo
{
private:
	map<string, string> u_data;
	map<string, string> m_data;

public:
	void make_testdata();
	void greeter(string, string);

	//void test_wrong_login();
};