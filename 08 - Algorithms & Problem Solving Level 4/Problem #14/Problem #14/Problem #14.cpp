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

bool IsDate1EqualDate2(stDate Date1, stDate Date2)
{
	/*if (Date1.Year == Date2.Year)
	{
		if (Date1.Month == Date2.Month)
		{
			if (Date1.Day == Date2.Day)
			{
				return true;
			}
		}
	}

	return false;
	Nested If
	*/
	return (Date1.Year == Date2.Year) ? 
		((Date1.Month == Date2.Month) ?
			((Date1.Day == Date2.Day) ? true : false)
			:false)
		: false;

	/*if (year equal)
		if (month equal)
			if (day equal)
				true
			else false
		else false
	else false*/

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


	if (IsDate1EqualDate2(Date1, Date2))
	{
		cout << "Yes, Date 1 , is Equal than Date 2." << endl;
	}
	else
	{
		cout << "\nNo, Date1 is NOT Equal To Date2.";
	}
	system("pause>0");
	return 0;
}