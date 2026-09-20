/*
 * ======================================================================================
 * الموضوع: مراجعة المصفوفات الديناميكية وذاكرة الهيب (Dynamic Arrays Revision)
 * الوصف: مرجع شامل لحجز وتفريغ الذاكرة ديناميكياً في C++ (Heap Memory Allocation).
 * المفاهيم المغطاة:
 *   1. الفرق بين ذاكرة Stack و Heap.
 *   2. حجز الذاكرة ديناميكياً باستخدام المعامل new.
 *   3. تفريغ الذاكرة وتجنب تسريب الذاكرة (Memory Leak Prevention via delete[]).
 *   4. تجنب المؤشرات المعلقة (Avoiding Dangling Pointers via nullptr).
 *   5. إدخال وقراءة درجات الطلاب بمصفوفة ديناميكية (Student Grades Example).
 *   6. تكبير مصفوفة ديناميكية يدوياً (Manual Dynamic Array Resizing).
 * ======================================================================================
 */

#include <iostream>
#include <iomanip>

using namespace std;

// دالة لتكبير حجم المصفوفة الديناميكية يدوياً
int* resizeArray(int* oldArr, int oldSize, int newSize) {
    // 1. حجز مصفوفة جديدة في الهيب بالحجم الجديد
    int* newArr = new int[newSize];

    // 2. نسخ العناصر القديمة إلى المصفوفة الجديدة
    int limit = (oldSize < newSize) ? oldSize : newSize;
    for (int i = 0; i < limit; i++) {
        newArr[i] = oldArr[i];
    }

    // 3. تحرير الذاكرة القديمة حتى لا يحدث تسريب ذاكرة (Memory Leak)
    delete[] oldArr;

    // 4. إرجاع المؤشر الجديد
    return newArr;
}

int main()
{
    cout << "=====================================================\n";
    cout << "     DYNAMIC ARRAYS REVISION - المصفوفات الديناميكية \n";
    cout << "=====================================================\n\n";

    // -------------------------------------------------------------
    // مثال 1: حجز مصفوفة درجات الطلاب ديناميكياً (Student Grades)
    // -------------------------------------------------------------
    cout << "--- [1] Dynamic Allocation for Student Grades ---\n";
    int studentCount;
    cout << "Enter number of students: ";
    if (!(cin >> studentCount) || studentCount <= 0) {
        cout << "Invalid input! Defaulting to 3 students.\n";
        studentCount = 3;
    }

    // حجز مساحة في ذاكرة Heap
    float* gradesPtr = new float[studentCount];

    cout << "\nEnter Grades of " << studentCount << " students:\n";
    for (int i = 0; i < studentCount; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> *(gradesPtr + i); // أو يمكن كتابتها: cin >> gradesPtr[i];
    }

    cout << "\nDisplaying Grades of students:\n";
    float sumGrades = 0.0f;
    for (int i = 0; i < studentCount; i++) {
        cout << "Student " << (i + 1) << ": " << *(gradesPtr + i) << endl;
        sumGrades += gradesPtr[i];
    }

    cout << fixed << setprecision(2);
    cout << "Average Grade: " << (sumGrades / studentCount) << endl;

    // أهم خطوة: تفريغ الذاكرة المحجوزة
    delete[] gradesPtr;
    gradesPtr = nullptr; // لمنع Dangling Pointer
    cout << "Memory freed successfully!\n\n";

    // -------------------------------------------------------------
    // مثال 2: تغيير حجم المصفوفة الديناميكية يدوياً (Manual Resizing)
    // -------------------------------------------------------------
    cout << "--- [2] Manual Dynamic Array Resizing ---\n";
    int currentSize = 3;
    int* dynArr = new int[currentSize] { 10, 20, 30 };

    cout << "Original Array (Size " << currentSize << "): ";
    for (int i = 0; i < currentSize; i++) cout << dynArr[i] << " ";
    cout << endl;

    // نريد توسيع الحجم من 3 إلى 5
    int newSize = 5;
    dynArr = resizeArray(dynArr, currentSize, newSize);

    // إضافة عناصر جديدة في المساحة المضافة
    dynArr[3] = 40;
    dynArr[4] = 50;
    currentSize = newSize;

    cout << "Resized Array (Size " << currentSize << "):  ";
    for (int i = 0; i < currentSize; i++) cout << dynArr[i] << " ";
    cout << endl;

    // تفريغ الذاكرة المحجوزة
    delete[] dynArr;
    dynArr = nullptr;

    cout << "\n=====================================================\n";
    return 0;
}
