#include <iostream>
#include <string>
using namespace std;

struct strInfo
{
	string FullName;
	int Age;
	string Address;
	string Job;
	int Salary;
	int ID;
	string Phone;
	int WorkHours;
	int VacationDays;
	int OvertimeHours;
};
void readInfo(strInfo& Info)
{
	cout << "Enter your full name: ";
	getline(cin, Info.FullName);
	cout << "Enter your age: ";
	cin >> Info.Age;
	cin.ignore();
	cout << "Enter your address: ";
	getline(cin, Info.Address);
	cout << "Enter your job: ";
	getline(cin, Info.Job);
	cout << "Enter your salary: ";
	cin >> Info.Salary;
	cout << "Enter your ID: ";
	cin >> Info.ID;
	cout << "Enter your phone number: ";
	cin >> Info.Phone;
	cout << "Enter your work hours: ";
	cin >> Info.WorkHours;
	cout << "Enter your vacation days: ";
	cin >> Info.VacationDays;
	cout << "Enter your overtime hours: ";
	cin >> Info.OvertimeHours;
}

void printInfo(strInfo &Info)
{
	cout <<endl << "***********Welcome to the Employee Information System***********" << endl;

	cout << "Full Name: " << Info.FullName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Address: " << Info.Address << endl;
	cout << "Job: " << Info.Job << endl;
	cout << "Salary: " << Info.Salary << endl;
	cout << "ID: " << Info.ID << endl;
	cout << "Phone: " << Info.Phone << endl;
	cout << "Work Hours: " << Info.WorkHours << endl;
	cout << "Vacation Days: " << Info.VacationDays << endl;
	cout << "Overtime Hours: " << Info.OvertimeHours << endl;
	cout << "***********Thank you for providing your information!***********" << endl;

}

int main()
{
	strInfo PersonOne;
	readInfo(PersonOne);
	printInfo(PersonOne);
	return 0;
}
