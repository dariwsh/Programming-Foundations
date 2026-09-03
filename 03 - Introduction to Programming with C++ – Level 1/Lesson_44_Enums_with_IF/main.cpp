// كورس C++ المستوى الأول - الدرس الرابع والأربعون
#include <iostream>
using namespace std;

enum enColor { Red, Green, Blue };

int main() {
    enColor selectedColor = enColor::Green;
    if (selectedColor == enColor::Green) {
        cout << "Green color is selected!" << endl;
    }
    return 0;
}