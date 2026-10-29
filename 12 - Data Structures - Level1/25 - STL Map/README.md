# 25 - STL Map (الخريطة الترابطية)

## 📌 Topic Overview / نظرة عامة
`std::map` is an associative container storing sorted key-value pairs (`pair<const Key, T>`). Keys are unique. It is internally implemented as a Red-Black Tree (Self-balancing Binary Search Tree) providing logarithmic $O(\log n)$ search, insertion, and deletion times.

الـ `std::map` هي حاوية تخزن البيانات على شكل أزواج (مفتاح وقيمة). تضمن ترتيب العناصر تلقائياً بحسب المفتاح وتمنح سرعة بحث عالية $O(\log n)$.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> studentGrades;

    // Insertion
    studentGrades["Ahmed"] = 95;
    studentGrades["Mohamed"] = 90;
    studentGrades["Ali"] = 85;

    // Lookup
    cout << "Ahmed's Grade: " << studentGrades["Ahmed"] << endl;

    // Iteration
    for (const auto &pair : studentGrades) {
        cout << pair.first << " : " << pair.second << endl;
    }
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Key-Based Lookup & Pair Iteration:** البحث باستخدام المفتاح الفريد وإدارة البيانات المرتبطة دون الاعتماد على الـ Indices الرقمية.

---

## 🧠 الخلاصة (Key Takeaways)
1. **Sorted Keys:** العناصر مرتبة دائماً حسب المفتاح.
2. **$O(\log n)$ Time:** سرعة البحث والإضافة والحذف تعتمد على الـ Binary Search Tree.
3. كل مفتاح فريد ولا يمكن تكراره.

---

## 🔑 أهم Syntax
- `#include <map>`
- `map<KeyType, ValueType> myMap;`
- `myMap[key] = val;` | `myMap.find(key);`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Accidental Key Insertion:** استخدام `myMap[non_existing_key]` يقدم مفتاحاً جديداً بالـ Map بقيمة افتراضية بدلاً من مجرد الفحص، يفضل استخدام `myMap.find(key)` للبحث فقط.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Map** | خريطة بيانات |
| **Key-Value Pair** | زوج (مفتاح - قيمة) |
| **Logarithmic Time** | تعقيد لوغاريتمي $O(\log n)$ |
