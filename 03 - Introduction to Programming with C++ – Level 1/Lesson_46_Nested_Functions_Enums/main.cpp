// كورس C++ المستوى الأول - الدرس السادس والأربعون
#include <iostream>
using namespace std;

enum enStatus { Active, Inactive };

void showStatus(enStatus s) {
    if (s == enStatus::Active) cout << "User Status: Active\n";
    else cout << "User Status: Inactive\n";
}

int main() {
    showStatus(enStatus::Active);
    return 0;
}