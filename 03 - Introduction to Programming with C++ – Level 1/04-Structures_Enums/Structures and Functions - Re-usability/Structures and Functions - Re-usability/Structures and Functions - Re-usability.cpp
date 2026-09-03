#include <iostream>
#include <string>

using namespace std;
struct strInfo
{
	string FirstName;
	string LastName;
	int Age;
	string PhoneNumber;
  };

void ReadInfo(strInfo &Info)
{
	cout << "Enter your first name: ";
	cin >> Info.FirstName;
	cout << "Enter your last name: ";
	cin >> Info.LastName;
	cout << "Enter your age: ";
	cin >> Info.Age;
	cout << "Enter your phone number: ";
	cin >> Info.PhoneNumber;
}

void PrintInfo(strInfo Info)
{
	cout << "\n************************************\n";
	cout << "First Name: " << Info.FirstName << endl;
	cout << "Last Name: " << Info.LastName << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "Phone Number: " << Info.PhoneNumber << endl;
	cout << "\n************************************\n";

}
int main()
{
	strInfo Person1Info;
	ReadInfo(Person1Info);
	PrintInfo(Person1Info);
	return 0;
}