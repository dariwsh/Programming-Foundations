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

short DayOfOrder(short Year, short Month, short Day)
{
	short a, y, m;
	a = (14 - Month) / 12;
	y = Year - a;
	m = Month + (12 * a) - 2;
	return (Day + y + (y / 4) - (y / 100) + (y / 400) + ((31 * m)/ 12)) % 7;
}
string DayShortName(short DayOfWeekOrder)
{
	string arrDayNames[] = 
	{
		"Sun" , "Mon" , "Tue" , "Wed" , "Thu" , "Fri" , "Sat"
	};
	return arrDayNames[DayOfWeekOrder];
}


short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day to check? ";
	cin >> Day;
	return Day;
}

short ReadMonth()
{
	short Month;
	cout << "\nPlease enter a Month to check? ";
	cin >> Month;
	return Month;
}

short ReadYear()
{
	short Year;
	cout << "\nPlease enter a year to check? ";
	cin >> Year;
	return Year;
}




int main()
{
	int Year = ReadYear();
	int Month = ReadMonth();
	int Day = ReadDay();

	cout << "Date      : " << Day << "/" << Month << "/" << Year << endl;
	cout << "Day Order : " << DayOfOrder(Year, Month, Day) << endl;
	cout << "Day Name  : " << DayShortName(DayOfOrder(Year, Month, Day));

	system("pause>0");
	return 0;
}