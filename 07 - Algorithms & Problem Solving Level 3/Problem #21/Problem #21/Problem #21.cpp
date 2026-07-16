// =============================================
// Problem #21: Print Fibonacci Using Loop
// =============================================
// Description:
//   Write a program to print Fibonacci series
//   of a given number of terms using a loop.
//
// Key Concepts:
//   - Fibonacci Series
//   - Loops & Iteration
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintFibonacciUsingLoop(int Number)
{
	int FebNumber =0 ;
	int Prev2 = 0 , Prev1 = 1;
	cout << "1 ";
	for (int i = 2; i < Number; i++)
	{
		FebNumber = Prev1 + Prev2;
		cout << FebNumber << "  ";
		Prev2 = Prev1;
		Prev1 = FebNumber;
	}
}



int main()
{
	int Number;
	cout << "Enter Number Fibonacci Series : \n";
	cin >> Number;
	PrintFibonacciUsingLoop(Number);

	system("pause>0");

}
