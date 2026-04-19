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



void PrintNumber(int Number)
{
	for (int i = Number; i >= 1 ; i--)
	{
		cout << i ;

		for (int j = 1; j < i; j++)

			cout << i;

		cout << endl;

	}
}

int main()
{
	PrintNumber(ReadPositiveNumber("Please enter number. "));
	return 0;
}