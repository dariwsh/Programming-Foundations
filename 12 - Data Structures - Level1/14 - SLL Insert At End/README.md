# 14 - SLL Insert At End (الإضافة في نهاية القائمة)

## 📌 Topic Overview / نظرة عامة
Appending a new node at the end (Tail) of a Singly Linked List requires traversing to the last node (where `next == NULL`) and assigning `last->next = new_node`. Handles empty list edge cases ($head == NULL$). Time complexity: $O(n)$.

إضافة عنصر جديد في نهاية القائمة يتطلب التنقل حتى الوصول لآخر عقدة وربط مؤشرها بالعقدة الجديدة.

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

void InsertAtEnd(Node* &head, int value) {
    Node* new_node = new Node();
    new_node->value = value;
    new_node->next = NULL;

    if (head == NULL) {
        head = new_node;
        return;
    }

    Node* last = head;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **Tail Finding Traversal & Empty List Edge Case Handling:** معالجة حالة القائمة الفارغة والـ Traversal للوصول للعقدة الأخيرة `last->next == NULL`.

---

## 🧠 الخلاصة (Key Takeaways)
1. الـ Empty List تتطلب تعيين `head = new_node`.
2. شرط الـ Traversal هو `last->next != NULL` للتوقف عند آخر عقدة وليس بعدها.

---

## 🔑 أهم Syntax
```cpp
void InsertAtEnd(Node* &head, int value);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Looping Condition Mistake:** كتابة `while (last != NULL)` بدلاً من `while (last->next != NULL)` يتسبب في السقوط بعد آخر عقدة وفقدان إمكانية الربط بـ `last->next`.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Insert at End / Append** | إلحاق عنصر في النهاية |
| **Tail** | ذيل/نهاية القائمة |
| **Edge Case** | حالة خاصة / حدية |
