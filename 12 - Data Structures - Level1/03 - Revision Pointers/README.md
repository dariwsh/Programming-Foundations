# 03 - Revision Pointers & Memory (المؤشرات والذاكرة)

## 📌 Topic Overview / نظرة عامة
Pointers are variables that store the memory address of another variable. Understanding pointers is mandatory for building dynamic data structures like Linked Lists, Stacks, Queues, and Trees. This module revises address-of (`&`) and dereferencing (`*`) operators, defensive programming with `nullptr`, pass-by-value vs pass-by-pointer vs pass-by-reference, and pointer arithmetic.

المؤشرات هي حجر الأساس لكل الـ Dynamic Data Structures. هذا الدرس يشرح كيفية التلاعب بالعناوين والوصول إلى ذاكرة الحاسوب بمرونة وأمان.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

void doubleValue(int* ptr) {
    if (ptr != nullptr) {
        *ptr = (*ptr) * 2;
    }
}

int main() {
    int a = 10;
    int* ptr = &a; // Stores address of 'a'

    cout << "Address: " << ptr << endl;
    cout << "Value: " << *ptr << endl; // Dereferencing

    doubleValue(&a);
    cout << "Doubled: " << a << endl; // 20
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Pointer Manipulation & Defensive Null Verification:** كيفية قراءة تعديلات القيم مباشرة من الذاكرة والتعامل بحذر مع الـ Null Pointers لحماية البرنامج من الـ Crash.

---

## 🧠 الخلاصة (Key Takeaways)
1. `&` (Address-of) يجلب عنوان المتغير في الـ RAM.
2. `*` (Dereference) يصل للقيم المخزنة داخل هذا العنوان.
3. Pass-by-Pointer يعطي الدالة صلاحية تعديل المتغير الأصلي مباشرة.

---

## 🔑 أهم Syntax
- **Pointer Declaration:** `int* ptr = nullptr;`
- **Assign Address:** `ptr = &val;`
- **Dereference Value:** `*ptr = 100;`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Dereferencing Null / Uninitialized Pointer:** محاولة قراءة `*ptr` بينما `ptr == nullptr` أو لم يتم حجز عنوان له، مما يؤدي فوراً إلى خطأ الـ Segmentation Fault / Null Reference Crash.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Pointer** | مؤشر |
| **Address-of (`&`)** | معامل إحضار العنوان |
| **Dereference (`*`)** | معامل الوصول للقيمة داخل العنوان |
| **Null Pointer** | مؤشر فارغ لا يشير لأي عنوان valid |
