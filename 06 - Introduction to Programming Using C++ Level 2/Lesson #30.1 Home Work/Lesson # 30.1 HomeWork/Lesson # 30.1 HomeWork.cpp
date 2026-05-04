#include <iostream>
#include <vector>
using namespace std;

struct stEmployee {
	string FirstName;
	string LastName;
	float Salary;
};

void ReadVector(vector <stEmployee>& Vemployee)
{
	stEmployee tempEmplyee;
	char Check = 'Y';
	while (Check == 'Y' || Check == 'y')
	{
		cout << "Pleas Enter First Name: ";
		cin >> tempEmplyee.FirstName;
		cout << "Pleas Enter Last Name: ";
		cin >> tempEmplyee.LastName ;
		cout << "Pleas Enter Salary: ";
		cin >> tempEmplyee.Salary ;

		Vemployee.push_back(tempEmplyee);

		cout << "Do You hava Add Number Y | N ";
		cin >> Check;
	} 
}
// & Gols Not Copy 
void PrintVector(vector <stEmployee>& Vemployee) 
{
	for (stEmployee& i : Vemployee)
	{
		cout << "-------------Employess Vector------------------\n";
		cout << "First Name : " << i.FirstName << endl;
		cout << "Last Name  : " << i.LastName << endl;
		cout << "Salary     : " << i.Salary << endl;
		cout << "-----------------------------------------------\n";

		cout << endl;
	}
	cout << endl;
}

int main()
{
	vector <stEmployee> Vemployee;
	ReadVector(Vemployee);
	PrintVector(Vemployee);
	return 0;
}