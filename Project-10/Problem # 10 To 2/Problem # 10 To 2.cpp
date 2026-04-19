#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)



{
	int Number = 0;  // Initialize a variable to store the user's input.


	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int ReverseNumber(int Number)
{
	int Remainder = 0;
	int Number2 = 2;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;



	}
	return Number2;
}



void PrintNumber(int Number)
{
	int Remainder = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		cout << Remainder << endl;
	}
}
int main()
{
	PrintNumber(ReverseNumber(ReadPositiveNumber("Please enter number?\n")));
}