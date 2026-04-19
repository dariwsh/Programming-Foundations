//Write a program to read a number and print it in a reversed order.
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
int PrintReversNumber(int Number)
{
	int Number2 = 0,  Remainder = 0; 

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;
		
	}
	return Number2;
}

int main()
{ 
	cout << PrintReversNumber(ReadPositiveNumber("Pleas enter a positive number?"));


	return 0;
}

