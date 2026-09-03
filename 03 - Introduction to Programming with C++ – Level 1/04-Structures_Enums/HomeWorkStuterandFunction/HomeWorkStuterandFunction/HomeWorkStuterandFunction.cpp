#include <iostream>
#include <string>
using namespace std;

struct Date
{
	string Name;
	int Age;
	string City;
	string Country;
	double monthlySalary;
	double yearlySalary;
	char Gender;
	bool isMarried;
};


void ReadInfo(Date &student)
{

	cout << "Enter Name: ";
	cin >> student.Name;
	cout << "Enter Age: ";
	cin >> student.Age;
	cout << "Enter City: ";
	cin >> student.City;
	cout << "Enter Country: ";
	cin >> student.Country;
	cout << "Enter Monthly Salary: ";
	cin >> student.monthlySalary;
	student.yearlySalary = student.monthlySalary * 12;
	cout << "Enter your Gender: ";
	cin >> student.Gender;
	cout << "Are you married? (1 for Yes, 0 for No): ";
	cin >> student.isMarried;

}
void printStudentInfo(const Date &student)
{
	cout << "---------------------------------" << endl;
	cout << "Student Information:" << endl;
	cout << "Name: " << student.Name << endl;
	cout << "Age: " << student.Age << endl;
	cout << "City: " << student.City << endl;
	cout << "Country: " << student.Country << endl;
	cout << "Monthly Salary: " << student.monthlySalary << endl;
	cout << "Yearly Salary: " << student.yearlySalary << endl;
	cout << "---------------------------------" << endl;


}

 
int main()
{
	Date  person1;
	ReadInfo(person1);
	printStudentInfo(person1);
	return 0;
}