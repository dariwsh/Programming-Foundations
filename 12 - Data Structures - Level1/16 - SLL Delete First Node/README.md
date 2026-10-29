# 16 - SLL Delete First Node (حذف العقدة الأولى من القائمة)

## 📌 Topic Overview / نظرة عامة
Deleting the first node (Head) in a Singly Linked List is an $O(1)$ constant time operation. It involves storing the current head pointer temporarily, advancing `head = head->next`, and calling `delete` on the temporary pointer.

حذف العقدة الأولى يتم فوراً بـ $O(1)$ من خلال تحريك `head` إلى العقدة التالية ثم تحرير ذاكرة العقدة السابقة.

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

void DeleteFirstNode(Node* &head) {
    if (head == NULL) return;

    Node* temp = head;
    head = head->next; // Advance head
    delete temp;       // Free dynamic memory
}
```

---

## 🎯 Technique Doctor Wants to Teach / التكنيك الأساسي
- **$O(1)$ Head Node Removal:** الاحتفاظ بـ Pointer مؤقت لمنع ضياع عنوان العقدة المراد تحريرها قبل نقل الـ Head.

---

## 🧠 الخلاصة (Key Takeaways)
1. **$O(1)$ Efficiency:** الحذف في البداية سريع جداً.
2. استخدام متغير مؤقت `temp` ضرورى للوصول لـ `delete temp` بعد تغيير الـ Head.

---

## 🔑 أهم Syntax
```cpp
void DeleteFirstNode(Node* &head);
```

---

## ⚠️ أهم خطأ أتجنبه (Common Pitfall)
- **Direct Reassignment Without Temp:** كتابة `head = head->next` دون تخزين `head` القديم في `temp` تمنعك من تحرير الذاكرة لاحقاً وتحولها لـ Memory Leak.

---

## 📖 كلمات مهمة (Vocabulary)
| English | عربي |
| :--- | :--- |
| **Delete First Node** | حذف العقدة الأولى |
| **Temporary Pointer** | مؤشر مؤقت |
