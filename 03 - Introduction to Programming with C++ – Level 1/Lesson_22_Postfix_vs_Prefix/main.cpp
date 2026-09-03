// كورس C++ المستوى الأول - الدرس الثاني والعشرون
#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = ++a; // تزيد أولاً ثم تخزن القيمة في b
    cout << "Prefix: a=" << a << ", b=" << b << endl;

    int x = 5;
    int y = x++; // تخزن القيمة في y أولاً ثم تزيد x
    cout << "Postfix: x=" << x << ", y=" << y << endl;
    return 0;
}