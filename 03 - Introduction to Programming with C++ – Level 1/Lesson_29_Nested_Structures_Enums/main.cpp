// كورس C++ المستوى الأول - الدرس التاسع والعشرون
#include <iostream>
using namespace std;

enum enColor { Red, Green, Blue };

struct stAddress {
    string Street;
    string City;
};

struct stEmployee {
    string Name;
    stAddress Address;
    enColor FavColor;
};

int main() {
    stEmployee emp1;
    emp1.Name = "Ahmed Mohamed";
    emp1.Address.Street = "123 Main St";
    emp1.Address.City = "Cairo";
    emp1.FavColor = enColor::Blue;

    cout << "Name: " << emp1.Name << " lives in " << emp1.Address.City << endl;
    return 0;
}