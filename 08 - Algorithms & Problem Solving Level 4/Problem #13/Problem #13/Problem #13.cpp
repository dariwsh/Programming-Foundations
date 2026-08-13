#include <iostream>
using namespace std;


struct stDate {
	short Year;
	short Month;
	short Day;
};


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

bool IsDate1BeforeDate2(stDate Date1 , stDate Date2)
{
	//if (Date1.Year < Date2.Year)
	//	return true;
	//if (Date1.Year > Date2.Year)
	//	return false;
	//
	//if (Date1.Month < Date2.Month)
	//	return true;
	//if (Date1.Month > Date2.Month)
	//	return false;

	//if (Date1.Day < Date2.Day)
	//	return true;
	//
	//return false;

	// Nested if
	return (Date1.Year < Date2.Year) ? true :
		(Date1.Year == Date2.Year) ?
		(
			(Date1.Month < Date2.Month) ? true :
			(Date1.Month == Date2.Month) ?

			(Date1.Day < Date2.Day)
			: false
		)
		: false;
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


	if (IsDate1BeforeDate2(Date1, Date2))
	{
		cout << "Yes, Date 1 , is Less than Date 2." << endl;
	}
	else
	{
		cout << "Date1 is NOT before Date2.";
	}
	system("pause>0");
	return 0;
}