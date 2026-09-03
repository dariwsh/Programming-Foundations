#include <iostream>
using namespace std;

enum enColor { Red , Green , Yellow, Blue };
enum enGendor { Mal , Female  };
enum enMaritalStatus { Single, Married };

struct stAddress
{
	string StreetName;
	string BuildingNo;
	string POBox;
	string ZipCode;
};

struct stContactInfo
{
	string Phone;
	string Email;

	stAddress Address;
};

struct stPerson
{
	string FirstName;
	string LastName;
	
	stContactInfo ContactInfo;
	
	// Call enum
	enColor MyColor;
	enGendor MyGender;
	enMaritalStatus MaritalStatus;

};
int main()
{
	stPerson Person;
	Person.FirstName = "Ahmed";
	Person.LastName = "Darwish";


	Person.ContactInfo.Email = "xyz@gmial.com";
	Person.ContactInfo.Phone = "33333333333333333";
	

	// call enum
	Person.MyGender = enGendor::Mal;


	cout << Person.MyGender << endl;
	cout << Person.ContactInfo.Email;
}

