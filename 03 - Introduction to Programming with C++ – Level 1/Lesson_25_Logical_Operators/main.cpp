// كورس C++ المستوى الأول - الدرس الخامس والعشرون
#include <iostream>
using namespace std;

int main() {
    bool cond1 = (5 > 3); // true
    bool cond2 = (10 < 2); // false
    
    cout << (cond1 && cond2) << endl; // AND
    cout << (cond1 || cond2) << endl; // OR
    cout << (!cond1) << endl;         // NOT
    return 0;
}