/*
* Write a program to read a number and check if it is a prime number or not.
Note: Prime number can only divide on one and on itself
*/

#include <iostream>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}


enPrimNotPrime CheckPrime(int Number)
{
	int M = round(Number / 2);
	for (int counter = 2; counter <= M; counter++)
	{
		if (Number % counter == 0)
		{
			return enPrimNotPrime::NotPrime;
		}
	}
	return enPrimNotPrime::Prime;


}

void PrintPrimeNumbersFrom1ToN(int Number)
{
	cout << "\n";
	cout << "prime Number from " << 1 << "To" << Number;
	cout << "Are : " << endl;
	for (int i = 1; i <= Number; i++)
	{
		if (CheckPrime(i) == enPrimNotPrime::Prime)
		{
			cout << i << endl;
		}
	}
}






int main()
{
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter number Positive ?"));

}