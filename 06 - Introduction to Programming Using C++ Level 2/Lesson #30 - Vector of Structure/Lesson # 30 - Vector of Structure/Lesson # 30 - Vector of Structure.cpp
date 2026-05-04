#include <iostream>
#include <vector>
using namespace std;
struct stEmployee{
	string FirstName;
	string LastName;
	float Salary;
};

int main()
{	
	vector < stEmployee > Vemployee;
	stEmployee tempEmplyee;
	tempEmplyee.FirstName = "Ahemd";
	tempEmplyee.LastName = "Darwish";
	tempEmplyee.Salary = 1000;

	Vemployee.push_back(tempEmplyee);


	tempEmplyee.FirstName = "Amr";
	tempEmplyee.LastName = "Khaled";
	tempEmplyee.Salary = 5000;

	Vemployee.push_back(tempEmplyee);


	tempEmplyee.FirstName = "Yousef";
	tempEmplyee.LastName = "Mohammed";
	tempEmplyee.Salary = 1300;

	Vemployee.push_back(tempEmplyee);


	for (stEmployee &i : Vemployee)
	{
		cout << "First Name : " << i.FirstName  << endl;
		cout << "Last Name  : " << i.LastName   << endl;
		cout << "Salary     : " << i.Salary     << endl;
		cout << endl;
	}
	cout << endl;
	return 0;
}

