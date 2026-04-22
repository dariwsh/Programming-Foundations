# 📘 C++ Notes - Miscellaneous & Ternary Operator

---

## 🔹 1) Create Your Own Library

### 💡 الفكرة:

بدل ما تكرر الكود في كل ملف، تقدر تعمل **Library خاصة بيك** وتحط فيها functions.

---

### 🧠 الخطوات:

1. إنشاء ملف Header (`.h`)
2. كتابة functions جواه
3. استخدام `namespace` لتنظيم الكود

---

### 📌 مثال:

```cpp
#pragma once
#include <iostream>
using namespace std;

namespace MyLib
{
    void Test() {
        cout << "Hello from MyLib\n";
    }

    int SumTwoNumber(int a, int b) {
        return a + b;
    }
}
```

---

### 📌 الاستخدام:

#### ✔ الطريقة الآمنة:

```cpp
MyLib::Test();
```

#### ❌ الطريقة السهلة (مش مفضلة):

```cpp
using namespace MyLib;
Test();
```

---

### ⚠️ ملاحظات:

* `namespace` بيمنع تعارض الأسماء
* الأفضل تستخدم `::` علشان الأمان

---

## 🔹 2) Ternary Operator (Short IF)

### 💡 الفكرة:

اختصار سريع لـ `if - else`

---

### 🧠 الشكل العام:

```cpp
(condition) ? value_if_true : value_if_false;
```

---

### 📌 مثال بسيط:

```cpp
int x = 5;
(x > 0) ? cout << "Positive" : cout << "Negative";
```

---

### 📌 مثال باستخدام متغير:

```cpp
string result;
result = (x == 0) ? "Zero" : (x > 0) ? "Positive" : "Negative";
```

---

### ⚠️ ملاحظات:

* ينفع تستخدم function داخل ternary
* ينفع nested ternary (جوا بعض)
* بلاش تعقدها زيادة علشان تفضل مقروءة

---

## 🧠 Quick Comparison

| if - else             | ternary               |
| --------------------- | --------------------- |
| أطول                  | أقصر                  |
| أوضح                  | أسرع في الكتابة       |
| مناسب للحالات الكبيرة | مناسب للحالات البسيطة |

---

## 🎯 Summary

* Library = إعادة استخدام الكود
* namespace = تنظيم + منع تعارض
* `::` = استخدام آمن

Ahmed Darwish