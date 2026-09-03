// كورس C++ المستوى الأول - الدرس الأربعون
#include <iostream>
using namespace std;

void printArray(int arr[5], int length) {
    for (int i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    printArray(numbers, 5);
    return 0;
}