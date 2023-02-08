#include <iostream>
using namespace std;
main()
{
	string fruits[4] = {"peach","apple","guava","watermelon"};
	int price[4] = {60,70,40,30};
	string fruit;
	int amount;
	bool found = true;
	int count = 0;
	cout  <<  "Enter fruit name: ";
	cin  >>  fruit;
	cout  <<  "Enter fruit amount: ";
	cin  >>  amount;
	for(int i = 0;i < 4;i++)
	{
		int BILL;
		if(fruit == fruits[i])
		{
			BILL = price[i] * amount;
			count++;
			cout  <<  "Your total bill is "  <<  BILL  <<  ".";
			break;
		}
		else
		{
			found = false;
		}
		
	}
	
	if(found == false)
	{
		cout  <<  "Fruit not found";
	}
}
