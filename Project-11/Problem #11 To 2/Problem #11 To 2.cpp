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

int reverse(int Number)
{
	int Remainder = 0;
	int Number2 = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;
		Number2 = Number2 * 10 + Remainder;

	}
	return Number2;
}

bool IsPalindromeNumber(int Number)
{
	return Number == reverse(Number);
}

int main()
{
	if (IsPalindromeNumber(ReadPositiveNumber("Please enter number \n")))
		cout << "\nYes , it is a Palindrome number.\n";
	else
		cout << "\nNo , it is NOT a Palindrome number.\n";
	
	return 0;
}