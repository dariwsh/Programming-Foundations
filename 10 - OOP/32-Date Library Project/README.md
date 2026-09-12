# 32 - Project: Comprehensive OOP Date Library (`clsDate`)

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
An enterprise-grade Date calculation library handling leap years, days in months, calendar generation, business day calculations, date addition/subtraction, comparisons, and formatting.

### 🔑 2. Key Concepts & Takeaways
- Leap Year algorithms & Day-of-Week calculations.
- Calendar printing (Month / Year).
- Date diffing, age calculation, business day counters, and formatters.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
#include "clsDate.h"
using namespace std;

int main() {
    clsDate date1; // Current system date
    date1.Print();

    clsDate date2(31, 12, 2026);
    cout << "Is Leap Year: " << (date2.isLeapYear() ? "Yes" : "No") << "\n";
    cout << "Days Until Year End: " << clsDate::GetDifferenceInDays(date1, date2) << "\n";

    date1.AddDays(10);
    cout << "Date + 10 Days: ";
    date1.Print();
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- `clsDate` handles all corner cases: month boundaries, leap years, and calendar overflows smoothly.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the condition for a year to be a Leap Year?**
- A) Divisible by 4 and (not divisible by 100 OR divisible by 400)
- B) Any odd year
- C) Divisible by 10 only
- D) Divisible by 5

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Divisible by 4 and (not divisible by 100 OR divisible by 400).`
</details>

<br>

#### **Q2: What system header is utilized by `clsDate` to extract local system time?**
- A) `<windows.h>` only
- B) `<ctime>` (or `<time.h>`)
- C) `<cmath>`
- D) `<fstream>`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `<ctime>` (or `<time.h>`).`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 32 - مشروع: مكتبة التواريخ والحسابات الزمنية الشاملة (clsDate)

### 🎯 1. نظرة عامة والهدف
مشروع هندسي متكامل لبناء مكتبة التواريخ `clsDate`: حساب السنوات الكبيسة، توليد التقويم الشهري والسنوي، حساب أيام العمل، الفروق بين التواريخ، وإضافة وطرح الأيام.

### 🔑 2. المفاهيم الأساسية والفوائد
- خوارزميات فحص السنوات الكبيسة وحساب أسماء أيام الأسبوع رياضياً.
- طباعة التقويم الشهري والسنوي بدقة.
- حساب الفوارق الزمنية بين تاريخين، حساب العمر، وأيام العمل الرسمية وتنسيق التاريخ.

### 💡 3. ملاحظات وتوجيهات عملية
- مكتبة `clsDate` تعالج كافة الحالات الخاصة: نهايات الأشهر، السنوات الكبيسة، وتغيرات الفصول بدقة تامة.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هي المعادلة الرياضية الصحيحة للتحقق من كون السنة كبيسة (Leap Year)؟**
- A) تقبل القسمة على 4 و (لا تقبل القسمة على 100 أو تقبل القسمة على 400)
- B) أي سنة فردية
- C) تقبل القسمة على 10 فقط
- D) تقبل القسمة على 5

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) `(Year % 4 == 0 && Year % 100 != 0) || (Year % 400 == 0)`.`
</details>

<br>

#### **السؤال الثاني: ما هي المكتبة القياسية المستخدمة في `clsDate` لاستخراج الوقت والتاريخ الحالي للجهاز؟**
- A) `<windows.h>` فقط
- B) `<ctime>` (أو `<time.h>`)
- C) `<cmath>`
- D) `<fstream>`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) مكتبة الوقت القياسية `<ctime>`.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
