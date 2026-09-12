# 24.1 - Practical Struct Inside Class Example

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
Hands-on implementation managing nested contact structures, addresses, and employee profiles inside a unified class model.

### 🔑 2. Key Concepts & Takeaways
- Separation of concern between identity data and address data.
- Passing structs to class setters and getters.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsPerson {
public:
    struct stContactInfo {
        string Email;
        string Phone;
    };

private:
    string _name;
    stContactInfo _contact;

public:
    clsPerson(string name, stContactInfo contact) : _name(name), _contact(contact) {}

    stContactInfo GetContact() { return _contact; }
};
```

### 💡 4. Important Notes & Best Practices
- Passing structs by `const` reference avoids unnecessary copying overhead for large nested structures.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the best practice for passing large structs into class methods?**
- A) Pass by value
- B) Pass by `const` reference (`const stData &data`)
- C) Convert to global string
- D) Pass as void pointer

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Pass by `const` reference (`const stData &data`).`
</details>

<br>

#### **Q2: Can a class member function return a struct defined within that class?**
- A) Yes
- B) No, C++ forbids returning structs
- C) Only if the struct has 1 variable
- D) Only in C

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Yes, class methods can freely return struct types.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 24.1 - مثال عملي تطبيقي على الهياكل داخل الكلاسات

### 🎯 1. نظرة عامة والهدف
تطبيق عملي متقدم على إدارة هياكل العناوين والاتصال داخل كلاس الموظف، مع توفير دوال تهيئة وعرض منظمة.

### 🔑 2. المفاهيم الأساسية والفوائد
- فصل المسؤوليات بين البيانات الشخصية وبيانات العنوان والاتصال.
- تمرير الهياكل (Structs) واسترجاعها عبر دوال الكلاس بكفاءة.

### 💡 3. ملاحظات وتوجيهات عملية
- يُفضل تمرير الـ structs بالمرجع الثابت `const &` لتفادي التكلفة العالية لنسخ البيانات الكبيرة.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هي أفضل ممارسة لتمرير الـ structs الكبيرة إلى دوال الكلاس؟**
- A) التمرير بالقيمة (By Value)
- B) التمرير بالمرجع الثابت (`const stData &data`) لتفادي النسخ غير الضروري
- C) تحويلها إلى نصوص عامة
- D) تمريرها كمؤشر void

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) التمرير بالمرجع الثابت (`const &`) لمنع النسخ الزائد وحماية البيانات من التعديل.`
</details>

<br>

#### **السؤال الثاني: هل يمكن لدالة داخل الكلاس أن تُرجع هيكلاً (Struct) معرّفاً داخل الكلاس؟**
- A) نعم بكل تأكيد
- B) لا، C++ تمنع إرجاع الـ structs
- C) فقط إذا كان الـ struct يحتوي على متغير واحد
- D) في لغة C فقط

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) نعم، يمكن إرجاع أي struct واستخدامه بشكل طبيعي.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
