// كورس C++ المستوى الأول - الدرس الثالث والأربعون
#include <iostream>
using namespace std;

int main() {
    int grade = 78;
    if (grade >= 90) {
        cout << "Excellent!" << endl;
    } else if (grade >= 75) {
        cout << "Very Good!" << endl;
    } else {
        cout << "Good/Pass!" << endl;
    }
    return 0;
}