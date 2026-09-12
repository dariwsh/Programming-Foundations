#include <iostream>
using namespace std;
class clsPerson
{
public:
	string FullName = "Ahmed Darwish ";
	int Age = 22;
};


class clsEmployee : public clsPerson
{
public:
	string Title = "CEO";
};


int main()
{
	clsEmployee Employee1; // big object 
	cout << Employee1.FullName << endl;

	////upcasting
	//this will convert employee to person.
	// clsPerson small object
	clsPerson* Person = &Employee1;
	cout << Person->FullName << endl;
	cout << Person->Age << endl;

	clsPerson Person2;
	//cout << Person2.FullName << endl;
	//////downcasting : you cannot convert person to employee
	//clsEmployee* E2 = &Person2;
	system("pause>0");
	return 0;
}