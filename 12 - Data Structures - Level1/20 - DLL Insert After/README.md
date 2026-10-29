# 20 - DLL Insert After (الإضافة بعد عقدة في DLL)

## 📌 Topic Overview / نظرة عامة
Inserting a new node after a given node in a Doubly Linked List requires updating 4 pointer links: `new_node->next`, `new_node->prev`, `prev_node->next`, and `(next_node)->prev` if it exists.

إدراج عقدة في منتصف قائمة موصولة ثنائية يتطلب ضبط 4 روابط مؤشرات بدقة متناهية.

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

void InsertAfter(Node* prev_node, int value) {
    if (prev_node == NULL) return;

    Node* new_node = new Node();
    new_node->value = value;

    new_node->next = prev_node->next;
    new_node->prev = prev_node;
    prev_node->next = new_node;

    if (new_node->next != NULL) {
        new_node->next->prev = new_node;
    }
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **4-Pointer Re-linking Technique:** ضبط الروابط في الاتجاهين بأسلوب يمنع انقطاع السلسلة أو نسيان مؤشر الـ `prev` للعقدة اللاحقة.

---

## 🧠 الخلاصة (Key Takeaways)
1. `new_node->next = prev_node->next;`
2. `new_node->prev = prev_node;`
3. `prev_node->next = new_node;`
4. فحص `new_node->next != NULL` لربط `prev` العقدة اللاحقة بالعقدة الجديدة.

---

## 🔑 أهم Syntax
```cpp
void InsertAfter(Node* prev_node, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Forgetting Next Node's `prev` Update:** نسيان حطوات `new_node->next->prev = new_node` يجعل السير المعاكس في القائمة خاطئاً بعد هذه العقدة.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **4-Way Relinking** | إعادة توصيل الروابط الأربعة |
