# 12 - Employee Exercise: Domain Modeling

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
Expanding domain modeling by designing a dedicated `clsEmployee` class managing salaries, department titles, and professional info.

### 🔑 2. Key Concepts & Takeaways
- Managing financial attributes (`Salary`).
- Organizing department and job title strings.
- Precursor to understanding why Inheritance is needed to avoid code duplication with `Person`.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsEmployee {
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Title;
    string _Department;
    float _Salary;

public:
    clsEmployee(int id, string fName, string lName, string title, string dept, float salary) {
        _ID = id;
        _FirstName = fName;
        _LastName = lName;
        _Title = title;
        _Department = dept;
        _Salary = salary;
    }

    void PrintEmployee() {
        cout << "Employee: " << _FirstName << " " << _LastName << " [" << _Title << "]\n";
        cout << "Dept    : " << _Department << " | Salary: $" << _Salary << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Notice how `clsPerson` and `clsEmployee` share names and IDs. This code redundancy is elegantly resolved in the next lesson: Inheritance!

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What OOP issue becomes apparent when creating `Person` and `Employee` as separate, unrelated classes?**
- A) Compiler memory leaks
- B) Code duplication (Violating the DRY - Don't Repeat Yourself principle)
- C) Inability to use integers
- D) Syntax errors in C++

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Code duplication (Violating the DRY - Don't Repeat Yourself principle).`
</details>

<br>

#### **Q2: What is the best OOP solution to avoid duplicating person fields in employee classes?**
- A) Inheritance (`clsEmployee` inherits from `clsPerson`)
- B) Copy and paste code in every file
- C) Use macros only
- D) Delete the person class

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Inheritance (`clsEmployee` inherits from `clsPerson`).`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 12 - تمرين كلاس الموظف (Employee Exercise)

### 🎯 1. نظرة عامة والهدف
التوسع في النمذجة البرمجية عبر تصميم كلاس الموظف `clsEmployee` لإدارة الرواتب، المسميات الوظيفية، والأقسام وطباعة بيانات الموظف.

### 🔑 2. المفاهيم الأساسية والفوائد
- إدارة البيانات المالية كـ `Salary`.
- تنظيم معلومات القسم والمسمى الوظيفي.
- التمهيد لفهم أهمية الوراثة (Inheritance) لتجنب تكرار الكود مع كلاس الشخص.

### 💡 3. ملاحظات وتوجيهات عملية
- لاحظ تكرار بيانات الاسم والمعرف بين الشخص والموظف، وهذا التكرار هو السبب الرئيسي لظهور مفهوم الوراثة (Inheritance).

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هي المشكلة البرمجية التي تظهر عند تكرار نفس خصائص الشخص داخل كلاس الموظف ككلاسين منفصلين؟**
- A) تسريب في الذاكرة
- B) تكرار الكود وانتهاك مبدأ DRY (Don't Repeat Yourself)
- C) عدم القدرة على استخدام الأرقام
- D) أخطاء نحوية

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) تكرار الكود (Code Duplication) وصعوبة صيانته، وهو ما تحله الوراثة.`
</details>

<br>

#### **السؤال الثاني: ما هو أفضل حل في البرمجة كائنية التوجه لتفادي تكرار بيانات الشخص في الموظف؟**
- A) الوراثة (Inheritance) بجعل `clsEmployee` يرث من `clsPerson`
- B) النسخ واللصق في كل ملف
- C) استخدام الماكروز فقط
- D) حذف كلاس الشخص

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) استخدام مفهوم الوراثة (Inheritance).`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
