# 24 - DLL Delete Last Node (حذف العقدة الأخيرة من DLL)

## 📌 Topic Overview / نظرة عامة
Deleting the last node (Tail) in a Doubly Linked List. Finds the last node, updates its predecessor's `next` pointer to `NULL`, and frees the last node's memory. Time complexity: $O(n)$.

حذف العقدة الأخيرة وتحديث الـ `next` الخاص بالعقدة التي تسبقها مباشرة إلى `NULL`.

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

void DeleteLastNode(Node* &head) {
    if (head == NULL) return;

    if (head->next == NULL) {
        delete head;
        head = NULL;
        return;
    }

    Node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }

    last->prev->next = NULL; // Predecessor becomes new tail
    delete last;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Tail Relinking via Prev:** استغلال `last->prev->next = NULL` لتحديث نهاية القائمة فوراً عند الوصول للعقدة الأخيرة.

---

## 🧠 الخلاصة (Key Takeaways)
1. التعامل مع القائمة من عقدة واحدة كحالة خاصة (`head->next == NULL`).
2. قطع رابط العقدة المحذوفة وتحرير ذاكرتها.

---

## 🔑 أهم Syntax
```cpp
void DeleteLastNode(Node* &head);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- محاولة الوصول لـ `last->prev->next` دون فحص حالة العقدة الفردية الواحدة (`head->next == NULL`) مما يسبب Null Dereference Crash.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Delete Last Node** | حذف العقدة الأخيرة |
