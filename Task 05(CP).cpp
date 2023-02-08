#include <iostream>
using namespace std;
main()
{
	string words[4];
	for(int i = 0;i < 4;i++)
	{
		cout  <<  "Enter any characters: ";
		cin  >>  words[i];
	}
	if(words[0]  ==  words[1])
	{
		if(words[1]  ==  words[2])	
		{
			if(words[2]  ==  words[3])
			{
				cout  <<  "True";  
			}
			else
			{
				cout  <<  "False";
			}
		}
		else
		{
			cout  <<  "False";
		}
	}
	else
	{
		cout  <<  "False";
	}	
}