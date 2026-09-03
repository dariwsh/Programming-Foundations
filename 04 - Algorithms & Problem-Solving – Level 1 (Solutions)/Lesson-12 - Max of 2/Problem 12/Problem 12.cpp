#include <iostream>
#include <string>
using namespace std;

void ReadNumbers(int& Num1, int& Num2)
{
	cout << "**************************\n";
	cout << "Please int Your Number one? \n";
	cin >> Num1;
	cout << "Please int Your Number two? \n";
	cin >> Num2;
	cout << "**************************\n";

}

int MaxOf2Numbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintResults(int Max)
{
	cout << "The Max Number: " << Max << endl;

}
int main()
{
	int Num1,  Num2;
	ReadNumbers(Num1, Num2);
	PrintResults(MaxOf2Numbers(Num1, Num2));
}