#include <iostream>
#include <string>
using namespace std;
struct stInfo
{
    int Age;
    bool HasDrivingLicense;
    bool HasRecommendation;
};
stInfo ReadInfo()
{
    stInfo Info;
    cout << "Please Enter YOur Age? " << endl;
    cin >> Info.Age;

    cout << "Do you Have Drvier Lincese?" << endl;
    cin >> Info.HasDrivingLicense;

    cout << "Do you have HasRecommendation?" << endl;
    cin >> Info.HasRecommendation;
    return Info;
}

bool IsAcAccepted(stInfo Info)
{
    if (Info.HasRecommendation)
    {
        return true;
    }
    else
    {
        return (Info.Age > 21 && Info.HasDrivingLicense);

    }
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
    PrintResult(ReadInfo());

}

