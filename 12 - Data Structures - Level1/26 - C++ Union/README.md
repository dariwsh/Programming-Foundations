# 26 - C++ Union (الاتحاد في الذاكرة)

## 📌 Topic Overview / نظرة عامة
A `union` is a user-defined data type in C++ where all members share the **exact same memory location**. The size of a union is equal to the size of its largest member. It is used to save memory when only one of the members needs to hold a value at any given time.

الـ `union` يتيح مشاركة نفس مساحة الذاكرة بين عدة متغيرات لتوفير مساحة الـ RAM عندما يُستخدم عنصر واحد فقط في كل مرة.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

union Data {
    int i;
    float f;
    char c;
};

int main() {
    Data d;
    d.i = 10;
    cout << "d.i: " << d.i << endl;

    d.f = 220.5f; // Overwrites the shared memory space
    cout << "d.f: " << d.f << endl;

    // Size equals largest member (float / int = 4 bytes)
    cout << "Union size: " << sizeof(Data) << " bytes" << endl;
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Shared Memory Allocation & Space Savings:** فهم التغطية المتداخلة (Memory Overlapping) وتوفير مساحات الذاكرة في الأنظمة المدمجة والمستويات المنخفضة.

---

## 🧠 الخلاصة (Key Takeaways)
1. **Shared Space:** كل الأعضاء يستخدمون نفس الـ Memory Address.
2. **Size Optimization:** حجم الـ Union يساوي حجم أكبر عنصر فيه.
3. التغيير في متغير يغطي على باقي قيم المتغيرات الأخرى (Overwriting).

---

## 🔑 أهم Syntax
```cpp
union UnionName {
    int i;
    float f;
};
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Reading Inactive Member:** كتابة قيمة في متغيّر ثم القراءة من متغير آخر من نفس الـ Union ينتج عنه بيانات غير مفهومة (Garbage Data) بسبب التغطية على البايتات.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Union** | اتحاد بالذاكرة |
| **Shared Memory** | ذاكرة مشتركة |
| **Memory Overlapping** | تداخل المساحة |
