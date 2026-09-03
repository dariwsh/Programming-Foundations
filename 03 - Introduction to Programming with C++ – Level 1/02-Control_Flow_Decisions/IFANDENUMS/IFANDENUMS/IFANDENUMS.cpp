#include <iostream>
#include <string>
using namespace std;
//App Two
enum enCountryChoice
{
	egypt = 1,
	ksa = 2,
	usa = 3,
	italy = 4,
	spain = 5,
	france = 6,
	germany = 7,
	turkey = 8
};

// Progect One 
enum enScreenColor
{
	red = 1,
	blue = 2,
	green = 3,
	white = 4,
	black = 5,
	yellow = 6,
	brown = 7,
	orange = 8
};

int main()
{
	// App One 

	int c;
	enScreenColor Color;
	cin >> c;
	Color = (enScreenColor)c;
	if (Color == enScreenColor::red)
	{
		system("color 4f");
	}
	else if (Color == enScreenColor::blue)
	{
		system("color 1f");

	}
	else if (Color == enScreenColor::green)
	{
		system("color 2f");

	}
	else if (Color == enScreenColor::white)
	{
		system("color 7f");

	}
	else if (Color == enScreenColor::black)
	{
		system("color 0f");

	}
	else if (Color == enScreenColor::yellow)
	{
		system("color 6f");
	}
	else if (Color == enScreenColor::brown)
	{
		system("color 7f");
	}
	else if (Color == enScreenColor::orange)
	{
		system("color 4f");
	}
	else
	{
		cout << "Invalid color code." << endl;
	}
	cout << "********************************************************************* "<< endl;
	// App Two

	int country;
	enCountryChoice Country;
	cin >> country;
	Country = (enCountryChoice)country;
	if (Country == enCountryChoice::egypt)
	{
		cout << "Cairo" << endl;
	}
	else if (Country == enCountryChoice::ksa)
	{
		cout << "Riyadh" << endl;
	}
	else if (Country == enCountryChoice::usa)
	{
		cout << "Washington D.C." << endl;
	}
	else if (Country == enCountryChoice::italy)
	{
		cout << "Rome" << endl;
	}
	else if (Country == enCountryChoice::spain)
	{
		cout << "Madrid" << endl;
	}
	else if (Country == enCountryChoice::france)
	{
		cout << "Paris" << endl;
	}
	else if (Country == enCountryChoice::germany)
	{
		cout << "Berlin" << endl;
	}
	else if (Country == enCountryChoice::turkey)
	{
		cout << "Ankara" << endl;
	}
	else
	{
		cout << "Invalid country code." << endl;
	}
}