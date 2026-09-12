#include <iostream>
using namespace std;

class clsEmployyee
{
    string _FirstName;
    string _lastName;
    int _Age;
    float _Salary;

    struct Address
    {
        string AddressLine1;
        string AddressLine2;
        string city;
        string Country;
        string Streat;
    };

public:

    Address Add1;

    clsEmployyee(
        string FirstName,
        string LastName,
        int Age,
        float Salary,
        string AddressLine1,
        string AddressLine2,
        string city,
        string Country,
        string Streat)
    {
        _FirstName = FirstName;
        _lastName = LastName;
        _Age = Age;
        _Salary = Salary;

        Add1.AddressLine1 = AddressLine1;
        Add1.AddressLine2 = AddressLine2;
        Add1.city = city;
        Add1.Country = Country;
        Add1.Streat = Streat;
    }

    void Print()
    {
        cout << "First Name: " << _FirstName << endl;
        cout << "Last Name: " << _lastName << endl;
        cout << "Age: " << _Age << endl;
        cout << "Salary: " << _Salary << endl;

        cout << "\nAddress:\n";
        cout << "Address Line 1: " << Add1.AddressLine1 << endl;
        cout << "Address Line 2: " << Add1.AddressLine2 << endl;
        cout << "City: " << Add1.city << endl;
        cout << "Country: " << Add1.Country << endl;
        cout << "Street: " << Add1.Streat << endl;
    }
};


int main()
{
    clsEmployyee Employee(
        "Ahmed",
        "Darwish",
        25,
        5000,
        "22 Street",
        "Street One",
        "Damanhur",
        "Egypt",
        "El Gomhoria"
    );
    Employee.Print();
    system("pause>0");
    return 0;
}