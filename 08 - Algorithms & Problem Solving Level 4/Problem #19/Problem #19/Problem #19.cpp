#include <iostream>
using namespace std;
struct stDate {
	short Year;
	short Month;
	short Day;
};
stDate FullDate();
bool isLeapYear(short Year)
{
	return (Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0);
}

short NumberOfDaysInAMonth(short Month, short Year)
{
	if (Month < 1 || Month>12)
		return 0;
	int days[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	return (Month == 2) ? (isLeapYear(Year) ? 29 : 28) :
		days[Month - 1];
}

bool IsLastDayInMonth(stDate Date)
{
	return (Date.Day == NumberOfDaysInAMonth(Date.Month, Date.Year));
}

bool IsLastMonthInYear(short Month)
{
	return (Month == 12);
}


stDate IncreaseDateByOneDay(stDate Date)
{
	if (IsLastDayInMonth(Date))
	{
		if (IsLastMonthInYear(Date.Month))
		{
			Date.Month = 1;
			Date.Day = 1;
			Date.Year++;
		}
		else
		{
			Date.Day = 1;
			Date.Month++;
		}
	}
	else
	{
		Date.Day++;
	}
	return Date;
}

bool IsDate1BeforeDate2(stDate Date1, stDate Date2 )
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}

void Swap(stDate& Date1, stDate& Date2)
{
	stDate Temp;

	Temp.Year = Date1.Year;
	Temp.Month = Date1.Month;
	Temp.Day = Date1.Day;

	Date1.Year = Date2.Year;
	Date1.Month = Date2.Month;
	Date1.Day = Date2.Day;

	Date2.Year = Temp.Year;
	Date2.Month = Temp.Month;
	Date2.Day = Temp.Day;


}

int GetDifferenceInDays(stDate Date1, stDate Date2, bool
	IncludeEndDay = false)
{
	int Days = 0;
	short sawpFlagvalue = 1;
	if (!IsDate1BeforeDate2(Date1, Date2)) 
	{
		Swap(Date1, Date2);
		sawpFlagvalue = -1;
	}
	while (IsDate1BeforeDate2(Date1, Date2))
	{
		Days++;
		Date1 = IncreaseDateByOneDay(Date1);
	}
	return IncludeEndDay ? ++Days* sawpFlagvalue : Days * sawpFlagvalue;
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
	cout << "\nPlease enter a Year? ";
	cin >> Year;
	return Year;
}
stDate FullDate()
{
	stDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	cout << "\n\n\n";
	return Date;
}


int main()
{
	stDate Date1 = FullDate();
	stDate Date2 = FullDate();

	cout << "\nDiffrence is :  "
		<< GetDifferenceInDays(Date1, Date2) << " Days(s).";
	cout << "\nDiffrence (including End Day) is :  "
		<< GetDifferenceInDays( Date2, Date1, true) << " Day(s).";

	system("pause>0");
	return 0;
}
