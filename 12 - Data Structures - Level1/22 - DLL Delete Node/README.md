# 22 - DLL Delete Node (حذف عقدة من DLL)

## 📌 Topic Overview / نظرة عامة
Deleting a specific node pointer from a Doubly Linked List safely without needing to manually traverse for the predecessor, because `del_node->prev` already points to it. Time complexity: $O(1)$ when node pointer is given.

حذف عقدة محددة من الـ DLL يتم بسهولة كبيرة لأن كل عقدة تعرف جارها السابق واللاحق بوضوح.

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

void DeleteNode(Node* &head, Node* del_node) {
    if (head == NULL || del_node == NULL) return;

    // If node to be deleted is head node
    if (head == del_node) {
        head = del_node->next;
    }

    // Change next only if node to be deleted is NOT the last node
    if (del_node->next != NULL) {
        del_node->next->prev = del_node->prev;
    }

    // Change prev only if node to be deleted is NOT the first node
    if (del_node->prev != NULL) {
        del_node->prev->next = del_node->next;
    }

    delete del_node;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Symmetrical Relinking and Dynamic Deallocation:** ربط العقدة السابقة بالعقدة التالية مباشرة وإلغاء حجز المساحة بدون تتبع يدوي.

---

## 🧠 الخلاصة (Key Takeaways)
1. تعديل الـ `head` إذا كانت العقدة المراد حذفها هي البداية.
2. تعديل `del_node->next->prev` و `del_node->prev->next`.
3. استدعاء `delete del_node`.

---

## 🔑 أهم Syntax
```cpp
void DeleteNode(Node* &head, Node* del_node);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- عدم التأكد من أن `del_node->next` أو `del_node->prev` ليسوا `NULL` قبل الوصول لمؤشراتهما.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **DLL Delete Node** | حذف عقدة من قائمة ثنائية |
