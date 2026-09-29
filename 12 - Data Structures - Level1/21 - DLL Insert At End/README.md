# 21 - DLL Insert At End (الإضافة في نهاية DLL)

## 📌 Topic Overview / نظرة عامة
Appending a new node at the tail of a Doubly Linked List. Requires iterating to the last node, setting `last->next = new_node`, and `new_node->prev = last`. Time complexity: $O(n)$.

إضافة عقدة جديدة في نهاية القائمة الموصولة الثنائية وتوصيل الـ `next` والـ `prev` بالذيل الحالي.

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

void InsertAtEnd(Node* &head, int value) {
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL) {
        new_node->prev = NULL;
        head = new_node;
        return;
    }

    Node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->next = new_node;
    new_node->prev = last;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Tail Relinking in DLL:** الوصول لـ `last->next == NULL` وربط `last->next = new_node` مع `new_node->prev = last`.

---

## 🧠 الخلاصة (Key Takeaways)
1. معالجة حالة القائمة الفارغة `head == NULL`.
2. ربط الاتجاهين بين الذيل القديم والعقدة الجديدة.

---

## 🔑 أهم Syntax
```cpp
void InsertAtEnd(Node* &head, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- نسيان تعيين `new_node->prev = last` في العقدة المضافة حديثاً في النهاية.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Append DLL** | إلحاق عقدة بالنهاية |
