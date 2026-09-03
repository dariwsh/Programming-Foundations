// كورس C++ المستوى الأول - الدرس الرابع والثلاثون
#include <iostream>
using namespace std;

// Procedure (لا تعيد قيمة)
void printHello() {
    cout << "Hello from a Procedure!\n";
}

// Function (تعيد قيمة)
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    printHello();
    int sum = addNumbers(5, 7);
    cout << "Sum: " << sum << endl;
    return 0;
}