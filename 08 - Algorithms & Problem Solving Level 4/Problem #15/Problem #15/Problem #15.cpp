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
void Print()
{
	stDate Date1 = FullDate();
	if(IsLastDayInMonth(Date1))
		cout << "Yes, Day is Last Day in Month.\n";
	else
		cout << "No, Day is NOT Last Day in Month.\n";

	if (IsLastMonthInYear(Date1.Month))
			cout << "Yes, Month is Last Month in Year.\n";
	else
		cout << "No, Month is NOT Last Month in Year.\n";
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
	Print();


	
	system("pause>0");
	return 0;
}