// كورس C++ المستوى الأول - الدرس الثاني والثلاثون
#include <iostream>
using namespace std;

// تعريف الدالة قبل استخدامها
void showMyMessage() {
    cout << "Hello! This message is printed from a reusable function." << endl;
}

int main() {
    showMyMessage(); // استدعاء الدالة
    return 0;
}