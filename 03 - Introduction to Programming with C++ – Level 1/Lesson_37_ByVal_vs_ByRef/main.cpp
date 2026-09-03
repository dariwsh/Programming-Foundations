// كورس C++ المستوى الأول - الدرس السابع والثلاثون
#include <iostream>
using namespace std;

// التمرير بالقيمة (By-Val)
void passByVal(int num) {
    num = 100;
}

// التمرير بالمرجع (By-Ref)
void passByRef(int &num) {
    num = 100;
}

int main() {
    int a = 5, b = 5;
    passByVal(a);
    passByRef(b);
    cout << "Pass By Val: a=" << a << endl;
    cout << "Pass By Ref: b=" << b << endl;
    return 0;
}