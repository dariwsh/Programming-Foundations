# 21 - Abstract Classes, Pure Virtual Functions & Interfaces

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
Design strict contracts and interfaces in C++ using Pure Virtual Functions (`= 0`) and Abstract Classes that cannot be instantiated directly.

### 🔑 2. Key Concepts & Takeaways
- **Pure Virtual Function**: Declared with `= 0` (e.g. `virtual void Print() = 0;`).
- **Abstract Class**: Any class containing at least one pure virtual function.
- **Interface**: A purely abstract class with ONLY pure virtual functions and no data members.
- Derived concrete classes MUST implement all pure virtual functions.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

// Interface / Pure Abstract Class
class IPrintable {
public:
    virtual void Print() = 0; // Pure virtual function
    virtual ~IPrintable() {}
};

class User : public IPrintable {
public:
    void Print() override {
        cout << "User printable implementation\n";
    }
};

int main() {
    // IPrintable p; // ERROR: Cannot instantiate abstract class!
    User u;
    u.Print();
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Interfaces allow you to decouple software components by programming to an abstraction rather than a concrete implementation.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: How is a Pure Virtual Function declared in C++?**
- A) `virtual void Method() = 0;`
- B) `abstract void Method();`
- C) `interface Method();`
- D) `void Method() = null;`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) `virtual void Method() = 0;``
</details>

<br>

#### **Q2: Can you directly instantiate an object of an Abstract Class (e.g. `MyAbstractClass obj;`)?**
- A) Yes, without limitations
- B) No, abstract classes cannot be instantiated; only derived concrete classes can
- C) Yes, but only inside main
- D) Yes, if static

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, abstract classes cannot be instantiated; only derived concrete classes can.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 21 - الكلاسات المجردة والواجهات (Abstract Classes & Interfaces)

### 🎯 1. نظرة عامة والهدف
تصميم العقود البرمجية والواجهات (Interfaces) في C++ باستخدام الدوال الافتراضية النقية (`= 0`) والكلاسات المجردة (Abstract Classes) التي لا يمكن إنشاء كائنات منها مباشرة.

### 🔑 2. المفاهيم الأساسية والفوائد
- **الدالة الافتراضية النقية (Pure Virtual)**: تُعرف بصيغة `= 0` ولا تملك جسماً في الكلاس الأساسي.
- **الكلاس المجرد (Abstract Class)**: أي كلاس يحتوي على دالة نقية واحدة على الأقل (لا يمكن عمل `new` منه).
- **الواجهة (Interface)**: كلاس مجرد بالكامل يحتوي فقط على دوال نقية بدون متغيرات.
- الكلاسات المشتقة ملزمة برمجياً بتنفيذ كل الدوال النقية لتتمكن من إنشاء كائنات منها.

### 💡 3. ملاحظات وتوجيهات عملية
- الواجهات تمكنك من فصل المكونات وبناء برمجيات تعتمد على العقود (Contracts) بدلاً من الاعتماد على التنفيذ المباشر.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: كيف يتم الإعلان عن دالة افتراضية نقية (Pure Virtual Function) في C++؟**
- A) `virtual void Method() = 0;`
- B) `abstract void Method();`
- C) `interface Method();`
- D) `void Method() = null;`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) `virtual void Method() = 0;` بوضع `= 0` في نهايتها.`
</details>

<br>

#### **السؤال الثاني: هل يمكن إنشاء كائن مباشر من كلاس مجرد (Abstract Class)؟**
- A) نعم بدون أي قيود
- B) لا، الكلاس المجرد لا يمكن إنشاء كائنات منه ويجب وراثته وتطبيق دواله أولاً
- C) نعم داخل main فقط
- D) نعم إذا كان static

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، الكلاس المجرد يمثل قالباً غير مكتمل ولا يُسمح بإنشاء كائنات منه مباشرة.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
