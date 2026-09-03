/*
* Write a program to ask the user to enter:
•
Number
•
M
Then Print the Number^M
*/
#include <iostream>
#include <string >
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter nember?\n";
	cin >> Number;
	return Number;
 }
int ReadPower()
{
	int Number;
	cout << "Please enter Power?\n";
	cin >> Number;
	return Number;
}
int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P = P * Number;
	}
	return P;


}

int main()
{
	cout << endl << "Result = " << PowerOfM(ReadNumber(), ReadPower());
}