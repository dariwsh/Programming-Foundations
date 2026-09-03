#include <iostream>
#include <string>
using namespace std;
int main()
{
	//// problem 33
	//int Grade;
	//cout << "Enter your grade: ";
	//cin >> Grade;
	//if(Grade >= 90)
	//{
	//	cout << "Your grade is A.";
	//}
	//else if (Grade >= 80)
	//{
	//	cout << "Your grade is B.";
	//}
	//else if (Grade >= 70)
	//{
	//	cout << "Your grade is C.";
	//}
	//else if (Grade >= 60)
	//{
	//	cout << "Your grade is D.";
	//}
	//else
	//{
	//	cout << "Your grade is F.";
	//}
	//
	//cout << "*********************************" << endl;
	//double salary , percentage;
	//cout << "Enter your salary: ";
	//cin >> salary;

	//if (salary >= 1000.000)
	//{
	//	percentage = 0.01;
	//}
	//else if (salary >= 500.000)
	//	{
	//	percentage = 0.02;
	//}
	//else if (salary >= 100.000)
	//{
	//	percentage = 0.03;
	//}
	//else if (salary >= 50.000)
	//{
	//	percentage = 0.05;
	//}
	//else
	//{
	//	percentage = 0;
	//}
	//double total =   salary * percentage;
	//cout << "Your total is: " << total << endl;
	//// problem 36
	//double Number1, Number2, Operation;
	//cout << "Enter the first number: ";
	//cin >> Number1;
	//cout << "Enter the second number: ";
	//cin >> Number2;
	//cout << "Enter the operation number: \n";

	//cout << " 1 : + \n " ;
	//cout << " 2 : - \n ";
	//cout << " 3 : * \n ";	
	//cout << " 4 : / \n ";
	//cin >> Operation;
	//if (Operation == 1)
	//{
	//	cout << "The result is: " << Number1 + Number2;

	// }
	//else if (Operation == 2)
	//	{
	//	cout << "The result is: " << Number1 - Number2;
	//}
	//else if (Operation == 3)
	//{
	//	cout << "The result is: " << Number1 * Number2;
	//}
	//else if (Operation == 4)
	//{
	//	cout << "The result is: " << Number1 / Number2;

	//}
	//else
	//{
	//	cout << "Invalid operation number.";
	//}

	// problem 44

	//int day;
	//
	//cout << "The number of the day is: ";
	//cout << "1 Sunday \n 2 Monday \n 3 Tuesday \n 4 Wednesday \n 5 Thursday \n 6 Friday \n 7 Saturday \n";
	//cout << "Enter the day of the week: ";
	//cin >> day;
	//if (day == 1)
	//{
	//	cout << "Sunday\n";
	//}
	//else if (day == 2)
	//{
	//	cout << "Monday\n";
	//}
	//else if (day == 3)
	//{
	//	cout << "Tuesday\n";
	//}
	//else if (day == 4)
	//{
	//	cout << "Wedneday\n";
	//}
	//else if (day == 5)
	//{
	//	cout << "Thursday\n";
	//}
	//else if (day == 6)
	//{
	//	cout << "Friday\n";
	//}
	//else if (day == 7)
	//{
	//	cout << "saturday\n";
	//}
	//else
	//{
	//	cout << "Wrong Day";
	//}


	// problem 49
	//int pin , balance = 7500;
	//cout << "Enter Your Pin: ";
	//cin >> pin;
	//if (pin == 1234)
	//{
	//	cout << "7500";
	//}
	//else
	//{
	//	cout << "Worng ";
	//}
	// problem 45
	string month;
	cout << "1 January \n 2 February \n 3 March \n 4 April \n 5 May \n 6 June \n 7 July \n 8 August \n 9 September \n 10 October \n 11 November \n 12 December \n";
	cout << "Enter the month: ";

	cin >> month;
	if (month == "1")
	{
		cout << "January";
	}
	else if (month == "2")
	{
		cout << "February";
	}
	else if (month == "3")
	{
		cout << "March";
	}
	else if (month == "4")
	{
		cout << "April";
	}
	else if (month == "5")
	{
		cout << "May";
	}
	else if (month == "6")
	{
		cout << "June";
	}
	else if (month == "7")
	{
		cout << "July";
	}
	else if (month == "7")
	{
		cout << "August";
	}
	else if (month == "9")
	{
		cout << "September";
	}
	else if (month == "10")
	{
		cout << "October";
	}
	else if (month == "11")
	{
		cout << "November";
	}
	else if (month == "12")
	{
		cout << "December";
	}
	else
	{
		cout << "Wrong Month";
	}
	return 0;
}