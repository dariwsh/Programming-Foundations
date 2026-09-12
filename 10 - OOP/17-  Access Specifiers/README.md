# 17 - Inheritance Visibility Modes (Public, Protected, Private)

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
Deep dive into how the inheritance visibility specifier (`class B : mode A`) affects the access levels of inherited members in derived classes.

### 🔑 2. Key Concepts & Takeaways
- **Public Inheritance**: Public stays public, protected stays protected.
- **Protected Inheritance**: Public and protected members both become protected.
- **Private Inheritance**: Public and protected members both become private in the derived class.

### 💻 3. Code Implementation & Example
```cpp
class Base {
public: int x;
protected: int y;
private: int z; // Never inherited directly
};

class PubDerived : public Base {
    // x is public, y is protected
};

class ProtDerived : protected Base {
    // x is protected, y is protected
};

class PrivDerived : private Base {
    // x is private, y is private
};
```

### 💡 4. Important Notes & Best Practices
- In 95%+ of real-world C++ OOP projects, `public` inheritance is used. Private inheritance models "implemented-in-terms-of" rather than "IS-A".

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Under `private` inheritance, what does a `public` member in the Base class become in the Derived class?**
- A) Public
- B) Protected
- C) Private
- D) Static

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `C) Private - Under private inheritance, all inherited public/protected members become private in the child.`
</details>

<br>

#### **Q2: Can any type of inheritance give direct access to the Base class's `private` members?**
- A) Yes, public inheritance does
- B) Yes, protected inheritance does
- C) No, private members of the Base class are ALWAYS inaccessible directly by derived classes
- D) Yes, using friends

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `C) No, private members of the Base class are ALWAYS inaccessible directly by derived classes.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 17 - أوضاع وأنماط الوراثة (Public, Protected, Private)

### 🎯 1. نظرة عامة والهدف
شرح متعمق لكيفية تأثير نمط الوراثة (`public`, `protected`, `private`) على مستويات وصول وحجب الأعضاء الموروثة في الكلاسات المشتقة.

### 🔑 2. المفاهيم الأساسية والفوائد
- **الوراثة العامة (Public)**: العام يبقى عاماً، والمحمي يبقى محمياً.
- **الوراثة المحمية (Protected)**: يتحول العام والمحمي إلى محمي (Protected) في الابن.
- **الوراثة الخاصة (Private)**: يتحول العام والمحمي إلى خاص (Private) داخل الابن.

### 💡 3. ملاحظات وتوجيهات عملية
- في الغالبية العظمى من المشاريع العملية يتم استخدام الوراثة العامة `public`، بينما الوراثة الخاصة لها استخدامات نادرة كتقييد الواجهات.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: في حالة الوراثة الخاصة (`private Base`)، ماذا يصبح العضو الـ `public` في الكلاس المشتق؟**
- A) Public
- B) Protected
- C) Private
- D) Static

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `C) Private - تصبح كل العناصر الموروثة خاصة بالابن ولا يستطيع أحد الوصول إليها من الخارج.`
</details>

<br>

#### **السؤال الثاني: هل يمكن لأي نوع وراثة أن يتيح للكلاس الابن الوصول المباشر للمتغيرات الـ `private` في الأب؟**
- A) نعم في الوراثة العامة
- B) نعم في الوراثة المحمية
- C) لا، المتغيرات الخاصة في الأب لا يمكن للابن الوصول إليها مباشرة تحت أي وراثة
- D) نعم دائماً

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `C) لا، المتغيرات الخاصة (Private) تظل محجوبة عن الأبناء وتتطلب استخدام دوال أو تحويلها إلى Protected.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
