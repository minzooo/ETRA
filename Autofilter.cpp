#include <iostream>
#include <string>
#include <array>
#include "pch.h"


using namespace std;
#include "Autofilter.h"


CString Autofilter(CString text_reply)
{
	array<CString, 3> deadwordlist = { L"stupid", L"idiot", L"dumb" };

	for (int i = 0; i < deadwordlist.size(); i++)
	{
		if (text_reply.Find(deadwordlist[i]) == string::npos)
		{
			continue;
		}
		else
		{
			text_reply = "This is improper!!!!!";
			return (text_reply);
			break;
		}
	}
	
	return (text_reply);
}

