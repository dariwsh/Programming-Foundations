# 28 - Objects and Vectors (`std::vector<Class>`)

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
Storing, iterating, managing, and manipulating collections of objects dynamically using standard C++ vectors (`std::vector`).

### 🔑 2. Key Concepts & Takeaways
- Dynamic resizing and memory management.
- Using `push_back()` or `emplace_back()`.
- Iterating with range-based for loops: `for (const auto &obj : vec)`.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
#include <vector>
using namespace std;

class clsEmployee {
public:
    string Name;
    float Salary;

    clsEmployee(string name, float salary) : Name(name), Salary(salary) {}

    void Print() const {
        cout << Name << " - $" << Salary << "\n";
    }
};

int main() {
    vector<clsEmployee> employees;
    employees.push_back(clsEmployee("Ahmed", 9000));
    employees.push_back(clsEmployee("Omar", 8500));

    for (const clsEmployee &emp : employees) {
        emp.Print();
    }
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Use `emplace_back` to construct objects in-place inside vector memory without extra copy steps.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the benefit of `std::vector<clsEmployee>` over a raw array `clsEmployee[10]`?**
- A) Dynamic automatic resizing and standard algorithm support
- B) Vectors do not use RAM
- C) Arrays can only store numbers
- D) Vectors never need constructors

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Dynamic automatic resizing and standard algorithm support.`
</details>

<br>

#### **Q2: How should you iterate over a vector of objects when you only need to read data?**
- A) `for (auto obj : vec)`
- B) `for (const auto &obj : vec)`
- C) `while (vec.size() > 0)`
- D) `goto loop;`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `for (const auto &obj : vec)` (Iterates by const reference, avoiding copying each element).`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 28 - الكائنات مع المتجهات والديناميكية (Objects & Vectors)

### 🎯 1. نظرة عامة والهدف
تخزين وإدارة مجموعات الكائنات والتعامل معها ديناميكياً باستخدام متجهات لغة C++ القياسية (`std::vector`).

### 🔑 2. المفاهيم الأساسية والفوائد
- التحجيم التلقائي وإدارة الذاكرة المرنة دون تحديد حجم ثابت.
- إضافة الكائنات عبر `push_back()` أو `emplace_back()`.
- المرور على الكائنات باستخدام الحلقات الحديثة: `for (const auto &obj : vec)`.

### 💡 3. ملاحظات وتوجيهات عملية
- استخدم `emplace_back` لإنشاء الكائنات مباشرة في مكانها داخل المتجه لتوفير خطوة النسخ.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هي الميزة الكبرى لاستخدام `std::vector<clsEmployee>` مقارنة بالمصفوفة الثابتة `clsEmployee[10]`؟**
- A) التمدد والتحجيم التلقائي الديناميكي ودعم دوال ومكتبات C++ القياسية
- B) الـ Vector لا يستهلك ذاكرة RAM
- C) المصفوفات تخزن أرقاماً فقط
- D) الـ Vector لا يحتاج كونسـتراكتور

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) إمكانية التوسع التلقائي وإدارة الذاكرة بمرونة وأمان عاليين.`
</details>

<br>

#### **السؤال الثاني: كيف تدور على عناصر متجه الكائنات بأعلى كفاءة عند الرغبة في القراءة فقط؟**
- A) `for (auto obj : vec)` (يقوم بنسخ كل كائن)
- B) `for (const auto &obj : vec)` (يمر بالمرجع الثابت بدون نسخ نهائياً)
- C) `while (vec.size() > 0)`
- D) استخدام goto

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `for (const auto &obj : vec)` للمرور بالمرجع الثابت بدون نسخ أي كائن.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
