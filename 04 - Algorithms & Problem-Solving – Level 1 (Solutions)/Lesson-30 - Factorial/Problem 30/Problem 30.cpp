/*// 
Problem :
Write a program to calculate factorial of N!
Example : factorial of 6
6 x 5 x 4 x 3 x 2 x 1 = 720
Note : User should only enter positive number, other wise reject it and ask to enter again*/
#include <iostream>
#include <string>
using namespace std;


int ReadPositiveNumbre(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

int FactorialFor(int N)
{
	int F = 1;
	for (int Counter = N; Counter >= 1; Counter--)
	{
		F = F * Counter;
	}
	return F;
}
int FactorialWhile(int N)
{
	int F = 1;
	int Counter = N;
	while( Counter >= 1 )
	{
		F = F * Counter;
		Counter--;
	}
	return F;
}

int FactorialDoWhile(int N)
{
	int F = 1;
	int Counter = N;
	do
	{
		F = F * Counter;
		Counter--;
	}while (Counter >= 1);
	return F;
}


int main()
{
	cout << FactorialFor(ReadPositiveNumbre("Enter Number? ")) << endl;
	cout << FactorialWhile(ReadPositiveNumbre("Enter Number? ")) << endl;
	cout << FactorialDoWhile(ReadPositiveNumbre("Enter Number? ")) << endl;

}
