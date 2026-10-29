# 23 - DLL Delete First Node (حذف العقدة الأولى من DLL)

## 📌 Topic Overview / نظرة عامة
Deleting the head node in a Doubly Linked List in $O(1)$ time complexity. Advances head pointer to `head->next`, updates new head's `prev` pointer to `NULL`, and frees old head.

حذف العقدة الأولى في الـ DLL وضبط مؤشر الـ `prev` للعقدة الجديدة لتصبح هي الـ Head الرسمي.

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

void DeleteFirstNode(Node* &head) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next;

    if (head != NULL) {
        head->prev = NULL; // New head's prev points to NULL
    }
    delete temp;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Head Advancing & Prev Disconnection:** تقديم الـ Head وتصفير `head->prev = NULL` لتأمين بداية القائمة الجديدة.

---

## 🧠 الخلاصة (Key Takeaways)
1. الـ Time Complexity هو $O(1)$.
2. تعيين `head->prev = NULL` بعد تقديم المؤشر.

---

## 🔑 أهم Syntax
```cpp
void DeleteFirstNode(Node* &head);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- ترك `head->prev` يشير إلى الـ Dynamic Memory المحذوفة قد يسبب Dangling Pointer.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Delete First DLL** | حذف رأس القائمة الثنائية |
