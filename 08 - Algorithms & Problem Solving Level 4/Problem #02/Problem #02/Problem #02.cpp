#include<iostream>
using namespace std;

bool IsLeapYear(short year)
{
	if (year % 400 == 0)
	{
		return true;
	}
	else if (year % 100 == 0) 
	{
		return false;
	}
	if (year % 4 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

short ReadYear()
{
	short Year;
	cout << "Please Enter Your Year: ";
	cin >> Year;
	return Year;
}

void Print()
{
	short Year = ReadYear();
	if (IsLeapYear(Year))
	{
		 cout << "\nYes, Year[" << Year << "] is a leap year.\n";
	}
	else
	{
		cout << "\nNo, Year [" << Year << "] is NOT a leapyear.\n";
	}
}

int main()
{
	Print();
	system("pause>0");
	return 0;
}