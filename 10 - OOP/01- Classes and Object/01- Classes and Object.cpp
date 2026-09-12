#include <iostream>
using namespace std;
class Preson
{
public :
	string FirstName;
	string LastName;
	
	short Age;
	
	void FullName()
	{
		cout << "First Name : " << FirstName  << endl;
		cout << "Last Name  : " << LastName << endl;
		cout << "Age        : " << Age;
	}

};


int main()
{
	Preson Person1;
	Person1.FirstName = " Ahmed ";
	Person1.LastName= "Darwish";
	Person1.Age = 22;

	Person1.FullName(); 
	cout << endl;
	system("pause");
	return 0;
}