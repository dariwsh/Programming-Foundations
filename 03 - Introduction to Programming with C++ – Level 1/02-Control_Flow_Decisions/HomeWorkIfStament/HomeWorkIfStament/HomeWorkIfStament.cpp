#include <iostream>
using namespace std;

int main()
{
	cout << "***********************" << endl;

	// problem 4
	int Age;
	bool drivingLicense;

	cout << "Enter your age: ";
	cin >> Age;
	cout << "Do you have a driving license? (1 for yes, 0 for no): ";
	cin >> drivingLicense;
	if (Age >= 18 && drivingLicense == true)
	{
		cout << "Hired" << endl;
	}
	else
	{
		cout << "Rejected" << endl;
	}
	cout << "***********************" << endl;

	// problem 8
	int grade;
	cout << "Enter your grade: ";
	cin >> grade;
	if (grade >= 50)
	{
		cout << "Passed" << endl;

	}
	else
	{
		cout << "Failed" << endl;
	}
	cout << "***********************" << endl;
	// Problem 11
	int grade1, grade2, grade3;
	int averageGrade;
	cout << "Enter three grades: ";
	cin >> grade1 >> grade2 >> grade3;
	averageGrade = (grade1 + grade2 + grade3) / 3;
	cout << "Average grade: " << averageGrade << endl;
	if (averageGrade >= 50) 
	{
		cout << "Passed" << endl;
	}
	else
	{
		cout << "Failed" << endl;
	}
	cout << "***********************" << endl;
	// Problem
	int AgePro;
	cout << "Enter your age: ";
	cin >> AgePro;
	if (AgePro >= 18 && AgePro <= 45)
	{
		cout << "Valid Age" << endl;
	}
	else
	{
		cout << "Invalid Age" << endl;
	}
	cout << "***********************" << endl;
	int PIN;
	cout << "Enter your PIN: ";
	cin >> PIN;
	if()

	return 0;
}