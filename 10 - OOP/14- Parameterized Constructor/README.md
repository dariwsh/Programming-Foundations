# 14 - Parameterized Constructor in Inheritance

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
Mastering constructor chaining: passing initialization parameters from the derived class constructor up to the base class constructor.

### 🔑 2. Key Concepts & Takeaways
- Execution Order: Base constructor runs FIRST, then Derived constructor.
- Syntax: `clsDerived(...) : clsBase(param1, param2) { ... }`.
- Ensures proper initialization of base fields before derived logic executes.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsPerson {
private:
    int _ID;
    string _Name;

public:
    clsPerson(int id, string name) : _ID(id), _Name(name) {
        cout << "Base clsPerson Constructor\n";
    }
};

class clsEmployee : public clsPerson {
private:
    float _Salary;

public:
    // Passing ID and Name to clsPerson constructor
    clsEmployee(int id, string name, float salary) 
        : clsPerson(id, name), _Salary(salary) {
        cout << "Derived clsEmployee Constructor\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Failing to invoke a base constructor with arguments will cause compilation errors if the base has no default constructor.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the order of constructor execution when instantiating a derived class?**
- A) Derived first, then Base
- B) Base constructor first, then Derived constructor
- C) Both run concurrently in parallel
- D) Only the Derived constructor executes

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Base constructor first, then Derived constructor.`
</details>

<br>

#### **Q2: How does a derived constructor forward arguments to its base constructor?**
- A) By calling `base.Constructor()` inside the body
- B) Using the constructor initialization list (`: BaseClass(args)`)
- C) Via global variables
- D) Through pointer casting in main()

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Using the constructor initialization list (`: BaseClass(args)`).`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 14 - دوال البناء بالمعاملات مع الوراثة (Constructors in Inheritance)

### 🎯 1. نظرة عامة والهدف
فهم كيفية تمرير القيم والمعاملات من دالة بناء الكلاس الابن (Derived Class) إلى دالة بناء الكلاس الأب (Base Class) باستخدام قائمة التهيئة (Initializer List).

### 🔑 2. المفاهيم الأساسية والفوائد
- ترتيب التنفيذ: يتم تنفيذ كونسـتراكتور الأب أولاً، ثم كونسـتراكتور الابن.
- الصيغة: `clsDerived(...) : clsBase(arg1, arg2) { ... }`.
- تضمن تهيئة حقول الأب الأساسية قبل بدء عمل الابن.

### 💡 3. ملاحظات وتوجيهات عملية
- إذا كان الكلاس الأب يحتوي فقط على كونسـتراكتور بمعاملات، يجب على الابن استدعاء كونسـتراكتور الأب في قائمة التهيئة وإلا سيعترض المترجم.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو ترتيب تنفيذ دوال البناء عند إنشاء كائن من الكلاس المشتق؟**
- A) الابن أولاً ثم الأب
- B) كونسـتراكتور الأب أولاً، ثم كونسـتراكتور الابن
- C) يعملان معاً بالتوازي
- D) يعمل الابن فقط ولا يعمل الأب

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) يتم تنفيذ كونسـتراكتور الأب أولاً لبناء الأساس، ثم كونسـتراكتور الابن.`
</details>

<br>

#### **السؤال الثاني: كيف يمرر كونسـتراكتور الابن المعاملات إلى كونسـتراكتور الأب؟**
- A) عبر استدعائه يدوياً داخل جسم الدالة
- B) باستخدام قائمة التهيئة (Member Initializer List) مثل `: BaseClass(args)`
- C) عبر متغيرات عامة Global
- D) عبر تحويل المؤشرات في main

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) باستخدام قائمة التهيئة `: BaseClass(args)`.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
