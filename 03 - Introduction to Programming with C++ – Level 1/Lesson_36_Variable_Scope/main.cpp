// كورس C++ المستوى الأول - الدرس السادس والثلاثون
#include <iostream>
using namespace std;

int globalVar = 100; // متغير عام (Global)

void printVars() {
    int localVar = 10; // متغير محلي (Local)
    cout << "Inside printVars: Local=" << localVar << ", Global=" << globalVar << endl;
}

int main() {
    printVars();
    cout << "Inside main: Global=" << globalVar << endl;
    return 0;
}