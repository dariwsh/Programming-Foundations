#include<iostream>
using namespace std;

bool IsLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}


short NumberOfDaysInYear(int Year)
{
	return IsLeapYear(Year) ? 366 : 365;
}

short NumberOfHourInYear(int Year)
{
	return NumberOfDaysInYear(Year) * 24;
}

int NumberOfMinutesInYear(int Year)
{
	return NumberOfHourInYear(Year) * 60;
}

int NumberOfSecondsInYear(int Year)
{
	return NumberOfMinutesInYear(Year) * 60;
}

short ReadYear()
{
	short Year;
	cout << "Please Enter Your Year: ";
	cin >> Year;
	return Year;
}

int main()
{
	short Year = ReadYear();
	cout << "Number of Days in Year    [ " << Year << " ] " <<
		NumberOfDaysInYear(Year) << endl;

	cout << "Number of Hours in Year   [ " << Year << " ] " <<
		NumberOfHourInYear(Year) << endl;

	cout << "Number of Minutes in Year [ " << Year << " ] " <<
		NumberOfMinutesInYear(Year) << endl;

	cout << "Number of Seconds in Year [ " << Year << " ] " <<
		NumberOfSecondsInYear(Year) << endl;

	system("pause>0");
	return 0;
}