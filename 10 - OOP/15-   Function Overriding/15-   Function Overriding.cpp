
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

class clsEmployee : public clsPerson
{
private:
    string _Title;
    string _Department;
    float _Salary;

public:

    // Constructor
    clsEmployee(
        int ID,
        string FirstName,
        string LastName,
        string Email,
        string Phone,
        string City,
        string Address,
        string Title,
        string Department,
        float Salary)
        : clsPerson(ID, FirstName, LastName, Email, Phone, City, Address)
    {
        _Title = Title;
        _Department = Department;
        _Salary = Salary;
    }

    void setTitle(string Title)
    {
        _Title = Title;
    }

    string Title()
    {
        return _Title;
    }

    void setDepartment(string Department)
    {
        _Department = Department;
    }

    string Department()
    {
        return _Department;
    }

    void setSalary(float Salary)
    {
        _Salary = Salary;
    }

    float Salary()
    {
        return _Salary;
    }

    void Print()
    {
        cout << "\nInfo:";
        cout << "\n____________________________";
        cout << "\nID        : " << ID();
        cout << "\nFirstName : " << FirstName();
        cout << "\nLastName  : " << LastName();
        cout << "\nFull Name : " << FullName();
        cout << "\nEmail     : " << Email();
        cout << "\nPhone     : " << Phone();
        cout << "\nCity      : " << City();
        cout << "\nAddress   : " << Address();

        cout << "\nTitle     : " << _Title;
        cout << "\nDepartment: " << _Department;
        cout << "\nSalary    : " << _Salary;
        cout << "\n____________________________\n";
    }
};

class clsManager : public clsEmployee
{
    string _ManagerName;
    int _Age;
    string _DepartmentManager;

public:

    clsManager(
        int ID,
        string FirstName,
        string LastName,
        string Email,
        string Phone,
        string City,
        string Address,
        string Title,
        string Department,
        float Salary,
        string ManagerName,
        int Age,
        string DepartmentManager)
        : clsEmployee(
            ID,
            FirstName,
            LastName,
            Email,
            Phone,
            City,
            Address,
            Title,
            Department,
            Salary)
    {
        _ManagerName = ManagerName;
        _Age = Age;
        _DepartmentManager = DepartmentManager;
    }

    void setManagerName(string ManagerName)
    {
        _ManagerName = ManagerName;
    }

    string ManagerName()
    {
        return _ManagerName;
    }

    void setAge(int Age)
    {
        _Age = Age;
    }

    int Age()
    {
        return _Age;
    }

    void setDepartmentManager(string DepartmentManager)
    {
        _DepartmentManager = DepartmentManager;
    }

    string DepartmentManager()
    {
        return _DepartmentManager;
    }

    void Print()
    {
        cout << "\nEmployees\n";
        clsEmployee::Print();

        cout << "\nManager\n";
        cout << "\n---------------------------\n";
        cout << "\nManagerName       : " << _ManagerName;
        cout << "\nAge               : " << _Age;
        cout << "\nDepartmentManager : " << _DepartmentManager;
        cout << "\n---------------------------\n";
    }
};

int main()
{
    clsManager M1(
        240,
        "Ahmed",
        "Darwish",
        "S@gm",
        "01532344321",
        "Alex",
        "22 Street",
        "DEV",
        "IT",
        22000.9,
        "AhmedDarwish",
        22,
        "IT");

    M1.Print();

    system("pause>0");

    return 0;
}
