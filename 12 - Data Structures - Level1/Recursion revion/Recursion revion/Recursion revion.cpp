/*
 * ======================================================================================
 * الموضوع: مراجعة العودية (Recursion Revision)
 * الوصف: مرجع شامل لمفهوم الاستدعاء الذاتي للدوال (Recursion) في C++.
 * المفاهيم المغطاة:
 *   1. شرط التوقف (Base Case) لتجنب المالانهاية و Stack Overflow.
 *   2. الخطوة التكرارية (Recursive Case/Step).
 *   3. كيفية عمل مكدس الاستدعاءات (Call Stack Execution Flow).
 *   4. طباعة الأعداد تصاعدياً وتنازلياً (N to M & M to N).
 *   5. حساب القوة/الأسس (Power Function: Base^Power).
 *   6. حساب المضروب (Factorial: N!).
 *   7. متتالية فيبوناتشي (Fibonacci Sequence).
 *   8. حساب مجموع عناصر مصفوفة باستخدام العودية (Array Sum via Recursion).
 * ======================================================================================
 */

#include <iostream>

using namespace std;

// -------------------------------------------------------------
// [1] طباعة الأعداد تصاعدياً من N إلى M
// -------------------------------------------------------------
void printNumbersAscending(int N, int M) {
    // Base Case: شرط التوقف
    if (N > M) return;

    cout << N << (N == M ? "" : " -> ");
    printNumbersAscending(N + 1, M); // Recursive Call
}

// -------------------------------------------------------------
// [2] طباعة الأعداد تنازلياً من M إلى N
// -------------------------------------------------------------
void printNumbersDescending(int M, int N) {
    // Base Case: شرط التوقف
    if (M < N) return;

    cout << M << (M == N ? "" : " -> ");
    printNumbersDescending(M - 1, N); // Recursive Call
}

// -------------------------------------------------------------
// [3] حساب الأسس (MyPower: Base^Power)
// -------------------------------------------------------------
int myPower(int base, int power) {
    // Base Case: أي عدد أسه 0 يساوي 1
    if (power <= 0) return 1;

    // Recursive Case: Base * (Base ^ (Power - 1))
    return base * myPower(base, power - 1);
}

// -------------------------------------------------------------
// [4] حساب المضروب (Factorial: N!)
// -------------------------------------------------------------
long long factorial(int n) {
    // Base Case: مضروب 0 أو 1 هو 1
    if (n <= 1) return 1;

    // Recursive Case: n * (n - 1)!
    return n * factorial(n - 1);
}

// -------------------------------------------------------------
// [5] حساب متتالية فيبوناتشي (Fibonacci: F(n))
// F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)
// -------------------------------------------------------------
int fibonacci(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// -------------------------------------------------------------
// [6] حساب مجموع مصفوفة بالعودية (Recursive Array Sum)
// -------------------------------------------------------------
int arraySumRecursive(const int arr[], int size) {
    // Base Case: مصفوفة فارغة مجموعها 0
    if (size <= 0) return 0;

    // Element current + sum of remaining elements
    return arr[size - 1] + arraySumRecursive(arr, size - 1);
}

int main() {
    cout << "=====================================================\n";
    cout << "          RECURSION REVISION - مراجعة العودية        \n";
    cout << "=====================================================\n\n";

    // -------------------------------------------------------------
    // مثال 1: طباعة الأعداد (Ascending & Descending)
    // -------------------------------------------------------------
    cout << "--- [1] Ascending Numbers (1 to 10) ---\n";
    printNumbersAscending(1, 10);
    cout << "\n\n";

    cout << "--- [2] Descending Numbers (10 to 1) ---\n";
    printNumbersDescending(10, 1);
    cout << "\n\n";

    // -------------------------------------------------------------
    // مثال 2: حساب الأسس (Power Calculation)
    // -------------------------------------------------------------
    cout << "--- [3] Power Calculation (Base^Power) ---\n";
    int base = 2, p = 4;
    cout << base << "^" << p << " = " << myPower(base, p) << " (Expected: 16)\n\n";

    // -------------------------------------------------------------
    // مثال 3: حساب المضروب (Factorial)
    // -------------------------------------------------------------
    cout << "--- [4] Factorial Calculation (N!) ---\n";
    int num = 5;
    cout << num << "! = " << factorial(num) << " (Expected: 120)\n\n";

    // -------------------------------------------------------------
    // مثال 4: فيبوناتشي (Fibonacci)
    // -------------------------------------------------------------
    cout << "--- [5] Fibonacci Sequence (First 7 terms) ---\n";
    for (int i = 0; i < 7; i++) {
        cout << "F(" << i << ") = " << fibonacci(i) << endl;
    }
    cout << "\n";

    // -------------------------------------------------------------
    // مثال 5: مجموع عناصر مصفوفة بالعودية
    // -------------------------------------------------------------
    cout << "--- [6] Recursive Array Sum ---\n";
    int sampleArr[] = { 5, 10, 15, 20 };
    int arrSize = sizeof(sampleArr) / sizeof(sampleArr[0]);
    cout << "Array: [5, 10, 15, 20]\n";
    cout << "Recursive Sum: " << arraySumRecursive(sampleArr, arrSize) << " (Expected: 50)\n";

    cout << "\n=====================================================\n";
    return 0;
}