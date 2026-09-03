// كورس C++ المستوى الأول - الدرس الثلاثون
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Implicit Conversion (تلقائي)
    int x = 10;
    double y = x;
    cout << "Implicit: " << y << endl;

    // Explicit Casting (يدوي)
    double pi = 3.14159;
    int intPi = (int)pi;
    cout << "Explicit: " << intPi << endl;
    return 0;
}