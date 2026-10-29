# 04 - Revision Dynamic Arrays (الذاكرة الديناميكية)

## 📌 Topic Overview / نظرة عامة
Dynamic Memory Allocation allows allocating memory on the Heap at runtime rather than fixed allocation on the Stack. This module revises dynamic array creation using `new[]`, proper memory deallocation with `delete[]`, preventing memory leaks, and implementing manual dynamic array resizing (`resizeArray`).

الذاكرة الديناميكية تتيح حجز المساحة المطلوبة في الـ Heap أثناء تشغيل البرنامج. يغطي هذا الدرس الإدارة السليمة للذاكرة وتجنب تسريب الذاكرة (Memory Leak).

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

int* resizeArray(int* oldArr, int oldSize, int newSize) {
    int* newArr = new int[newSize];
    for (int i = 0; i < oldSize; i++) {
        newArr[i] = oldArr[i];
    }
    delete[] oldArr; // Free old memory
    return newArr;
}

int main() {
    int size = 3;
    int* arr = new int[size]{10, 20, 30};

    // Manual Resizing
    arr = resizeArray(arr, size, 5);
    arr[3] = 40;
    arr[4] = 50;

    // Clean up
    delete[] arr;
    arr = nullptr;
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Heap Memory Management & Dynamic Resizing:** كيفية إنشاء وتوسيع الـ Arrays يدوياً في الـ Heap وإلغاء حجزها لتفادي نفاد ذاكرة النظام.

---

## 🧠 الخلاصة (Key Takeaways)
1. الـ Stack ينظم المتغيرات العادية وحجمه محدود وثابت.
2. الـ Heap حرة ومفتوحة لكن حجزها يتطلب `new[]` وتحريرها يدويًا بـ `delete[]`.
3. الـ Resizing يتطلب إنشاء مصفوفة جديدة بنسخ العناصر ثم حذف القديمة.

---

## 🔑 أهم Syntax
- **Allocation:** `int* arr = new int[size];`
- **Deallocation:** `delete[] arr; arr = nullptr;`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Memory Leak:** نسيان طلب `delete[]` مما يبقي الأماكن المحجوزة في الـ Heap ممتلئة حتى إغلاق البرنامج.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Heap** | ذاكرة البرامج الديناميكية |
| **Stack** | ذاكرة الدوال والنطاق المحلي |
| **Memory Leak** | تسريب الذاكرة |
| **Resizing** | تعديل الحجم |
