# 05 - Revision Recursion (الاستدعاء الذاتي)

## 📌 Topic Overview / نظرة عامة
Recursion occurs when a function calls itself to solve smaller instances of the same problem. This module covers Base Cases, Recursive Steps, OS Call Stack execution flow, ascending & descending number printing, power function calculation ($Base^{Power}$), Factorial ($N!$), Fibonacci series, and recursive array sum.

الاستدعاء الذاتي دالة تنادي نفسها لحل مشاكل معقدة عبر تقسيما لمشاكل أصغر. يغطي هذا الدرس القواعد الذهبية للـ Recursion وفهم الـ Call Stack.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

// Factorial calculation via Recursion
long long factorial(int n) {
    // Base Case
    if (n <= 1) return 1;

    // Recursive Call
    return n * factorial(n - 1);
}

int main() {
    cout << "5! = " << factorial(5) << endl; // 120
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Call Stack Visualization & Base Case Specification:** تحديد نقطة التوقف بدقة وتخيل تراكم الاستدعاءات داخل الـ Call Stack وكيف تفتح وتغلق الفانكشنز تتابعياً.

---

## 🧠 الخلاصة (Key Takeaways)
1. **Base Case:** الشرط الأساسي الذي يوقف الـ Recursion ويمنع اللانهائية.
2. **Recursive Case:** السطر الذي تنادي فيه الدالة نفسها بقيم أقرب للـ Base Case.
3. **Call Stack:** النظام يضع كل استدعاء فوق الآخر حتى يصل للـ Base Case ثم يعود بالنتايج بالتراجع (Unwinding).

---

## 🔑 أهم Syntax
```cpp
ReturnType recursiveFunc(params) {
    if (baseCondition) return baseValue; // Base Case
    return recursiveFunc(modifiedParams); // Recursive Call
}
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Stack Overflow:** نسيان الـ Base Case أو كتابة خطوة الـ Recursion بدون تغيير القيم المقربة للتوقف، فيمتلئ مكدس الـ OS Call Stack وينهار البرنامج فوراً.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Recursion** | الاستدعاء الذاتي |
| **Base Case** | شرط التوقف |
| **Recursive Step** | خطوة التكرار الذاتي |
| **Call Stack** | مكدس نداءات الذاكرة |
