#pragma once

#include <iostream>
#include <map>
#include <string>
using namespace std;

class Userinfo
{
private:
	map <CString, CString> u_data;
	map <CString, CString> m_data;

public:
	void make_testdata();
	int greeter(CString, CString);

	//void test_wrong_login();
};

