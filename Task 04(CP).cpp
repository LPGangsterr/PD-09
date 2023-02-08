#include <iostream>
using namespace std;
main()
{
	int index;
	bool found = false;
	cout  <<  "Enter any number for indexes: ";
	cin  >>  index;
	int numbers[index];
	for(int i = 0;i < index;i++)
	{
		cout  <<  "Enter any number: ";
		cin  >>  numbers[i];
	}
	for(int j = 0;j < index;j++)
	{
		if(numbers[j]  ==  7)
		{
			cout  <<  "BOOM!";
			found = true;
		}
		else if(numbers[j] % 10  ==  7  )
		{
			cout  <<  "BOOM!";
			found = true;
		}
	}
	if(found == false)
	{
		cout  <<  "There is no 7 in the array.";
	}
}
