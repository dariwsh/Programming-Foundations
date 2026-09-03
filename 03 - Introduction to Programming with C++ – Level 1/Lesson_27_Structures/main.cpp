// كورس C++ المستوى الأول - الدرس السابع والعشرون
#include <iostream>
using namespace std;

struct stPerson {
    string Name;
    int Age;
    string City;
};

int main() {
    stPerson person1;
    person1.Name = "Ahmed";
    person1.Age = 25;
    person1.City = "Cairo";

    cout << "Name: " << person1.Name << ", Age: " << person1.Age << ", City: " << person1.City << endl;
    return 0;
}