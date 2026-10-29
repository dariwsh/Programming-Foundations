# 15 - SLL Delete Node (حذف عقدة محددة من القائمة)

## 📌 Topic Overview / نظرة عامة
Deleting a node with a specific value from a Singly Linked List involves locating the target node while keeping track of its predecessor (`prev`), updating `prev->next = current->next`, and releasing the memory via `delete`. Time complexity: $O(n)$.

حذف عقدة محددة يتطلب تتبع العقدة السابقة وتخطي العقدة المراد حذفها في السلسلة ثم حذفها نهائياً من ذاكرة الـ Heap.

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

void DeleteNode(Node* &head, int value) {
    Node* temp = head;
    Node* prev = NULL;

    // If head node holds the value
    if (temp != NULL && temp->value == value) {
        head = temp->next;
        delete temp;
        return;
    }

    // Search for value
    while (temp != NULL && temp->value != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) return; // Value not found

    // Unlink node & free memory
    prev->next = temp->next;
    delete temp;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Predecessor Tracking & Dynamic Memory Freeing:** تتبع العقدة السابقة `prev` وإعادة توصيل المسار وحذف المساحة فوراً لعدم إحداث تسريب ذاكرة.

---

## 🧠 الخلاصة (Key Takeaways)
1. معالجة حالة حذف الـ Head كحالة خاصة (`head = temp->next`).
2. `prev->next = temp->next` لتخطي العقدة المحذوفة.
3. `delete temp` إجباري لمنع الـ Memory Leak.

---

## 🔑 أهم Syntax
```cpp
void DeleteNode(Node* &head, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Dangling Pointer / Unfreed Memory:** فك الربط فقط دون استخدام `delete temp` يبقي العنصر محجوزاً ضائعاً في الـ Heap.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Delete Node** | حذف عقدة |
| **Predecessor Pointer** | مؤشر العقدة السابقة |
| **Memory Deallocation** | تحرير المساحة من الذاكرة |
