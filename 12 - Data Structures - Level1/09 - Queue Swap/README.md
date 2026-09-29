# 09 - Queue Swap (تبديل الطوابير)

## 📌 Topic Overview / نظرة عامة
Demonstrates how `std::queue::swap` efficiently interchanges the underlying data containers of two queues in $O(1)$ constant time.

تبديل محتويات طابورين بالكامل في زمن ثابت $O(1)$ دون الاستعانة بحلقات تكرارية يدوية.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q1, q2;
    q1.push("A"); q1.push("B");
    q2.push("X"); q2.push("Y");

    q1.swap(q2);

    cout << "q1 Front: " << q1.front() << endl; // X
    cout << "q2 Front: " << q2.front() << endl; // A
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Fast Container Swapping ($O(1)$ Complexity):** مبادلة مؤشرات البيانات الداخلية بدلاً من نسخ العناصر عنصر عنصر.

---

## 🧠 الخلاصة (Key Takeaways)
1. `q1.swap(q2);` تتيح نقل الطابور بالكامل فوراً.
2. الكفاءة تظل $O(1)$ بغض النظر عن عدد العناصر.

---

## 🔑 أهم Syntax
- `q1.swap(q2);`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Swapping Queues of Different Data Types:** يجب أن يكون كلا الطابورين من نفس النوع التجريدي.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Queue Swap** | مبادلة الطوابير |
| **Container Swap** | مبادلة الحاويات البياناتية |
