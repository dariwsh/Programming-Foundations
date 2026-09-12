# 16 - OOP Practice: Developer & Inheritance Homework

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
Building multi-level inheritance hierarchies: `clsPerson` -> `clsEmployee` -> `clsDeveloper`, handling domain attributes like Main Programming Language.

### 🔑 2. Key Concepts & Takeaways
- Multi-level inheritance flow.
- Constructor forwarding across 3 tiers.
- Clean encapsulation and polymorphic data representation.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsDeveloper : public clsEmployee {
private:
    string _MainProgrammingLanguage;

public:
    clsDeveloper(int id, string fName, string lName, string email, string phone, 
                 string title, string dept, float salary, string mainLang)
        : clsEmployee(id, fName, lName, email, phone, title, dept, salary),
          _MainProgrammingLanguage(mainLang) {}

    void Print() {
        clsEmployee::Print();
        cout << "Main Language: " << _MainProgrammingLanguage << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Multi-level inheritance enables clean domain specialization without duplicating any personal or employment details.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: In a multi-level hierarchy (Person -> Employee -> Developer), what constructor executes FIRST?**
- A) Developer
- B) Employee
- C) Person
- D) Destructor

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `C) Person - The root base class constructor always executes first.`
</details>

<br>

#### **Q2: Does `clsDeveloper` have access to public methods defined in `clsPerson`?**
- A) Yes, via transitive public inheritance
- B) No, inheritance only goes one level deep
- C) Only if redefined
- D) Only in main()

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Yes, via transitive public inheritance.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 16 - تمرين تطبيقي وواجب (Developer & Inheritance)

### 🎯 1. نظرة عامة والهدف
بناء تسلسل وراثة متعدد المستويات (Multi-level Inheritance): من `clsPerson` إلى `clsEmployee` وصولاً إلى `clsDeveloper`، مع إضافة خصائص متخصصة مثل لغة البرمجة الأساسية.

### 🔑 2. المفاهيم الأساسية والفوائد
- الوراثة متعددة المستويات.
- تمرير المعاملات وبناء الكائنات عبر 3 طبقات متتالية.
- تطبيق نظيف للتغليف وطباعة البطاقات التعريفية المتكاملة.

### 💡 3. ملاحظات وتوجيهات عملية
- الوراثة متعددة الطبقات تتيح لك تخصيص الكائنات المعقدة بدقة متناهية دون كتابة سطر واحد مكرر.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: في تسلسل الوراثة (Person -> Employee -> Developer)، أي دالة بناء تعمل أولاً في البداية؟**
- A) Developer
- B) Employee
- C) Person
- D) Destructor

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `C) Person - كونسـتراكتور الجذر الأساسي للأب يبدأ العمل أولاً دائماً.`
</details>

<br>

#### **السؤال الثاني: هل يمتلك كلاس `clsDeveloper` صلاحية الوصول للدوال العامة الموجودة في الجد `clsPerson`؟**
- A) نعم، بفضل الوراثة العامة المتتالية
- B) لا، الوراثة تكون لمستوى واحد فقط
- C) فقط إذا تم إعادة كتابتها
- D) في دالة main فقط

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) نعم، الوراثة تنقل الخصائص والوظائف العامة عبر كل المستويات المتسلسلة.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
