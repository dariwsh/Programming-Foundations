# 07 - Stack Swap (تبديل المكدسات)

## 📌 Topic Overview / نظرة عامة
The `swap()` method in `std::stack` exchanges the contents of two stacks of the same type in $O(1)$ constant time complexity. This module demonstrates stack swapping and state duplication.

دالة `swap()` تتيح مبادلة محتويات مكدسين من نفس النوع بكفاءة عالية وبدون الحاجة لعمل Loops يدوية.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s1, s2;
    s1.push(1); s1.push(2);
    s2.push(10); s2.push(20);

    // Swap stack contents
    s1.swap(s2);

    cout << "s1 Top: " << s1.top() << endl; // 20
    cout << "s2 Top: " << s2.top() << endl; // 2
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Efficient State Exchange ($O(1)$ Swap):** تبادل البيانات الهيكلية بين الـ Stacks في زمن ثابت $O(1)$ عبر تبديل المراجع الداخلية للـ Containers.

---

## 🧠 الخلاصة (Key Takeaways)
1. `stk1.swap(stk2);` تبدل العناصر بالكامل فوراً.
2. لا تتأثر سرعة العملية بحجم المكدس ($O(1)$ complexity).

---

## 🔑 أهم Syntax
- `s1.swap(s2);` أو `swap(s1, s2);`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Type Mismatch:** محاولة تبديل مكدس من نوع `stack<int>` بمكدس من نوع `stack<string>` يسبب خطأ ترجمة (Compilation Error).

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Swap** | تبديل / مبادلة المحتوى |
| **Constant Time ($O(1)$)** | زمن ثابت لا يعتمد على الحجم |
