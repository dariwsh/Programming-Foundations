# 06 - STL Stack (المكدس القياسي)

## 📌 Topic Overview / نظرة عامة
A Stack is a LIFO (Last-In, First-Out) data structure where elements are added and removed from a single end called the **Top**. This module demonstrates using C++ Standard Template Library `std::stack`, covering `push()`, `pop()`, `top()`, `empty()`, and `size()`.

الـ Stack هو هيكل بيانات خطي يعمل بمبدأ "آخر عنصر يدخل هو أول عنصر يخرج". يغطي هذا الدرس العمليات الأساسية في مكتبة الـ STL.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> stk;

    stk.push(10);
    stk.push(20);
    stk.push(30);

    cout << "Top element: " << stk.top() << endl; // 30

    stk.pop(); // Removes 30
    cout << "New Top element: " << stk.top() << endl; // 20

    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **LIFO Data Manipulation & Stack Traversal Loop:** كيفية تفريغ وتتبع عناصر الـ Stack باستخدام `while (!stk.empty())`.

---

## 🧠 الخلاصة (Key Takeaways)
1. **LIFO Principle:** العنصر الأخير هو أول ما يتم إخراجه.
2. **Access Limitation:** لا يمكنك الوصول إلا للعنصر الموجود في الـ Top فقط.
3. **No Direct Indexing:** لا يدعم `stk[0]` أو الوصول العشوائي.

---

## 🔑 أهم Syntax
- `#include <stack>`
- `stack<T> stk;`
- `stk.push(val);` | `stk.pop();` | `stk.top();` | `stk.empty();`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Undefined Behavior on Empty Stack:** مناداة `stk.top()` أو `stk.pop()` والـ Stack فارغ، يجب دائماً التأكد بشرط `!stk.empty()`.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Stack** | مكدس |
| **LIFO** | آخر الداخلين أول الخارجين |
| **Push** | إضافة عنصر |
| **Pop** | إزالة العنصر العلوي |
| **Top** | العنصر العلوي الحالي |
