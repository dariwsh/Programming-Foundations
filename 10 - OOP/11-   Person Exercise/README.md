# 11 - Person Exercise: Comprehensive OOP Practice

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
Building a full-fledged `clsPerson` class combining encapsulation, constructor initialization, email/phone management, and formatted card printing.

### 🔑 2. Key Concepts & Takeaways
- Integrated getters and setters.
- Parameterized initialization.
- Communication methods: sending SMS and email mock functions.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsPerson {
private:
    int _ID;
    string _FirstName;
    string _LastName;
    string _Email;
    string _Phone;

public:
    clsPerson(int id, string fName, string lName, string email, string phone) {
        _ID = id;
        _FirstName = fName;
        _LastName = lName;
        _Email = email;
        _Phone = phone;
    }

    int GetID() { return _ID; }
    string FullName() { return _FirstName + " " + _LastName; }

    void PrintInfo() {
        cout << "--- Contact Card ---\n";
        cout << "ID   : " << _ID << "\n";
        cout << "Name : " << FullName() << "\n";
        cout << "Email: " << _Email << "\n";
        cout << "Phone: " << _Phone << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Grouping real-world entity properties inside a unified class simplifies data handling across your entire software architecture.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the key advantage of encapsulating person data inside `clsPerson`?**
- A) Making the application run in the cloud automatically
- B) High cohesion and centralized validation of person-related state and logic
- C) Reducing screen resolution
- D) Avoiding the use of variables

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) High cohesion and centralized validation of person-related state and logic.`
</details>

<br>

#### **Q2: How should an ID usually be treated in `clsPerson` after creation?**
- A) Read-Only property (Getter without Setter)
- B) Public variable modifiable by any function
- C) Re-allocated on every function call
- D) Deleted immediately

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Read-Only property (Getter without Setter).`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 11 - تمرين كلاس الشخص (Person Exercise)

### 🎯 1. نظرة عامة والهدف
تطبيق عملي شامل لبناء كلاس `clsPerson` يجمع بين التغليف، ودوال البناء، وإدارة بيانات الاسم والبريد الإلكتروني ورقم الهاتف مع طباعة بطاقة تعريفية منسقة.

### 🔑 2. المفاهيم الأساسية والفوائد
- دمج دوال Get و Set بكفاءة.
- التهيئة عبر Parameterized Constructor.
- دوال التواصل: محاكاة إرسال بريد إلكتروني ورسائل نصية SMS.

### 💡 3. ملاحظات وتوجيهات عملية
- تجميع بيانات الكيان الحقيقي داخل كلاس واحد يسهل إدارة ونقل البيانات في أي مشروع كبير.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هي الفائدة الأساسية لتجميع بيانات الشخص داخل `clsPerson`؟**
- A) تشغيل البرنامج في السحابة تلقائياً
- B) تحقيق التماسك العالي (High Cohesion) والتحكم المركزي في صحة البيانات والعمليات
- C) تقليل استهلاك الشاشة
- D) إلغاء المتغيرات

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) تحقيق التماسك العالي وإدارة كافة العمليات المتعلقة بالشخص في مكان واحد.`
</details>

<br>

#### **السؤال الثاني: كيف يُفضل التعامل مع خاصية الرقم التعريفي ID في كلاس الشخص بعد إنشائه؟**
- A) كخاصية للقراءة فقط (Getter بدون Setter) لضمان عدم تغييره
- B) كمتغير عام يمكن لأي دالة تعديله
- C) إعادة حجز قيمته مع كل استدعاء
- D) حذفه من الذاكرة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) كخاصية للقراءة فقط لحمايته من التعديل العرضي.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
