#include<iostream>
using namespace std;
main()
{
	string MOVES[10] = {"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
	string Digits;
	string Alphabets = "abcdefghijklmnopqrstuvwxyz";
	int Position = 0;
	bool isFound = false;
	cout  <<  "Enter any digits: ";
	cin  >>  Digits;
	for(int j = 0;Digits[j] != '\0';j++)
	{
		for(int k = 0;Alphabets[k] != '\0';k++)
		{
			if(Digits[j]  ==  Alphabets[k])
			{
				isFound = false;
				break;
			}
			else if(Digits[j]  !=  Alphabets[k])
			{
				isFound = true;
			}	
		}
		if(isFound == false)
		{
			break;
		}
	}
	if(isFound == false)
	{
		cout  <<  "Invalid Input";
	}
	if(isFound == true)
	{
		for(int i = 0;Digits[i] != '\0';i++)
		{
			int Sum;
			if(Digits[i]  ==  '0')
			{
				Sum = 0 + Position;
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '1')
			{
				Sum = 1 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '2')
			{
				Sum = 2 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;		
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '3')
			{
				Sum = 3 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;		
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '4')
			{
				Sum = 4 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;		
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '5')
			{
				Sum = 5 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;		
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '6')
			{
				Sum = 6 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;		
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '7')
			{
				Sum = 7 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '8')
			{
				Sum = 8 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			if(Digits[i]  ==  '9')
			{
				Sum = 9 + Position;
				if(Sum > 9)
				{
					Sum = Sum % 10;
					cout  <<  MOVES[Sum]  <<  endl;
					Position = Position + 1;
					continue;
				}
				cout  <<  MOVES[Sum]  <<  endl;
			}
			Position = Position + 1;
		}
	}
}