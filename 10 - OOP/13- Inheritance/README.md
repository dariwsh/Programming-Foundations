# 13 - Inheritance Basics

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
Inheritance allows a new class (Derived/Child) to inherit attributes and methods from an existing class (Base/Parent), promoting maximum code reusability.

### 🔑 2. Key Concepts & Takeaways
- **Base Class**: The parent class providing common functionality.
- **Derived Class**: The child class inheriting from Base and extending it.
- **Syntax**: `class Derived : public Base { ... };`

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsPerson {
public:
    string FirstName;
    string LastName;

    void PrintFullName() {
        cout << FirstName << " " << LastName << "\n";
    }
};

// clsEmployee inherits from clsPerson
class clsEmployee : public clsPerson {
public:
    string Title;
    float Salary;
};

int main() {
    clsEmployee emp;
    emp.FirstName = "Ahmed"; // Inherited!
    emp.LastName = "Darwish"; // Inherited!
    emp.Title = "Software Engineer";
    emp.Salary = 9500.0f;

    emp.PrintFullName(); // Inherited method!
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Always use `public` inheritance when modeling an "IS-A" relationship (e.g. Employee *is a* Person).

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What type of real-world relationship does Inheritance represent?**
- A) HAS-A relationship
- B) IS-A relationship
- C) USES-A relationship
- D) CREATES-A relationship

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) IS-A relationship (e.g., Dog IS-A Animal, Employee IS-A Person).`
</details>

<br>

#### **Q2: In `class clsB : public clsA`, which class is the derived class?**
- A) `clsA`
- B) `clsB`
- C) Both
- D) Neither

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `clsB` is the derived (child) class.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 13 - أساسيات الوراثة (Inheritance)

### 🎯 1. نظرة عامة والهدف
الوراثة (Inheritance) هي ركيزة أساسية تتيح لكلاس جديد (الابن - Derived) أن يرث صفات ووظائف كلاس موجود مسبقاً (الأب - Base)، مما يحقق إعادة استخدام الكود.

### 🔑 2. المفاهيم الأساسية والفوائد
- **الكلاس الأساسي (Base Class)**: الكلاس الأب الذي يحتوي على الخصائص المشتركة.
- **الكلاس المشتق (Derived Class)**: الكلاس الابن الذي يرث ويبني فوق الأب.
- **صيغة الوراثة**: `class Derived : public Base { ... };`

### 💡 3. ملاحظات وتوجيهات عملية
- تُستخدم الوراثة العامة `public` عندما تكون العلاقة الحقيقية هي "هو نوع من" (IS-A) مثل: الموظف هو شخص.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هي العلاقة الواقعية التي تمثلها الوراثة (Inheritance)؟**
- A) علاقة امتلاك (HAS-A)
- B) علاقة تبعية ونوعية (IS-A) كأن نقول: الموظف هو إنسان
- C) علاقة استخدام فقط (USES-A)
- D) علاقة إنشاء فقط

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) علاقة (IS-A) مثل: الموظف هو إنسان (Employee IS A Person).`
</details>

<br>

#### **السؤال الثاني: في الصيغة `class clsB : public clsA`، أي الكلاسات هو الكلاس المشتق (الابن)؟**
- A) `clsA`
- B) `clsB`
- C) كلاهما
- D) لا أحد منهما

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `clsB` هو الكلاس المشتق (الابن) الذي يرث من الأب `clsA`.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
