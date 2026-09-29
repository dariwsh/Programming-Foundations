# 13 - SLL Insert After (الإضافة بعد عقدة محددة)

## 📌 Topic Overview / نظرة عامة
Inserting a new node after a given target node pointer in a Singly Linked List involves creating the new node, assigning `new_node->next = prev_node->next`, and updating `prev_node->next = new_node`. Time complexity: $O(1)$ when target pointer is given.

إضافة عقدة جديدة بعد عقدة معينة داخل القائمة الموصولة الأحادية يتطلب إعادة تشكيل رابطين في الذاكرة.

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

void InsertAfter(Node* prev_node, int value) {
    if (prev_node == NULL) {
        cout << "The given previous node cannot be NULL" << endl;
        return;
    }
    Node* new_node = new Node();
    new_node->value = value;

    // Relinking pointers
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Mid-List Insertion Pointer Relinking:** الترتيب الدقيق لرابط الـ `next` للعقدة الجديدة أولاً لمنع انقطاع السلسلة ثم ربط الـ `prev_node` بها.

---

## 🧠 الخلاصة (Key Takeaways)
1. `new_node->next = prev_node->next` أولاً لضمان عدم ضياع بقية القائمة.
2. `prev_node->next = new_node` ثانياً لدمج العقدة الجديدة في السلسلة.

---

## 🔑 أهم Syntax
```cpp
void InsertAfter(Node* prev_node, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Null Target Pointer:** إدخال `prev_node` يساوي `NULL` بدون فحص يسبب crash مباشر عند القراءة من الـ Pointer.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Insert After** | إدراج بعد |
| **Previous Node** | العقدة السابقة |
| **Relinking** | إعادة الربط |
