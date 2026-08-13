#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
#include "Date.h"
using namespace std;


int main()
{
	
	cout << "\nPlease Enter Your Date of Birth:\n";
	stDate Date1 = ReadFullDate();
	stDate Date2 = GetSystemDate();
	cout << "Your Age is :  " << GetDifferenceInDays(Date1, Date2) << "Day(s)." << endl;



	system("pause>0");
	return 0;
}
