// كورس C++ المستوى الأول - الدرس الحادي والثلاثون
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello ";
    string str2 = "World!";
    string full = str1 + str2; // دمج نصوص
    cout << "Concatenation: " << full << endl;
    cout << "String Length: " << full.length() << endl;
    return 0;
}