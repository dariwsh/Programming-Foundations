# 12 - SLL Find Node (البحث عن عقدة في القائمة)

## 📌 Topic Overview / نظرة عامة
Searching for a node with a specific target value in a Singly Linked List requires linear traversal from the Head until a match is found or `NULL` is reached. Returns a pointer to the matching `Node*` or `NULL` if not found. Time complexity: $O(n)$.

البحث عن عنصر داخل القائمة الموصولة الأحادية يتطلب المرور الخطي (Linear Traversal). تعيد الدالة عنوان الـ Node في الذاكرة عند العثور عليها، أو `NULL` إذا لم تكن موجودة.

---

## 💻 C++ Implementation Summary

```cpp
#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
};

Node* Find(Node* head, int value) {
    while (head != NULL) {
        if (head->value == value)
            return head; // Target Node found
        head = head->next;
    }
    return NULL; // Not found
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Linear Search Traversal & Returning Pointer Node:** الـ Traversal عبر العقد ومقارنة القيمة وإرجاع عنوان العقدة المستهدفة للاستفادة منه في العمليات اللاحقة (مثل Insert After أو Delete).

---

## 🧠 الخلاصة (Key Takeaways)
1. **Linear Time $O(n)$:** في أسوأ الحالات يتم الكشف على القائمة بالكامل.
2. إرجاع `Node*` يتيح تمرير العقدة مباشرة لدوال تعديل أخرى.

---

## 🔑 أهم Syntax
```cpp
Node* Find(Node* head, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Null Reference on Result:** نسيان الفحص إن كانت النتيجة `NULL` قبل محاولة الوصول لأي من خصائص العقدة الناتجة.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Linear Search** | بحث خطي |
| **Match** | مطابقة القيمة |
| **Node Pointer** | مؤشر العقدة |
