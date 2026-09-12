# 08 - Destructors

<div align="center">
  <h3>⚡ C++ Object-Oriented Programming Series ⚡</h3>
  <p>
    <b>🌐 Language / اللغة:</b> <b>English</b> (Default) | <i>اضغط على الزر القابل للطي بالأسفل للتبديل إلى اللغة العربية</i>
  </p>
</div>

---

### 🌟 About the Author & Journey / نبذة عن الرحلة

> **English**  
> Peace and blessings be upon you 🤍  
> I'm sharing my journey in practical programming learning.  
> 
> Glad to have you connect with me 👇  
> 🔗 **LinkedIn:** [Ahmed Darwish](https://www.linkedin.com/in/ahmed-darwish-33b752330/)  
> 🌐 **Portfolio:** [darwish.xo.je](https://darwish.xo.je/)  
> 💻 **GitHub:** [dariwsh](https://github.com/dariwsh)  
> 
> 🚀 Always learning and growing

<details>
<summary><b>📖 اضغط هنا لعرض المقدمة بالعربية (Click to view Arabic Introduction)</b></summary>

> **العربية**  
> السلام عليكم 🤍  
> أنا بشارك رحلتي في تعلم البرمجة بشكل عملي  
> 
> يسعدني تتابعني 👇  
> 🔗 LinkedIn: https://www.linkedin.com/in/ahmed-darwish-33b752330/  
> 🌐 Portfolio: https://darwish.xo.je/  
> 💻 GitHub: https://github.com/dariwsh  
> 
> 🚀 مستمر في التعلم والتطوير

</details>

---

## 📘 Lesson Documentation (English)

### 🎯 1. Overview
A Destructor is automatically called when an object goes out of scope or is deleted, ensuring proper cleanup of allocated resources (memory, file handles, DB connections).

### 🔑 2. Key Concepts & Takeaways
- Same name as the class prefixed with a tilde (`~`).
- Takes NO parameters and returns nothing.
- Cannot be overloaded (only one destructor per class).

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class ResourceManager {
public:
    ResourceManager() {
        cout << "Resource Allocated.\n";
    }

    ~ResourceManager() {
        cout << "Resource Cleaned Up and Released.\n";
    }
};

int main() {
    {
        ResourceManager res; // Constructor called
    } // Out of scope -> Destructor called here
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Destructors are called in reverse order of constructors (LIFO: Last In, First Out).

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Can a class have more than one Destructor?**
- A) Yes, by changing parameters
- B) No, a class can have only ONE destructor
- C) Up to 3 destructors are allowed
- D) Yes, if they are private

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, a class can have only ONE destructor because it takes no parameters.`
</details>

<br>

#### **Q2: In what order are destructors called for local stack objects?**
- A) First In, First Out (FIFO)
- B) Last In, First Out (LIFO - Reverse order of creation)
- C) Random order
- D) Alphabetical order by variable name

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Last In, First Out (LIFO - Reverse order of creation).`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 08 - دوال الهدم والتنظيف (Destructors)

### 🎯 1. نظرة عامة والهدف
دالة الهدم (Destructor) هي دالة خاصة تُستدعى تلقائياً عند انتهاء عمر الكائن أو حذفه من الذاكرة لتنظيف الموارد المحجوزة مثل الذاكرة والملفات.

### 🔑 2. المفاهيم الأساسية والفوائد
- نفس اسم الكلاس مسبوقاً بعلامة المدّة (`~`).
- لا تقبل أي معاملات ولا تُرجع أي قيمة.
- لا يمكن عمل Overload لها (دالة هدم واحدة فقط لكل كلاس).

### 💡 3. ملاحظات وتوجيهات عملية
- يتم تنفيذ دوال الهدم بترتيب عكسي لدوال البناء (آخر كائن تم إنشاؤه هو أول كائن يتم هدمه - LIFO).

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: هل يمكن لكلاس واحد أن يمتلك أكثر من دالة هدم (Destructor)؟**
- A) نعم بتغيير المعاملات
- B) لا، يمكن أن يمتلك دالة هدم واحدة فقط
- C) يُسمح بـ 3 دوال هدم كحد أقصى
- D) نعم إذا كانت private

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، لكل كلاس دالة هدم واحدة فقط لأنها لا تستقبل أي معاملات.`
</details>

<br>

#### **السؤال الثاني: ما هو ترتيب استدعاء دوال الهدم للكائنات الموجودة على الـ Stack؟**
- A) الداخل أولاً يخرج أولاً (FIFO)
- B) الداخل آخراً يخرج أولاً (LIFO - عكس ترتيب الإنشاء)
- C) عشوائياً
- D) أبجدياً حسب اسم المتغير

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) LIFO - يتم تدمير الكائنات بعكس ترتيب إنشائها.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
