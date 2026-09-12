# 06 - Constructors

<div align="center">
  <h3>⚡ C++ Object-Oriented Programming Series ⚡</h3>
  <p>
    <a href="#english-version">
      <img src="https://img.shields.io/badge/Language-English-blue?style=for-the-badge&logo=googletranslate&logoColor=white" alt="English">
    </a>
    &nbsp;&nbsp;
    <a href="#arabic-version">
      <img src="https://img.shields.io/badge/اللغة-العربية-green?style=for-the-badge&logo=googletranslate&logoColor=white" alt="العربية">
    </a>
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
A Constructor is a special member function automatically called whenever an object of that class is created to initialize its state.

### 🔑 2. Key Concepts & Takeaways
- Same name as the class.
- No return type (not even `void`).
- Can have a default constructor or overloaded parameterized constructors.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Address {
private:
    string _city;
    string _country;

public:
    // Default Constructor
    Address() {
        _city = "Cairo";
        _country = "Egypt";
    }

    // Parameterized Constructor
    Address(string city, string country) {
        _city = city;
        _country = country;
    }

    void Print() {
        cout << _city << ", " << _country << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- If you do not define any constructor, C++ provides a default constructor automatically. Once you define a parameterized constructor, the default one is not generated unless explicitly declared.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the return type of a C++ constructor?**
- A) `int`
- B) `void`
- C) A pointer to the class
- D) Constructors have NO return type

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `D) Constructors have NO return type.`
</details>

<br>

#### **Q2: When is a constructor executed?**
- A) When the program finishes
- B) Automatically at the exact moment an object is instantiated
- C) Only when manually invoked via `obj.Constructor()`
- D) When compiling the header file

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Automatically at the exact moment an object is instantiated.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 06 - دوال البناء (Constructors)

### 🎯 1. نظرة عامة والهدف
دالة البناء (Constructor) هي دالة عضو خاصة يتم تنفيذها تلقائياً وبشكل فوري عند إنشاء كائن جديد من الكلاس لتهيئة قيمه وحجز موارده.

### 🔑 2. المفاهيم الأساسية والفوائد
- تحمل نفس اسم الكلاس تماماً.
- ليس لها أي نوع إرجاع إطلاقاً (ولا حتى `void`).
- يمكن عمل Default Constructor أو Parameterized Constructors متعدة التحميل (Overloading).

### 💡 3. ملاحظات وتوجيهات عملية
- إذا لم تكتب أي كونسـتراكتور، يوفر المترجم واحداً افتراضياً، أما إذا كتبت كونسـتراكتور بمعاملات، فإن المترجم يلغي الافتراضي ويجب كتابته يدوياً إن أردت استخدامه.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو نوع الإرجاع (Return Type) لدالة البناء (Constructor) في C++؟**
- A) `int`
- B) `void`
- C) مؤشر للكلاس
- D) ليس لها أي نوع إرجاع على الإطلاق

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `D) ليس لها أي نوع إرجاع على الإطلاق.`
</details>

<br>

#### **السؤال الثاني: متى يتم تنفيذ كود دالة البناء (Constructor)؟**
- A) عند انتهاء البرنامج فقط
- B) تلقائياً وفور إنشاء الكائن (Object Instantiation)
- C) عند استدعائها يدوياً فقط
- D) أثناء ترجمة ملف الهيدر

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) تلقائياً وفور لحظة إنشاء الكائن في الذاكرة.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
