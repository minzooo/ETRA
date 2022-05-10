#include <iostream>
#include <string>
#include <array>


using namespace std;
#include "Autofilter.h"


string Autofilter(string text_reply)
{
	array<string, 3> deadwordlist = { "stupid", "idiot", "dumb" };

	for (int i = 0; i < deadwordlist.size(); i++)
	{
		if (text_reply.find(deadwordlist[i]) == string::npos)
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

