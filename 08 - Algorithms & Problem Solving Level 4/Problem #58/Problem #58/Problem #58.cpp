#include <iostream>
using namespace std;
struct stDate
{
	short Year;
	short Month;
	short Day;
};
struct stPeriod
{
	stDate StartDate;
	stDate EndDate;
};
bool IsDate1BeforeDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year < Date2.Year) ? true : ((Date1.Year ==
		Date2.Year) ? (Date1.Month < Date2.Month ? true : (Date1.Month ==
			Date2.Month ? Date1.Day < Date2.Day : false)) : false);
}
bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	return (Date1.Year == Date2.Year) ? ((Date1.Month ==
		Date2.Month) ? ((Date1.Day == Date2.Day) ? true : false) : false)
		: false;
}
bool IsDate1AfterDate2(stDate Date1, stDate Date2)
{
	return (!IsDate1BeforeDate2(Date1, Date2) &&
		!IsDate1EqualDate2(Date1, Date2));
}
enum enDateCompare { Before = -1, Equal = 0, After = 1 };
enDateCompare CompareDates(stDate Date1, stDate Date2)
{
	if (IsDate1BeforeDate2(Date1, Date2))
		return enDateCompare::Before;
	if (IsDate1EqualDate2(Date1, Date2))
		return enDateCompare::Equal;
	/* if (IsDate1AfterDate2(Date1,Date2))
	return enDateCompare::After;*/
	//this is faster
	return enDateCompare::After;
}

bool IsPeriodsOverlap(stPeriod Period1, stPeriod Period2)
{
	// لو نهاية فترة قبل بداية الفترة التانية → الفترتين منفصلتين.
	if (CompareDates(Period1.EndDate, Period2.StartDate) == Before ||
		(CompareDates(Period2.EndDate, Period1.StartDate) == Before))
	{
		return false;
	}
	return true;
}
short ReadDay()
{
	short Day;
	cout << "\nPlease enter a Day? ";
	cin >> Day;
	return Day;
}
short ReadMonth()
{
	short Month;
	cout << "Please enter a Month? ";
	cin >> Month;
	return Month;
} 
short ReadYear()
{
	short Year;
	cout << "Please enter a Year? ";
	cin >> Year;
	return Year;
}

stDate ReadFullDate()
{
	stDate Date;
	Date.Day = ReadDay();
	Date.Month = ReadMonth();
	Date.Year = ReadYear();
	return Date;
}

stPeriod ReadPeriod()
{
	stPeriod Period;

	cout << "Enter Start Date:\n";
	Period.StartDate = ReadFullDate();
	cout << "Enter End Date:\n";
	Period.EndDate = ReadFullDate();

	return Period;
}
int main()
{
	cout << "\nEnter Period 1:\n";
	stPeriod Period1 = ReadPeriod();
	cout << "\nEnter Period 2:\n";
	stPeriod Period2 = ReadPeriod();
	
	if (IsPeriodsOverlap(Period1, Period2))
	
		cout << "Yes, Periods overlap \n";
	
	else
		cout << "NO, Periods overlap \n";
	system("pause>0");
	return 0;
}