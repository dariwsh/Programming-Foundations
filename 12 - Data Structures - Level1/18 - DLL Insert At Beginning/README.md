# 18 - DLL Insert At Beginning (الإضافة في بداية DLL)

## 📌 Topic Overview / نظرة عامة
Inserting a new node at the head of a Doubly Linked List requires linking `new_node->next = head`, setting `head->prev = new_node` (if list is non-empty), and setting `head = new_node`. Time complexity: $O(1)$.

الإضافة في بداية الـ DLL تتطلب ضبط المؤشرين `next` و `prev` للعقدة الجديدة والرأس الحالي.

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

void InsertAtBeginning(Node* &head, int value) {
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = head;
    new_node->prev = NULL;

    if (head != NULL) {
        head->prev = new_node;
    }
    head = new_node;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Updating Prev Pointer of Existing Head:** التأكد من فحص `head != NULL` لضبط `head->prev = new_node` دون إحداث Null Exception إذا كانت القائمة فارغة.

---

## 🧠 الخلاصة (Key Takeaways)
1. **$O(1)$ Complexity:** عملية لحظية لا تتأثر بحجم البيانات.
2. تذكر دائماً تعيين `new_node->prev = NULL`.

---

## 🔑 أهم Syntax
```cpp
void InsertAtBeginning(Node* &head, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Dereferencing `head->prev` on Null:** محاولة كتابة `head->prev = new_node` والقائمة فارغة أصلاً (`head == NULL`).

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **DLL Insert at Beginning** | الإدراج في بداية القائمة الثنائية |
