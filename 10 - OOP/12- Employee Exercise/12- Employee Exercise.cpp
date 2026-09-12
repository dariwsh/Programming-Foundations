#include <iostream>
#include <string>
using namespace std;

class clsEmployee
{
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Email;
    string _Phone;
    double _Salary;
    string _Department;
public:

    // Constructor
    clsEmployee(
        int ID,
    string FirstName,
    string LastName,
    string Title,
    string Email,
    string Phone,
    double Salary,
    string Department)
    {
        _ID = ID;
        _FirstName = FirstName;
        _LastName = LastName;
        _Title = Title;
        _Email = Email;
        _Phone = Phone;
        _Salary = Salary;
        _Department = Department;
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
    void setTitle(string Title)
    {
        _Title = Title;
    }
    void setEmail(string Email)
    {
        _Email = Email;
    }
    void setPhone(string Phone)
    {
        _Phone = Phone;
    }
    void setSalary(double Slary)
    {
        _Salary = Slary;
    }
    void setDepartment(string Department)
    {
        _Department = Department;
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
    string Title()
    {
        return _Title;
    }

    string Email()
    {
        return _Email;
    }

    string Phone()
    {
        return _Phone;
    }

    double Salary()
    {
        return _Salary;
    }

    string Department()
    {
        return _Department;
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
        cout << "\nTitle     : " << _Title;
        cout << "\nEmail     : " << _Email;
        cout << "\nPhone     : " << _Phone;
        cout << "\nSalary    : " << _Salary;
        cout << "\nDepartment: " << _Department;
        cout << "\n____________________________\n";
    }
};

int main()
{
    clsEmployee P1(
        2420225,
        "Ahmed",
        "Darwish",
        "Developer",
        "Ahmed@gmail.com",
        "01550225603",
        5000,
        "IT"
    );

    P1.Print();

    P1.SendEmail("Hi", "How are you?");
    P1.SendSMS("How are you?");

    system("pause>0");

    return 0;
}

