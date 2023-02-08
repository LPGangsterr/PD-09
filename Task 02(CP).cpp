#include <iostream>
using namespace std;
main()
{
	string Movies[6] = {"NULL","Gladiator","StarWars","Terminator","TakingLives","TombRaider"};
	float Price = 500;
	string Movie;
	float Cost;
	int Discount;
	bool found = false;
	cout  <<  "Enter movie name: ";
	cin  >>  Movie;
	for(int i = 1;i <= 5;i++)
	{
		if(Movie == Movies[i])
		{
			if(i % 2  ==  0)
			{
				Cost = Price * 10/100;
				Discount = Price - Cost;
				cout  <<  "Total cost is "  <<  Discount  <<  ".";
			}
			else if(i % 2 != 0)
			{
				Cost = Price * 5/100;
				Discount = Price - Cost;
				cout  <<  "Total cost is "  <<  Discount  <<  ".";
			}
			found = true;
		}
	}
	if(found == false )
	{
		cout  <<  "Movie not found.";
	}
}