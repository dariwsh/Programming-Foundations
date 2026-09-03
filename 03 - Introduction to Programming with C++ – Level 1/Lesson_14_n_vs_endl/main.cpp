// كورس C++ المستوى الأول - الدرس الرابع عشر
#include <iostream>
using namespace std;

int main() {
    // \n أسرع لأنها لا تقوم بعمل flush للـ buffer بعكس endl
    cout << "Line 1\n";
    cout << "Line 2" << endl;
    return 0;
}