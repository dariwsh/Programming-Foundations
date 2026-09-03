#include <iostream>
using namespace std;
enum enWeekDay
{
	sun = 1, mon, tue, wed, thu, fri, sat
};
void ShowWeekDay()
{
	cout << "*********************************\n";
	cout << "          Week Day List          \n";
	cout << "*********************************\n";
	cout << "1. Sunday\n";
	cout << "2. Monday\n";
	cout << "3. Tuesday\n";
	cout << "4. Wednesday\n";
	cout << "5. Thursday\n";
	cout << "6. Friday\n";
	cout << "7. Saturday\n";
}
enWeekDay ReadWeekDay()
{
	int wd;
	cin >> wd;
	return (enWeekDay)wd;
}
string GetWeekDay(enWeekDay WeekDay)
{
	switch (WeekDay)
	{
	case enWeekDay::sun:
		return "Sunday";
	case enWeekDay::mon:
		return "Monday";
	case enWeekDay::tue:
		return "Tuesday";
	case enWeekDay::wed:
		return "Wednesday";
	case enWeekDay::thu:
		return "Thursday";
	
	case enWeekDay::fri:
		return "Friday";
	case enWeekDay::sat:
		return "Saturday";
	default:
		return "Invalid Week Day";
	}
}
int main()
{
	ShowWeekDay();

	cout << "To Day is : " << GetWeekDay(ReadWeekDay()) << endl;
	return 0;
}

