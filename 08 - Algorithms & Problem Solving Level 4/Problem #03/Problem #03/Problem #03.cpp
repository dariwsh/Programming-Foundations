#include<iostream>
using namespace std;

bool IsLeapYear(short year)
{
	 return((year % 4 == 0 && year % 400 != 0) || (year % 100 == 0));
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
		cout << "\nYes, Year[ " << Year << " ] is a leap year.\n";
	}
	else
	{
		cout << "\nNo, Year [ " << Year << " ] is NOT a leapyear.\n";
	}
}

int main()
{
	Print();
	system("pause>0");
	return 0;
}