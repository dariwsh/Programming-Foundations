// كورس C++ المستوى الأول - الدرس الحادي والأربعون
#include <iostream>
using namespace std;

struct stStudent {
    string Name;
    int Grade;
};

int main() {
    stStudent classA[3];
    classA[0] = {"Ahmed", 95};
    classA[1] = {"Ali", 88};
    classA[2] = {"Omar", 92};

    for (int i = 0; i < 3; i++) {
        cout << "Student: " << classA[i].Name << ", Grade: " << classA[i].Grade << endl;
    }
    return 0;
}