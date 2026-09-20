/*
 * ======================================================================================
 * الموضوع: مراجعة المؤشرات والذاكرة (Pointers & Memory Revision)
 * الوصف: مرجع أساسي وشامل لمفهوم المؤشرات (Pointers) والعناوين في الذاكرة.
 * المفاهيم المغطاة:
 *   1. معامل العنوان (& Address-of operator) ومعامل الإلغاء/القيمة (* Dereference operator).
 *   2. تغيير قيمة المتغير عن طريق المؤشر (Modifying values via Pointers).
 *   3. إعادة توجيه المؤشر لمتغير آخر (Pointer Reassignment).
 *   4. المؤشرات الصفرية واحتياطات الأمان (nullptr & Safety Checks).
 *   5. التمرير بالقيم والتمرير بالمؤشرات (Pass by Value vs Pass by Reference/Pointer).
 *   6. حسابات المؤشرات مع المصفوفات (Pointer Arithmetic).
 * ======================================================================================
 */

#include <iostream>

using namespace std;

// دالة لتبديل قيمتين باستخدام المؤشرات (Pass by Pointer)
void swapByPointer(int* ptrA, int* ptrB) {
    if (ptrA == nullptr || ptrB == nullptr) return;
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

// دالة لتبديل قيمتين باستخدام المرجعية (Pass by Reference)
void swapByReference(int& refA, int& refB) {
    int temp = refA;
    refA = refB;
    refB = temp;
}

int main()
{
    cout << "=====================================================\n";
    cout << "          POINTERS REVISION - مراجعة المؤشرات        \n";
    cout << "=====================================================\n\n";

    // -------------------------------------------------------------
    // مثال 1: أساسيات المؤشرات والتصريح عنها
    // -------------------------------------------------------------
    cout << "--- [1] Basic Pointer Concepts ---\n";
    int a = 10;
    cout << "Variable 'a' value:   " << a << endl;
    cout << "Variable 'a' address: " << &a << " (Memory Address in RAM)\n";

    // التصريح عن مؤشر وإسناد عنوان 'a' إليه
    int* p = &a;
    cout << "Pointer 'p' stores address: " << p << endl;
    cout << "Dereferenced '*p' value:   " << *p << " (Value at stored address)\n\n";

    // تعديل قيمة المتغير الأصلي 'a' عن طريق المؤشر '*p'
    *p = 25;
    cout << "After modifying '*p = 25':\n";
    cout << "New value of 'a': " << a << endl << endl;

    // -------------------------------------------------------------
    // مثال 2: إعادة توجيه المؤشر (Pointer Reassignment)
    // -------------------------------------------------------------
    cout << "--- [2] Pointer Reassignment ---\n";
    int c = 12;
    cout << "Variable 'c' value:   " << c << endl;
    cout << "Variable 'c' address: " << &c << endl;

    // توجيه نفس المؤشر p ليشير إلى المتغير c
    p = &c;
    cout << "Pointer 'p' now stores address of 'c': " << p << endl;
    cout << "Pointer 'p' dereferenced value:       " << *p << endl << endl;

    // -------------------------------------------------------------
    // مثال 3: المؤشر الصفري (Null Pointers) والتحقق منه
    // -------------------------------------------------------------
    cout << "--- [3] Nullptr & Safe Dereferencing ---\n";
    int* ptrSafe = nullptr; // يفضل استخدام nullptr بدلاً من NULL في C++ Modern

    if (ptrSafe != nullptr) {
        cout << "Value: " << *ptrSafe << endl;
    } else {
        cout << "ptrSafe is null! Cannot dereference to avoid crash/Segmentation Fault.\n\n";
    }

    // -------------------------------------------------------------
    // مثال 4: تبديل المتغيرات (Swap function)
    // -------------------------------------------------------------
    cout << "--- [4] Swapping Variables via Pointers ---\n";
    int x = 100, y = 200;
    cout << "Before swap: x = " << x << ", y = " << y << endl;

    swapByPointer(&x, &y);
    cout << "After swapByPointer(&x, &y): x = " << x << ", y = " << y << endl;

    swapByReference(x, y);
    cout << "After swapByReference(x, y): x = " << x << ", y = " << y << endl << endl;

    // -------------------------------------------------------------
    // مثال 5: الحسابات على المؤشرات مع المصفوفات (Pointer Arithmetic)
    // -------------------------------------------------------------
    cout << "--- [5] Pointer Arithmetic with Arrays ---\n";
    int arr[] = { 100, 200, 300, 400 };
    int* arrPtr = arr; // اسم المصفوفة يتحول تلقائياً لمؤشر لأول عنصر &arr[0]

    cout << "Array elements accessed via Pointer Arithmetic:\n";
    for (int i = 0; i < 4; i++) {
        cout << "Element " << i << " -> Address: " << (arrPtr + i) 
             << " | Value: " << *(arrPtr + i) << endl;
    }

    cout << "\n=====================================================\n";
    return 0;
}
