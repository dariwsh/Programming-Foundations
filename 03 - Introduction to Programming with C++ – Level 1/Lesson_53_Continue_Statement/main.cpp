// كورس C++ المستوى الأول - الدرس الثالث والخمسون
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) continue; // تخطي الرقم 5 فقط وإكمال التكرار
        cout << i << " ";
    }
    cout << endl;
    return 0;
}