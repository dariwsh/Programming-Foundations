#pragma once
#include <iostream>

using namespace std;
namespace Input
{
	 // Get Round number
	int RandNumber(int Form, int To)
	{
		return rand() % (To - Form + 1) + Form;
	}
	// Read Number Postive
	int ReadNumberPostive()
	{
		int Number = 0;
		do
		{
			cout << "Pleas enter a number: ";
			cin >> Number;
		}while(Number < 0);
		return Number;

	}

}



