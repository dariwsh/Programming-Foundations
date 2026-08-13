#include <iostream>
#include <string>

using namespace std;
bool isLeapYear(short Year)
{
	// if year is divisible by 4 AND not divisible by 100
	// OR if year is divisible by 400
	// then it is a leap year
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int NumberOfDays[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) : NumberOfDays[Month];
}

int NumberOfDaysFromTheBeginingOfTheYear(short Day, short Month, short Year)
{
	int totalDays = 0; 
	for (int i = 1;i <= Month - 1; i++)
	{
		 totalDays += NumberOfDaysInAMonth(i , Year);
	
	}
	return totalDays + Day;
}


short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day ? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month ? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year ? ";
	cin >> Year;
	return Year;
}




int main()
{
	int Day = ReadDay();
	int Month = ReadMonth();
	int Year = ReadYear();
	
	cout << "\nNumber of Days from the begining of the year is "	
		<< NumberOfDaysFromTheBeginingOfTheYear(Day, Month, Year);
	system("pause>0");
	return 0;
}