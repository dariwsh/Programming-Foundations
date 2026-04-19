//Write a program to read a number and print it in a reversed order.
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;  // Initialize a variable to store the user's input.

	// Use a do-while loop to ensure the prompt is displayed at least once.
	do
	{
		cout << Message << endl; // Display the prompt message to the user.
		cin >> Number;           // Read the user's input.
	} while (Number <= 0);       // Repeat if the entered number is not positive (<= 0).

	return Number;  // Return the valid positive number.
}
int PrintDigits(int Number)
{
	int Sum = 0, Remainder = 0; // Initialize variables. Although 'Sum' is declared, it is not used in this function.

	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Sum = Sum + Remainder;
	}
	return Sum;
}

   int main()
{
	   cout << PrintDigits(ReadPositiveNumber("Pleas enter a positive number?")) ; 


	return 0;
}

