# 30 - Objects with Parameterized Constructors and Arrays

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
Initializing arrays of objects when the class has parameterized constructors using initialization lists or modern array construction techniques.

### 🔑 2. Key Concepts & Takeaways
- Array Initialization List: `clsA arr[] = { clsA(1), clsA(2), clsA(3) };`.
- Overcoming lack of default constructor in array creation.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsBox {
public:
    int Length;
    clsBox(int length) : Length(length) {}
};

int main() {
    // Array of objects with parameterized constructor
    clsBox boxes[3] = { clsBox(10), clsBox(20), clsBox(30) };

    for (int i = 0; i < 3; i++) {
        cout << "Box " << i << " Length: " << boxes[i].Length << "\n";
    }
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- In modern C++, you can also use uniform initialization: `clsBox boxes[3] = { {10}, {20}, {30} };`.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: How can you initialize an array of objects if the class has NO default constructor?**
- A) It is impossible in C++
- B) By explicitly supplying parameterized constructor calls in an array initializer list
- C) By setting array size to 0
- D) By making the class struct

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) By explicitly supplying parameterized constructor calls in an array initializer list.`
</details>

<br>

#### **Q2: What happens if you write `clsBox boxes[3];` when `clsBox` only defines `clsBox(int val)`?**
- A) Compiles smoothly
- B) Compilation Error: No matching default constructor exists
- C) Runtime crash
- D) Fills with zeros

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Compilation Error: No matching default constructor exists.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 30 - مصفوفات الكائنات مع دوال البناء بالمعاملات

### 🎯 1. نظرة عامة والهدف
تهيئة مصفوفات الكائنات عندما يمتلك الكلاس دالة بناء بمعاملات (Parameterized Constructor) عبر قوائم التهيئة والمصفوفات الحديثة.

### 🔑 2. المفاهيم الأساسية والفوائد
- قائمة تهيئة المصفوفة: `clsA arr[] = { clsA(1), clsA(2), clsA(3) };`.
- حل إشكالية إنشاء مصفوفات من كلاسات لا تحتوي على دالة بناء افتراضية.

### 💡 3. ملاحظات وتوجيهات عملية
- في C++ الحديثة يمكنك كتابة التهيئة بشكل أنيق ومختصر: `clsBox boxes[3] = { {10}, {20}, {30} };`.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: كيف يمكنك تهيئة مصفوفة من كائنات كلاس لا يمتلك كونسـتراكتور افتراضي؟**
- A) مستحيل في C++
- B) بتمرير استدعاءات الكونسـتراكتور بالمعاملات صراحة داخل قائمة تهيئة المصفوفة `{ cls(1), cls(2) }`
- C) بجعل حجم المصفوفة 0
- D) بتحويل الكلاس لـ struct

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) بتمرير استدعاءات الكونسـتراكتور بالمعاملات في قائمة التهيئة.`
</details>

<br>

#### **السؤال الثاني: ماذا يحدث إذا كتبت `clsBox boxes[3];` وكلاس `clsBox` يحتوي فقط على `clsBox(int val)`؟**
- A) يترجم بنجاح
- B) خطأ أثناء الترجمة (Compilation Error) لعدم وجود كونسـتراكتور افتراضي
- C) ينهار البرنامج أثناء التشغيل
- D) يملأ الكائنات بأصفار

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) خطأ في الترجمة لعدم وجود كونسـتراكتور افتراضي يلبي هذا الإنشاء.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
