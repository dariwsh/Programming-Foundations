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
void PrintCountry() 
{
	cout << "**********************************" << endl;
	cout << "Please enter the country number: " << endl;
	cout << "1- Egypt" << endl;
	cout << "2- KSA" << endl;
	cout << "3- USA" << endl;
	cout << "4- Italy" << endl;
	cout << "5- Spain" << endl;
	cout << "6- France" << endl;
	cout << "7- Germany" << endl;
	cout << "8- Turkey" << endl;

}
int main()
{
	PrintCountry();
	int countryNumber;
	enCountryChoice countryChoice;
	cin >> countryNumber;
	countryChoice = (enCountryChoice)countryNumber;
	switch (countryChoice)
	{
	case enCountryChoice::egypt:
		cout << "egypt";
		break;
	case enCountryChoice::ksa:
		cout << "ksa";
		break;
	case enCountryChoice::usa:
		cout << "usa";
		break;
	case enCountryChoice::italy:
		cout << "italy";
		break;
	case enCountryChoice::spain:
		cout << "spain";
		break;
	case enCountryChoice::france:
		cout << "france";
		break;
	case enCountryChoice::germany:
		cout << "germany";
		break;
	case enCountryChoice::turkey:
		cout << "turkey";
		break;
	default:cout << "ERRO!";
	}

}