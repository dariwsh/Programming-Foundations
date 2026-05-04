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
		cin >> tempEmplyee.LastName;
		cout << "Pleas Enter Salary: ";
		cin >> tempEmplyee.Salary;

		Vemployee.push_back(tempEmplyee);

		cout << "Do You hava Add Number Y | N ";
		cin >> Check;
	
	}
}
stEmployee GetMaxSalary(vector<stEmployee>& Vemployee)
{
	stEmployee maxEmp = Vemployee[0];

	for (int i = 1; i < Vemployee.size(); i++)
	{
		if (Vemployee[i].Salary > maxEmp.Salary)
		{
			maxEmp = Vemployee[i];
		}
	}

	return maxEmp;
}

void Print(vector<stEmployee>& Vemployee)
{
	stEmployee emp = GetMaxSalary(Vemployee);

	cout << "Top Salary:\n";
	cout << emp.FirstName << " " << emp.LastName << endl;
	cout << emp.Salary << endl;
}

int main()
{
	vector<stEmployee> Vemployee;

	ReadVector(Vemployee);
	Print(Vemployee);
	return 0;
}