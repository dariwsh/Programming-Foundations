// =============================================
// Problem #22: Print Fibonacci Using Recursion
// =============================================
// Description:
//   Write a program to print Fibonacci series
//   of a given number of terms using recursion.
//
// Key Concepts:
//   - Recursion
//   - Fibonacci Sequence
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintFibonacciUsingRecurssion(short Number , int Prev1, int Prev2 )
{
	int FebNumber = 0;
	
	if (Number > 0)
	{
		FebNumber = Prev1 + Prev2;

		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "  ";
		PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
	}
	
		
}



int main()
{
	int Number;
	cout << "Enter Number Fibonacci Series : \n";
	cin >> Number;
	PrintFibonacciUsingRecurssion(Number , 0 , 1);

	system("pause>0");

}
