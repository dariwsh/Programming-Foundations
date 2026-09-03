// كورس C++ المستوى الأول - الدرس الثالث والثلاثون
#include <iostream>
#include <string>
using namespace std;

int main() {
    int age;
    string name;
    
    cout << "Enter age: ";
    cin >> age;
    
    cin.ignore(); // هذا السطر يحل المشكلة بتجاوز حرف السطر الجديد المتبقي بالـ buffer
    
    cout << "Enter full name: ";
    getline(cin, name);
    
    cout << "Name: " << name << ", Age: " << age << endl;
    return 0;
}