# 15 - Function Overriding

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
Function Overriding occurs when a derived class defines a function with the exact same name, return type, and signature as a function in the base class to provide its own specialized behavior.

### 🔑 2. Key Concepts & Takeaways
- Replaces/hides base class behavior for derived objects.
- Calling base version: `BaseClass::MethodName()`.
- Overriding vs Overloading: Overriding uses the exact same signature in inheritance; overloading uses different parameters in the same scope.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsPerson {
public:
    void Print() {
        cout << "Printing Person details...\n";
    }
};

class clsEmployee : public clsPerson {
public:
    // Overriding Print()
    void Print() {
        clsPerson::Print(); // Call Base version
        cout << "Printing Employee specific details...\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- You can reuse the base implementation by calling `Base::Method()` inside the derived overriding method.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is required for a method to override a base method?**
- A) Same method name and exact same parameter signature in a derived class
- B) Completely different parameter types
- C) It must be static
- D) Different number of arguments

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Same method name and exact same parameter signature in a derived class.`
</details>

<br>

#### **Q2: How can an overridden derived function explicitly call its parent's version of the function?**
- A) `super.Function();`
- B) `BaseClassName::Function();`
- C) `this->Base->Function();`
- D) It is impossible in C++

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `BaseClassName::Function();` using the scope resolution operator.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 15 - إعادة تعريف الدوال (Function Overriding)

### 🎯 1. نظرة عامة والهدف
إعادة تعريف الدوال (Function Overriding) تحدث عندما يقوم الكلاس الابن بتعريف دالة بنفس الاسم والنوع والمعاملات الموجودة في الأب لتقديم سلوك مخصص للابن.

### 🔑 2. المفاهيم الأساسية والفوائد
- يستبدل سلوك الأب بالسلوك الجديد الخاص بالابن.
- لاستدعاء نسخة الأب من داخل الابن: `BaseClass::MethodName()`.
- الفرق بين Overriding و Overloading: الأول يكون بنفس التوقيع بين الأب والابن، بينما الثاني يكون باختلاف المعاملات في نفس النطاق.

### 💡 3. ملاحظات وتوجيهات عملية
- يمكنك استغلال كود الأب داخل الدالة الجديدة عبر استدعاء `Base::Method()` لمنع تكرار منطق الطباعة الأساسي.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو الشرط الأساسي لتعتبر الدالة Overriding لدالة في الكلاس الأب؟**
- A) أن تكون في الكلاس الابن وبنفس الاسم ونفس المعاملات ونفس التوقيع تماماً
- B) أن تختلف أنواع المعاملات كلياً
- C) أن تكون الدالة static
- D) أن يختلف عدد المعاملات

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) نفس الاسم ونفس توقيع المعاملات بالضبط داخل الكلاس المشتق.`
</details>

<br>

#### **السؤال الثاني: كيف تستدعي دالة الأب الأصلية من داخل الدالة التي قامت بعمل Override في الابن؟**
- A) `super.Function();`
- B) `BaseClassName::Function();` باستخدام اسم كلاس الأب ومعامل النطاق `::`
- C) `this->Base->Function();`
- D) مستحيل في C++

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `BaseClassName::Function();` باستخدام اسم الكلاس الأب ونقطتي النطاق.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
