#include <iostream>
#include <string>
using namespace std;
// problem 1

void PrintNameProblem1(string Name)
{
    cout << "\n Your Name is: " << Name << endl;
}

// problem 2

string ReadName ()
{
    string Names;
    cout << "Pleas enter your name? " << endl;
    getline(cin, Names);
    return Names;
}

// problem 3

enum enNumberType { Odd = 1, Even =2 };

int ReadNumber()
{
    int Num;
    cout << "Pleas Enter a number? " << endl;
    cin >> Num;
    return Num;
}

enNumberType CheckNumberTtype(int Num)
{
    int Result = Num % 2;
    if (Result == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;
}

void PrintNumbertType(enNumberType NumberType)
{
    if (NumberType == enNumberType::Even)
        cout << "\n Number Is Even. \n";
    else
        cout << "\n Number Is odd. \n";

}

// problem 4

struct stInfo
{
    int Age;
    bool HasDrivingLicense;
};
stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please Enter YOur Age? " << endl;
    cin >> Info.Age;

    cout << "Do you Have Drvier Lincese?" << endl;
    cin >> Info.HasDrivingLicense;
    return Info;
}

bool IsAcAccepted(stInfo Info)
{
    return (Info.Age > 21 && Info.HasDrivingLicense);
}

void PrintResult(stInfo Info)
{
    if (IsAcAccepted(Info))
        cout << "\n Hired \n";
    else
        cout << "\n Regected \n";

}

int main()
{
    //PrintNameProblem1("Ahmed Darwish");
    //cout << ReadName() << endl;\
    
    // problem3 
    // PrintNumbertType(CheckNumberTtype(ReadNumber()));
     
    // problem 4
    return 0;
}

