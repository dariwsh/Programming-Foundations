# 08 - STL Queue (الطابور القياسي)

## 📌 Topic Overview / نظرة عامة
A Queue is a FIFO (First-In, First-Out) data structure where elements are added at the **Back (Rear)** and removed from the **Front**. This module covers `std::queue` operations: `push()`, `pop()`, `front()`, `back()`, `empty()`, and `size()`.

الـ Queue هو هيكل بيانات ينظم العناصر على طريقة طوابير الانتظار "أول الداخلين هو أول الخارجين".

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Front: " << q.front() << endl; // 100
    cout << "Back:  " << q.back()  << endl; // 300

    q.pop(); // Removes 100
    cout << "New Front: " << q.front() << endl; // 200

    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **FIFO Processing Loop:** معالجة البيانات حسب أسبقية الوصول وتفريغ الطابور بـ `while (!q.empty())`.

---

## 🧠 الخلاصة (Key Takeaways)
1. **FIFO Principle:** يخرج العنصر القديم أولاً.
2. **Two Entry Points:** الإضافة دائماً من الـ Back والحذف دائماً من الـ Front.

---

## 🔑 أهم Syntax
- `#include <queue>`
- `queue<T> q;`
- `q.push(val);` | `q.pop();` | `q.front();` | `q.back();`

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Calling Front/Pop on Empty Queue:** محاولة الوصول لـ `q.front()` والطابور فارغ تسبب Crash غير متوقع.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Queue** | طابور |
| **FIFO** | أول الداخلين أول الخارجين |
| **Front** | مقدمة الطابور |
| **Back / Rear** | نهاية الطابور |
