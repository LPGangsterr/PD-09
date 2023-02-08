#include <iostream>
using namespace std;
main()
{
	int index;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	string colors[index];
	int count = 0;
	int change = 0;
	int time = 0;
	for(int i = 0;i < index;i++)
	{
		cout  <<  "Enter any color: ";
		cin  >>  colors[i];
	}
	for(int j = 0;j < index;j++)
	{
		if(colors[j] != colors[j+1])
		{
			count++;
			change++;
		}
		else
		{
			count++;
		}
	}
	change = change - 1;
	time = (count * 2) + (change * 1);
	cout  <<  time;
}
