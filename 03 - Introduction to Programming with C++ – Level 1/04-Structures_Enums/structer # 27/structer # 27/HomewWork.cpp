#include <iostream>
using namespace std;

struct Date
{
	string name;
	int year;
	string city;
	string country;
	int monthly_salary;
	int year_salary;
	char gender;
	bool married;

};

int main()
{
	Date me;
	me.name = "Ahmed";
	me.year = 22;
	cout << me.year;
}