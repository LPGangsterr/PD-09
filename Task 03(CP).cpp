#include <iostream>
using namespace std;
main()
{
	string fruits;
	int count = 0;
	cout  <<  "Enter fruit name: ";
	cin  >>  fruits;
	for(int i = 0;fruits[i] != '\0';i++)
	{
		count = count + 1;
	}
	if(count % 2 == 0)
	{
		cout  <<  "EVEN";
	}
	else if(count % 2 != 0)
	{
		cout  <<  "ODD";
	}
}