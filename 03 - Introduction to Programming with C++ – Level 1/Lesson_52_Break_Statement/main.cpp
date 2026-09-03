// كورس C++ المستوى الأول - الدرس الثاني والخمسون
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) break; // إيقاف الحلقة تماماً عند 5
        cout << i << " ";
    }
    cout << endl;
    return 0;
}