# 10 - Singly Linked List Implementation (بناء القائمة الموصولة الأحادية)

## 📌 Topic Overview / نظرة عامة
A Singly Linked List (SLL) is a dynamic data structure consisting of nodes stored in non-contiguous memory locations. Each node stores a data value and a pointer to the next node (`next`). This module covers creating a custom `Node` class, dynamically allocating nodes in the Heap, manually linking pointers, and basic forward traversal.

القائمة الموصولة الأحادية تتألف من عقد (Nodes) موزعة ديناميكياً في الذاكرة. يغطي هذا الدرس كيفية إنشاء Structure الـ Node اليدوي وربط المؤشرات والقيام بعملية الـ Traversal.

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

int main() {
    Node* head;
    Node* Node1 = new Node();
    Node* Node2 = new Node();
    Node* Node3 = new Node();

    Node1->value = 1;  Node1->next = Node2;
    Node2->value = 2;  Node2->next = Node3;
    Node3->value = 3;  Node3->next = NULL;

    head = Node1;

    // Forward Traversal
    while (head != NULL) {
        cout << head->value << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Dynamic Node Creation & Pointer Linking:** بناء أول Data Structure مخصص باستخدام الكلاسات والمؤشرات والتنقل خطوة بخطوة بالـ `head = head->next`.

---

## 🧠 الخلاصة (Key Takeaways)
1. **Dynamic Size:** القائمة الموصولة تنمو وتتقلص بمرونة كاملة دون حجم محدد مسبقاً.
2. **Sequential Access:** لا توجد إمكانية للـ Direct Index Access (`arr[i]`)؛ يجب البدء دائماً من الـ Head والتنقل للعقدة التالية.

---

## 🔑 أهم Syntax
```cpp
class Node {
public:
    int value;
    Node* next;
};
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Losing Head Pointer:** تحريك المؤشر الاصلي `head` في loop الـ Traversal بدلاً من مؤشر مؤقت `current = head` يفقدك عنوان بداية القائمة تماماً في الذاكرة!

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Singly Linked List** | قائمة موصولة أحادية |
| **Node** | عقدة |
| **Head** | مؤشر رأس القائمة |
| **Next Pointer** | مؤشر العقدة التالية |
