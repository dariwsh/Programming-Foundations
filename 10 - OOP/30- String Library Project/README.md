# 30 - Project: Full OOP String Utility Library (`clsString`)

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
A production-grade Object-Oriented String manipulation library wrapping dozens of static and object-level string utilities (split, join, trim, case conversion, word count).

### 🔑 2. Key Concepts & Takeaways
- Dual API design: Static utility methods alongside instance-level methods.
- Word tokenization, splitting, formatting, reversing, and trimming.
- Reusable standalone library component.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
#include <vector>
#include "clsString.h"
using namespace std;

int main() {
    clsString str1("   ahmed ali darwish   ");

    cout << "Original   : [" << str1.Value << "]\n";
    str1.Trim();
    cout << "Trimmed    : [" << str1.Value << "]\n";
    str1.UpperAllString();
    cout << "Uppercase  : [" << str1.Value << "]\n";
    cout << "Words Count: " << str1.CountWords() << "\n";

    // Using static utility directly
    cout << "Static Lower: " << clsString::LowerAllString("HELLO WORLD") << "\n";
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Building a dual-mode class (Static + Instance) provides developers with ultimate flexibility.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the architectural advantage of providing both static and non-static versions of `Trim()` in `clsString`?**
- A) It makes the file smaller
- B) It allows quick transformation of raw strings without creating objects while also supporting object-oriented workflows
- C) It deletes whitespace in RAM
- D) Static methods run in the GPU

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) It allows quick transformation of raw strings without creating objects while also supporting object-oriented workflows.`
</details>

<br>

#### **Q2: How does `clsString::Split()` typically store and return tokens in C++?**
- A) As a raw char pointer
- B) Inside a `std::vector<string>`
- C) Inside a global text file
- D) In the console buffer

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Inside a `std::vector<string>`.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 30 - مشروع: مكتبة معالجة النصوص البرمجية الكاملة (clsString)

### 🎯 1. نظرة عامة والهدف
مشروع برمجي متكامل لبناء مكتبة معالجة نصوص كائنية التوجه `clsString` تحتوي على عشرات الدوال الثابتة والعادية (التقطيع، الدمج، التشذيب، عد الكلمات، تغيير حالة الأحرف).

### 🔑 2. المفاهيم الأساسية والفوائد
- تصميم واجهة برمجية مزدوجة: دوال ثابتة (Static) للاستخدام السريع ودوال على مستوى الكائن (Instance).
- تقطيع النصوص (Split)، دمجها (Join)، تنظيف الفراغات (Trim)، وعكس الكلمات.
- مكتبة مستقلة قابلة لإعادة الاستخدام في كافة المشاريع اللاحقة.

### 💡 3. ملاحظات وتوجيهات عملية
- دعم الدوال الثابتة والدوال العادية في كلاس النصوص يمنح المطور مرونة استثنائية في الاستخدام.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هي الميزة المعمارية لتوفير نسخ Static ونسخ عادية لنفس الدالة في `clsString`؟**
- A) جعل حجم الملف أصغر
- B) إمكانية معالجة النصوص مباشرة دون حجز كائنات، ودعم العمل البرمجي الكائني المباشر عند الحاجة
- C) مسح الفراغات من الذاكرة
- D) تشغيل الدوال على كارت الشاشة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) تتيح المرونة الكاملة: إما معالجة نصوص مباشرة وسريعة (Static) أو استخدام الكائن وتعديل قيمته داخلياً.`
</details>

<br>

#### **السؤال الثاني: كيف تقوم دالة `clsString::Split()` بتجميع الكلمات الناتجة عن التقطيع وإرجاعها؟**
- A) كمؤشر char خام
- B) داخل متجه نصوص ديناميكي `std::vector<string>`
- C) في ملف خارجي
- D) في شاشة الكونسول مباشرة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) داخل `std::vector<string>` لتسهيل التعامل مع الكلمات الناتجة.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
