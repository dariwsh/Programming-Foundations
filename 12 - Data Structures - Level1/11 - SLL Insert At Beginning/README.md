# 11 - SLL Insert At Beginning (الإضافة في بداية القائمة)

## 📌 Topic Overview / نظرة عامة
Inserting a new node at the beginning (Head) of a Singly Linked List is an $O(1)$ constant time operation. This module demonstrates creating a new node, connecting its `next` pointer to the current head, and updating the head pointer reference (`Node* &head`).

عملية إضافة عنصر جديد في بداية القائمة الموصولة تتم بسلاسة وفي زمن ثابت $O(1)$ دون الحاجة لإعادة ترتيب باقي البيانات كما في الـ Array.

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

void InsertAtBeginning(Node* &head, int value) {
    // 1. Allocate new node
    Node* new_node = new Node();
    new_node->value = value;

    // 2. Link new node to current head
    new_node->next = head;

    // 3. Move head to point to new node
    head = new_node;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Head Manipulation & Pointer Reference Pass (`Node* &head`):** تمرير مؤشر رأس القائمة بالمرجعية (Reference) لتمكين الدالة من تعديل الـ `head` الأصلي بشكل مباشر.

---

## 🧠 الخلاصة (Key Takeaways)
1. **$O(1)$ Time Complexity:** الإضافة في البداية لا تتطلب أي Traversal.
2. **Order of Operations:** يجب ربط `new_node->next = head` أولاً قبل تحديث `head = new_node`.

---

## 🔑 أهم Syntax
```cpp
void InsertAtBeginning(Node* &head, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Reversing Pointer Steps:** جعل `head = new_node` قبل ربط `new_node->next = head` يقطع الروابط مع بقية عناصر القائمة وتضيع في الـ Heap.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Insert at Beginning** | إضافة في بداية القائمة |
| **Pass-by-Reference Pointer** | تمرير مؤشر بالمرجعية |
| **Constant Time ($O(1)$)** | زمن تعقيد ثابت |
