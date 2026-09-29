# 01 - Revision 1D Arrays (المصفوفات أحادية الأبعاد)

## 📌 Topic Overview / نظرة عامة
1D Arrays are contiguous memory blocks used to store elements of the same data type. This module covers fundamental array operations in C++, including indexing, element traversal, searching for min/max values, calculating sum & average, and reversing array elements.

المصفوفات أحادية الأبعاد هي كتل متصلة من الذاكرة (Contiguous RAM) تُستخدم لتخزين عناصر من نفس النوع. يغطي هذا الدرس المهارات الأساسية للتعامل مع Arrays في C++.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // Traversal using Traditional For-Loop
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Array Traversal & Direct Indexing ($O(1)$ Access):** المرور على عناصر المصفوفة بالكامل واستغلال الـ Index للوصول السريع لأي عنصر في زمن ثابت.

---

## 🧠 الخلاصة (Key Takeaways)
1. **Contiguous Memory:** عناصر الـ Array مخزنة وراء بعضها مباشرة في الـ RAM.
2. **Fixed Size:** حجم الـ Array يتحدد عند الإنشاء ولا يمكن تغييره أثناء التشغيل (Static).
3. **Random Access:** الوصول لأي عنصر بـ Index يستغرق $O(1)$.

---

## 🔑 أهم Syntax
- **Declaration:** `int arr[SIZE];`
- **Initialization:** `int arr[5] = {1, 2, 3, 4, 5};`
- **Range-based Loop:** `for (int val : arr) { cout << val; }`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Array Index Out of Bounds:** الوصول لـ Index خيالي أو خارج النطاق (مثلاً `arr[5]` والمصفوفة حجمها 5 برقم الفهرس من 0 إلى 4)، مما يسبب كوارث الـ Buffer Overflow أو Garbage Values.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Array** | مصفوفة |
| **Index** | فهرس / دليل العنصر |
| **Contiguous Memory** | ذاكرة متصلة |
| **Traversal** | المرور والتنقل بين العناصر |
