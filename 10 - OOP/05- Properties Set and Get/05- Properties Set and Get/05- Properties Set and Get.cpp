#include <iostream>

using namespace std;

class clsPerson
{
private:
	string _FristName;
	string _LastName;
public:
	void SetFirstName(string FirstName)
	{
		_FristName = FirstName;
	}

	string GetFirstName()
	{
		return _FristName;
	}
	__declspec(property(get = GetFirstName, put = SetFirstName)) string LastName;



	void SetLastName(string LastName)
	{
		_LastName = LastName;
	}

	string GetLastName()
	{
		return _LastName;
	}
	__declspec(property(get = GetLastName, put = SetLastName)) string FristName;

};

int main()
{
	clsPerson Person1;
	Person1.FristName = "Ahmed";
	Person1.LastName = "Darwish";

	cout << "First Name : " << Person1.FristName << endl;
	cout << "Last Name  : " << Person1.LastName << endl;
}