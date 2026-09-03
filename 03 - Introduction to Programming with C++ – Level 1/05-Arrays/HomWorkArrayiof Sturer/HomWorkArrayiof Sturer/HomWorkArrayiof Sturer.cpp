#include <iostream>
using namespace std;
struct strInfo
{
	string FirstName;
	string LastName;
	int phone;
	int Age;
	string city;

};

void RedInfo(strInfo& Info)
{
	cout << "Please Enter Your FirstName? \n";
	cin >> Info.FirstName;
	cout << "Please Enter Your LastName? \n";
	cin >> Info.LastName;
	cout << "Please Enter Your phone? \n";
	cin >> Info.phone;
	cout << "Please Enter Your Age? \n";
	cin >> Info.Age;
	cout << "Please Enter Your city? \n";
	cin >> Info.city;
}

void PrintInfo(strInfo Info)
{
	cout << "\n**********************************\n";


	cout << "FirstName: " << Info.FirstName << endl;
	cout << "LastName: " << Info.LastName << endl;
	cout << "phone: " << Info.phone << endl;
	cout << "Age: " << Info.Age << endl;
	cout << "city: " << Info.city << endl;

	cout << "\n**********************************\n";



}

void ReadPersonInfo(strInfo Persons[100] , int& length)  
{
	cout << "How Many Persons?  \n";
	cin >> length;
	for (int i = 0; i <= length-1; i++)
	{
		cout << "Please Enter Person's " << i + 1 << "Info: \n";
		RedInfo(Persons[i]);
	}
}
void PrintPersonsInfo(strInfo Persons[100],int length)
{
	for (int i = 0; i <= length - 1; i++)
	{
		cout << "Persons's " << i + 1 << "Info: \n";
		PrintInfo(Persons[i]);
	}


}

int main()
{
	strInfo Persons[100];
	int length = 1;
	ReadPersonInfo(Persons, length);
	PrintPersonsInfo(Persons, length);
	return 0;

}