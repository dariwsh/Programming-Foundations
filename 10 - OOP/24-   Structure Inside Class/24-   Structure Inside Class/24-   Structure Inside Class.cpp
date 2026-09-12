#include <iostream>
using namespace std;

class clsPerson {
	struct stAddress
	{
		string AddressLine1;
		string AddressLine2;
		string City;
		string Country;
	};
public :
	string FullName;
	stAddress Address;

	clsPerson()
	{
		FullName = "Ahmed Darwish";
		Address.AddressLine1 = "22Streat";
		Address.AddressLine2 = "streat1one";
		Address.City = "Egypt";
		Address.Country = "Alex";
	}

	void PrintAddress()
	{
		cout << "\nAddress:\n";
		cout << Address.AddressLine1 << endl;
		cout << Address.AddressLine2 << endl;
		cout << Address.City << endl;
		cout << Address.Country << endl;
	}
};
int main()
{
	clsPerson P1;
	P1.PrintAddress();

	system("pause>0");
	return 0;
}