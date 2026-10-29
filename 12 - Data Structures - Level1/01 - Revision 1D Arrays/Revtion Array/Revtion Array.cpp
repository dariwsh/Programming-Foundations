/*
 * ======================================================================================
 * الموضوع: مراجعة المصفوفات أحادية الأبعاد (1D Arrays Revision)
 * الوصف: مرجع شامل لمفاهيم المصفوفات الثابتة في الذاكرة تمهيداً لكورس هياكل البيانات.
 * المفاهيم المغطاة:
 *   1. تعريف الإنسجام في الذاكرة (Contiguous Memory Allocation).
 *   2. الإعلان والتهيئة (Declaration & Initialization).
 *   3. طرق التكرار (Traditional For Loop, Range-based For Loop).
 *   4. حساب المتوسط والمجموع من مدخلات المستخدم.
 *   5. البحث عن أكبر وأصغر عنصر (Find Min & Max).
 *   6. عكس عناصر المصفوفة (Array Reversing).
 *   7. إرسال المصفوفة للدوال وحساب حجمها (Passing Arrays to Functions).
 * ======================================================================================
 */

#include <iostream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;

// دالة لمطبوعة عناصر المصفوفة
void printArray(const int arr[], int size) {
    cout << "[ ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << (i < size - 1 ? ", " : " ");
    }
    cout << "]" << endl;
}

// دالة لإيجاد القيم الكبرى والصغرى
void findMinMax(const int arr[], int size, int& minVal, int& maxVal) {
    if (size <= 0) return;
    minVal = arr[0];
    maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }
}

// دالة لعكس عناصر المصفوفة
void reverseArray(int arr[], int size) {
    int start = 0, end = size - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    cout << "=====================================================\n";
    cout << "          1D ARRAYS REVISION - مراجعة المصفوفات       \n";
    cout << "=====================================================\n\n";

    // -------------------------------------------------------------
    // مثال 1: التعريف والوصول للعناصر (Basic Access)
    // -------------------------------------------------------------
    cout << "--- [1] Basics & Initialization ---\n";
    int numbers[5] = { 10, 20, 30, 40, 50 };
    cout << "First Element  (Index 0): " << numbers[0] << endl;
    cout << "Second Element (Index 1): " << numbers[1] << endl;
    cout << "Sum of first two: " << (numbers[0] + numbers[1]) << endl << endl;

    // -------------------------------------------------------------
    // مثال 2: مصفوفة النصوص وطرق التكرار (Range-based For Loop)
    // -------------------------------------------------------------
    cout << "--- [2] Iterating String Array ---\n";
    string names[] = { "Ahmed", "Mohamed", "Mustafa", "Sara" };
    int namesCount = sizeof(names) / sizeof(names[0]); // حساب عدد العناصر

    cout << "Traditional For Loop:\n";
    for (int i = 0; i < namesCount; i++) {
        cout << "Index " << i << ": " << names[i] << endl;
    }

    cout << "\nRange-based For Loop (C++11):\n";
    for (const string& name : names) {
        cout << "- " << name << endl;
    }
    cout << endl;

    // -------------------------------------------------------------
    // مثال 3: حساب متوسط درجات الطلاب (User Input & Average)
    // -------------------------------------------------------------
    cout << "--- [3] Student Grades & Average Calculation ---\n";
    const int GRADE_COUNT = 3;
    float grades[GRADE_COUNT];
    float sum = 0.0f;

    cout << "Enter " << GRADE_COUNT << " student grades:\n";
    for (int i = 0; i < GRADE_COUNT; i++) {
        cout << "Grade " << (i + 1) << ": ";
        cin >> grades[i];
        sum += grades[i];
    }

    float average = sum / GRADE_COUNT;
    cout << fixed << setprecision(2);
    cout << "Total Sum: " << sum << endl;
    cout << "Average Grade: " << average << endl << endl;

    // -------------------------------------------------------------
    // مثال 4: البحث عن أكبر وأصغر قيمة وعكس المصفوفة
    // -------------------------------------------------------------
    cout << "--- [4] Min/Max Search & Array Reversing ---\n";
    int data[] = { 45, 12, 89, 7, 33, 98, 21 };
    int dataSize = sizeof(data) / sizeof(data[0]);

    cout << "Original Data: ";
    printArray(data, dataSize);

    int minVal, maxVal;
    findMinMax(data, dataSize, minVal, maxVal);
    cout << "Minimum Value: " << minVal << endl;
    cout << "Maximum Value: " << maxVal << endl;

    reverseArray(data, dataSize);
    cout << "Reversed Data: ";
    printArray(data, dataSize);

    cout << "\n=====================================================\n";
    return 0;
}
