//Write a Program to check if the number is Prefect or not?

#include <iostream>
#include <string>
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

bool IsPerfectNumber(int Number)
{
	int Sum = 0;
	for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
		{
			Sum += i;
		}
	}
	return Number == Sum;

}
void PrintResults(int Number)
{
	if (IsPerfectNumber(Number))
		cout << Number << "  Is Perfect Number. \n";
	else
		cout << Number << "  Is Not Perfect Number. \n";
}
int main()
{
	PrintResults(ReadPositiveNumber("Pleas enter a positive number?"));
}

