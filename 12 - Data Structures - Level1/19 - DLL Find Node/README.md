# 19 - DLL Find Node (البحث عن عقدة في DLL)

## 📌 Topic Overview / نظرة عامة
Searching for a node with a matching value in a Doubly Linked List via linear search. Returns `Node*` pointer or `NULL`.

البحث الخطي في القائمة الموصولة الثنائية واسترجاع مؤشر العقدة المطلوبة.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node* prev;
};

Node* Find(Node* head, int value) {
    while (head != NULL) {
        if (head->value == value)
            return head;
        head = head->next;
    }
    return NULL;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Linear Search in Bidirectional Structures:** تنقل مرن عبر العقد لإرجاع المرجع المناسب لعمليات الإدراج والحذف المتقدمة.

---

## 🧠 الخلاصة (Key Takeaways)
1. التعقيد الزمني هو $O(n)$.
2. تعيد الدالة `Node*` لاستخدامه مباشرة مع `InsertAfter` أو `DeleteNode`.

---

## 🔑 أهم Syntax
```cpp
Node* Find(Node* head, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- عدم التأكد من أن نتيجة البحث ليست `NULL` قبل استخدامها.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **DLL Search** | البحث في القائمة الثنائية |
