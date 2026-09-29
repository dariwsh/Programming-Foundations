# 17 - Doubly Linked List Implementation (بناء القائمة الموصولة الثنائية)

## 📌 Topic Overview / نظرة عامة
A Doubly Linked List (DLL) consists of nodes where each node contains a data value and two pointers: `next` (pointing to the subsequent node) and `prev` (pointing to the preceding node). This allows bidirectional traversal (forward and backward).

القائمة الموصولة الثنائية تمنح كل عقدة مؤشرين (`next` و `prev`) مما يتيح التصفح والتحرك في الاتجاهين للأمام وللخلف بمرونة عالية.

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

int main() {
    Node* head;
    Node* Node1 = new Node();
    Node* Node2 = new Node();
    Node* Node3 = new Node();

    Node1->value = 1; Node1->next = Node2; Node1->prev = NULL;
    Node2->value = 2; Node2->next = Node3; Node2->prev = Node1;
    Node3->value = 3; Node3->next = NULL;  Node3->prev = Node2;

    head = Node1;

    // Forward Traversal
    while (head != NULL) {
        cout << head->value << " <-> ";
        head = head->next;
    }
    cout << "NULL" << endl;
    return 0;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Two-Way Node Structure & Pointer Synchronization:** ربط اتجاهين لكل عقدة والتأكد من توافق `nodeA->next == nodeB` مع `nodeB->prev == nodeA`.

---

## 🧠 الخلاصة (Key Takeaways)
1. **Bidirectional Traversal:** إمكانية التنقل للأمام وللخلف.
2. **Easier Predecessor Access:** التخلص من الحاجة لمتابعة العقدة السابقة بمؤشر خارجي منفصل.

---

## 🔑 أهم Syntax
```cpp
class Node {
public:
    int value;
    Node* next;
    Node* prev;
};
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Forgetting `prev` Initialization:** نسيا تعيين `Node1->prev = NULL` أو ربط `node2->prev` بالعقدة الأولى يكسر السلسلة المعاكسة.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Doubly Linked List** | قائمة موصولة ثنائية الاتجاه |
| **Previous Pointer (`prev`)** | مؤشر العقدة السابقة |
| **Bidirectional** | ثنائي الاتجاه |
