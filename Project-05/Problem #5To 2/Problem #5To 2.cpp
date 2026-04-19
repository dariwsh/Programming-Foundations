//Write a program to read a number and print it in a reversed order.
#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;  // Initialize a variable to store the user's input.

	// Use a do-while loop to ensure the prompt is shown at least once.
	do
	{
		cout << Message << endl; // Display the prompt message.
		cin >> Number;           // Read the number from the user.
	} while (Number <= 0);       // Repeat if the entered number is not positive.

	return Number;  // Return the validated positive number.
}
void PrintDigits(int Number)
{
	int Sum = 0, Remainder = 0; // Initialize variables. Although 'Sum' is declared, it is not used in this function.

	// Continue looping while there are digits left in Number.
	while (Number > 0)
	{
		Remainder = Number % 10; // Extract the last digit of Number.
		Number = Number / 10;    // Remove the last digit from Number.
		cout << Remainder << endl;  // Print the extracted digit on a new line.
	}
}

int main()
{
	PrintDigits(ReadPositiveNumber("Pleas enter a positive number?"));	
	

	return 0;
}

