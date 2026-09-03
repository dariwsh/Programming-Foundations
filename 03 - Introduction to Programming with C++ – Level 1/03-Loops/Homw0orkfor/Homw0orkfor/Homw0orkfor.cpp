#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// --- [Problem 26: Print Numbers from 1 to N] ---
void Problem26() {
    int n;
    cout << "\n[Problem 26] Enter a number to count UP to: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }
    cout << endl;
}

// --- [Problem 27: Print Numbers from N to 1] ---
void Problem27() {
    int n;
    cout << "\n[Problem 27] Enter a number to count DOWN from: ";
    cin >> n;
    for (int i = n; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;
}

// --- [Problem 28: Sum Odd Numbers from 1 to N] ---
void Problem28() {
    int n, sum = 0;
    cout << "\n[Problem 28] Enter number to sum ODD numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) { // شرط الرقم الفردي
            sum += i;    // الجمع التراكمي (تعديل الخطأ السابق)
        }
    }
    cout << "Sum of Odd Numbers = " << sum << endl;
}

// --- [Problem 29: Sum Even Numbers from 1 to N] ---
void Problem29() {
    int n, sum = 0;
    cout << "\n[Problem 29] Enter number to sum EVEN numbers: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) { // شرط الرقم الزوجي
            sum += i;
        }
    }
    cout << "Sum of Even Numbers = " << sum << endl;
}

// --- [Problem 30: Calculate Factorial] ---
void Problem30() {
    int n;
    long long fac = 1; // استخدمنا long long لأن المضروب بيكبر بسرعة
    cout << "\n[Problem 30] Enter number to calculate Factorial: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: Factorial not defined for negative numbers.";
        return;
    }

    for (int i = n; i >= 1; i--) {
        fac *= i;
    }
    cout << "Factorial of " << n << " is: " << fac << endl;
}

// --- [Problem 32:                      ]---
void Problem32()
{
    int num, m , result=1 ;
    cout << "Enter two number: ";
    cin >> num >> m;
    if (m == 0) {
        cout << "Result = 1" << endl;
        return;
    }
    for (int i = 1; i <= m; i++)
    {
        result = num * result;
    }
    cout << result;
}

// --- [Problem 32:                      ]---
void Problem46()
{
    for (char i = 65; i <= 90; i++)
    {
        cout << i;
    }
}
// --- [Main Function] ---
int main() {
 
    // Problem26();
    // Problem27();
    // Problem28();
    // Problem29();
    //Problem30(); 
    //Problem32();
    //Problem46();
    return 0;
}