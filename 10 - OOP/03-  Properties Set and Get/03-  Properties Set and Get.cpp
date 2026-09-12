#include <iostream>
using namespace std;
class Preson
{
private:
	string _FirstName;
	string _LastName;
	short  _Age;


public:
	void setFirstName(string FirstName)
	{
		_FirstName = FirstName;
	}
	void setLastName(string LastName)
	{
		_LastName = LastName;
	}
	void setAge(short Age)
	{
		_Age = Age;
	}

	string GetFirstName()
	{
		return _FirstName;
	}

	string GetLastName()
	{
		return _LastName;
	}

	short GetAge() {
		return _Age;
	}

	string GetFullName()
	{
		return _FirstName + "" + _LastName;
	}

};


int main()
{
	Preson Person1;
	Person1.setFirstName( " Ahmed ");
	Person1.setLastName("Darwish");
	Person1.setAge(22);

	cout << "First Name:" << Person1.GetFirstName() << endl;
	cout << "Last Name :" << Person1.GetLastName() << endl;
	cout << " Age      :" << Person1.GetAge() << endl;
	cout << "Full Name:" << Person1.GetFullName() << endl;
	system("pause > 0");
	return 0;
}