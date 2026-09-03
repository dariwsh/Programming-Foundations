// كورس C++ المستوى الأول - الدرس الخامس والأربعون
#include <iostream>
using namespace std;

int main() {
    int day = 3;
    switch (day) {
        case 1:
            cout << "Sunday" << endl; break;
        case 2:
            cout << "Monday" << endl; break;
        case 3:
            cout << "Tuesday" << endl; break;
        default:
            cout << "Other Day" << endl;
    }
    return 0;
}