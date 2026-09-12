#include <iostream>
using namespace std;
class clsPerson
{
public:
	virtual void Print()
	{
		cout << "Hi, i'm a person!\n ";
	}
};
class clsEmployee : public clsPerson
{
public:
	void Print()
	{
		cout << "Hi, I'm an Employee\n";
	}
};
class clsStudent : public clsPerson
{
public:
	void Print()
	{
		cout << "Hi, I'm a student\n";
	}
};


int main()
{
	// normal
	clsEmployee Employee1;
	clsStudent Student1;
	Employee1.Print();
	Student1.Print();
	cout << "Pointer\n";
	// new virtual
	clsPerson* P1 = &Employee1;
	P1->Print();

	clsPerson* P2 = &Student1;
	P2->Print();
	system("pause>0");
	return 0;
}