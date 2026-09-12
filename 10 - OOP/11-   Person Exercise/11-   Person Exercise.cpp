
#include <iostream>
using namespace std;

class clsPerson
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;
    string _City;
    string _Address;

public:

    // Constructor
    clsPerson(
        int ID,
        string FirstName,
        string LastName,
        string Email,
        string Phone,
        string City,
        string Address)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Email = Email;
        _Phone = Phone;
        _City = City;
        _Address = Address;
    }

    // Property Set
    void setFirstName(string FirstName)
    {
        _FirstName = FirstName;
    }

    void setLastName(string LastName)
    {
        _LastName = LastName;
    }

    void setEmail(string Email)
    {
        _Email = Email;
    }

    void setPhone(string Phone)
    {
        _Phone = Phone;
    }

    void setCity(string City)
    {
        _City = City;
    }

    void setAddress(string Address)
    {
        _Address = Address;
    }

    // Property Get
    // Read Only Property
    int ID()
    {
        return _ID;
    }

    string FirstName()
    {
        return _FirstName;
    }

    string LastName()
    {
        return _LastName;
    }

    string Email()
    {
        return _Email;
    }

    string Phone()
    {
        return _Phone;
    }

    string City()
    {
        return _City;
    }

    string Address()
    {
        return _Address;
    }

    // Full Name
    string FullName()
    {
        return _FirstName + " " + _LastName;
    }

    // Send Email
    void SendEmail(string Subject, string Body)
    {
        cout << "\nThe following message sent successfully to email: "
            << _Email << endl;

        cout << "Subject: " << Subject << endl;
        cout << "Body: " << Body << endl;
    }

    // Send SMS
    void SendSMS(string TextMessage)
    {
        cout << "\nThe following SMS sent successfully to phone: "
            << _Phone << endl;

        cout << TextMessage << endl;
    }

    // Print Person Information
    void Print()
    {
        cout << "\nInfo:";
        cout << "\n____________________________";
        cout << "\nID        : " << _ID;
        cout << "\nFirstName : " << _FirstName;
        cout << "\nLastName  : " << _LastName;
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _Phone;
        cout << "\nCity      : " << _City;
        cout << "\nAddress   : " << _Address;
        cout << "\n____________________________\n";
    }
};

int main()
{
    clsPerson P1(
        2420225,
        "Ahmed",
        "Darwish",
        "Ahmed@gmail.com",
        "01550225603",
        "Alex",
        "22 Street Alex"
    );

    P1.Print();

    P1.SendEmail("Hi", "How are you?");
    P1.SendSMS("How are you?");

    system("pause>0");

    return 0;
}

