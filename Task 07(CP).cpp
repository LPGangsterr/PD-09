#include <iostream>
using namespace std;
main()
{
	string s1;
	cout  <<  "Enter first string: ";
	cin  >>  s1;
	string s2;
	cout  <<  "Enter second string: ";
	cin  >>  s2;
	int count = 0;
	for(int i = 0;s1[i] != '\0';i++)
	{
		for(int j = 0;s2[j] != '\0';j++)
		{
			if(s1[i]  ==  s2[j])
			{
				count++;
				s2[j] = ' ';
				break;
			}
		}
	}
	cout  <<  "There are "  <<  count  <<  " common elements in the given strings.";
}