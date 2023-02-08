#include <iostream>
using namespace std;
main()
{
	int index;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	int transform;
	cout  <<  "Enter number of times even-odd transfomation need to be done: ";
	cin  >>  transform;
	int numbers[index];
	for(int i =0;i < index;i++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  numbers[i];
	}
	for(int j = 0;j < transform;j++)
	{
		for(int k = 0;k < index;k++)
		{
			if(numbers[k] % 2 == 0)
			{
				numbers[k] = numbers[k] - 2;
			}
			else
			{
				numbers[k] = numbers[k] + 2;
			}
		}
	}
	cout  <<  "["  <<  numbers[0]  <<  ","  <<  numbers[1]  <<  ","  <<  numbers[2]  <<  "]";
}
