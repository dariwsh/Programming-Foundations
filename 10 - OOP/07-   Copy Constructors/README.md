# 07 - Copy Constructors

<div align="center">
  <h3>⚡ C++ Object-Oriented Programming Series ⚡</h3>
  <p align="center">
    <a href="#english-version">
      <img src="https://img.shields.io/badge/Language-English-blue?style=for-the-badge&logo=readme&logoColor=white" alt="English">
    </a>
    &nbsp;&nbsp;
    <a href="#arabic-version">
      <img src="https://img.shields.io/badge/Language-Arabic-green?style=for-the-badge&logo=readme&logoColor=white" alt="Arabic">
    </a>
  </p>
  <p align="center">
    <a href="#english-version">🇬🇧 <b>Switch to English</b></a>
    &nbsp;&nbsp;•&nbsp;&nbsp;
    <a href="#arabic-version">🇪🇬 <b>التبديل إلى النسخة العربية</b></a>
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

<span id="english-version"></span>

## 📘 Lesson Documentation (English)

### 🎯 1. Overview
A Copy Constructor initializes a new object by copying the data of an existing object of the same class.

### 🔑 2. Key Concepts & Takeaways
- **Signature**: `ClassName(const ClassName &source)`.
- **Pass by Reference**: Must take its parameter by reference `&` to prevent infinite recursive copying.
- **Shallow vs Deep Copy**: Essential when classes manage dynamic memory (heap).

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string Name;
    int Grade;

    // Parameterized Constructor
    Student(string name, int grade) : Name(name), Grade(grade) {}

    // User-Defined Copy Constructor
    Student(const Student &other) {
        Name = other.Name;
        Grade = other.Grade;
        cout << "Copy Constructor Called!\n";
    }
};

int main() {
    Student s1("Ahmed", 95);
    Student s2 = s1; // Calls Copy Constructor
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Always pass the copied object as a `const` reference to guarantee safety and avoid unwanted modifications.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Why MUST the parameter of a Copy Constructor be passed by reference (`&`)?**
- A) To increase font size
- B) To avoid infinite recursion caused by passing by value
- C) Because C++ does not allow values in classes
- D) To convert the object to static

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) To avoid infinite recursion caused by passing by value.`
</details>

<br>

#### **Q2: Which statement triggers the copy constructor?**
- A) `Student s2 = s1;`
- B) `Student s2; s2 = s1;`
- C) `Student s2();`
- D) `delete s1;`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) `Student s2 = s1;` - Initialization of a new object from an existing one triggers the copy constructor.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 07 - دالة البناء بالنسخ (Copy Constructors)

### 🎯 1. نظرة عامة والهدف
دالة البناء بالنسخ (Copy Constructor) تقوم بإنشاء كائن جديد كنسخة طبق الأصل من كائن موجود مسبقاً من نفس الكلاس.

### 🔑 2. المفاهيم الأساسية والفوائد
- **صيغة الدالة**: `ClassName(const ClassName &source)`.
- **التمرير بالمرجع (`&`)**: إلزامي لمنع حدوث استدعاء ذاتي لانهائي (Infinite Recursion).
- **النسخ السطحي والعميق (Shallow vs Deep Copy)**: مهم جداً عند التعامل مع المؤشرات والذاكرة الديناميكية.

### 💡 3. ملاحظات وتوجيهات عملية
- احرص على تمرير الكائن كـ `const Reference` لضمان عدم تعديل الكائن الأصلي بالخطأ.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: لماذا يجب تمرير معامل الـ Copy Constructor بالمرجع (By Reference `&`)؟**
- A) لتسريع الرسم على الشاشة
- B) لمنع الدخول في استدعاء لانهائي (Infinite Recursion) ينتج عن التمرير بالقيمة
- C) لأن C++ تمنع القيم في الكلاسات
- D) لتحويل الكائن إلى static

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لمنع الدخول في استدعاء متكرر لانهائي ناتج عن استدعاء دالة النسخ لتمرير القيمة.`
</details>

<br>

#### **السؤال الثاني: أي جملة من التالية تستدعي الـ Copy Constructor بشكل مباشر؟**
- A) `Student s2 = s1;`
- B) `Student s2; s2 = s1;` (هذه Assignment Operator وليست Constructor)
- C) `Student s2();`
- D) `delete s1;`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) `Student s2 = s1;` - لأنها تنشئ كائناً جديداً وتهيئه مباشرة من كائن آخر.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
