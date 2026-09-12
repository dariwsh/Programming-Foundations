# 26 - Separate Classes into Header Libraries (`.h`)

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
Master professional software project structuring by separating class declarations and implementations into dedicated header files (`clsPerson.h`, `clsEmployee.h`).

### 🔑 2. Key Concepts & Takeaways
- **Header Files (`.h`)**: Cleanly encapsulate class models.
- **Include Guards (`#pragma once`)**: Prevent multiple definition collisions.
- Modular compilation and maintenance.

### 💻 3. Code Implementation & Example
```cpp
// clsPerson.h
#pragma once
#include <iostream>
using namespace std;

class clsPerson {
    // Class definition here
};

// main.cpp
#include <iostream>
#include "clsPerson.h"
#include "clsEmployee.h"

int main() {
    clsPerson person;
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Always use `#pragma once` at the top of every header file in modern C++.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the purpose of `#pragma once` at the top of a header file?**
- A) To ensure the header is compiled and included only ONCE per translation unit, preventing duplicate definition errors
- B) To delete unused variables
- C) To make all functions inline automatically
- D) To speed up hard disk reading

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) To ensure the header is compiled and included only ONCE per translation unit, preventing duplicate definition errors.`
</details>

<br>

#### **Q2: How do you include a custom local header file named `clsEmployee.h` in your project?**
- A) `#include <clsEmployee.h>`
- B) `#include "clsEmployee.h"`
- C) `import clsEmployee;`
- D) `using clsEmployee.h;`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `#include "clsEmployee.h"` (Double quotes search the current project directory first).`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 26 - فصل الكلاسات في مكتبات وملفات هيدر مستقلة (.h)

### 🎯 1. نظرة عامة والهدف
احتراف تنظيم المشاريع البرمجية الحقيقية عبر فصل الكلاسات في ملفات هيدر مستقلة (`clsPerson.h`, `clsEmployee.h`) بدلاً من كتابة كل شيء في ملف واحد.

### 🔑 2. المفاهيم الأساسية والفوائد
- **ملفات الهيدر (`.h`)**: تنظيم وفصل كل كلاس في ملف خاص به.
- **حماية التضمين (`#pragma once`)**: لمنع تكرار تضمين الملف وحماية المشروع من أخطاء إعادة التعريف.
- تسهيل صيانة الأكواد والعمل الجماعي في المشاريع الضخمة.

### 💡 3. ملاحظات وتوجيهات عملية
- احرص دائماً على كتابة `#pragma once` في السطر الأول من كل ملف هيدر لمنع تكرار التضمين.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو الغرض من كتابة `#pragma once` في بداية ملف الهيدر؟**
- A) ضمان تضمين الملف مرة واحدة فقط ومنع أخطاء تكرار التعريف (Redefinition Errors)
- B) حذف المتغيرات غير المستخدمة
- C) جعل كل الدوال inline
- D) تسريع القراءة من القرص الصلب

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) حماية الملف من التضمين المتعدد وتفادي أخطاء تكرار التعريف.`
</details>

<br>

#### **السؤال الثاني: كيف تقوم بتضمين ملف هيدر محلي خاص بمشروعك باسم `clsEmployee.h`؟**
- A) `#include <clsEmployee.h>`
- B) `#include "clsEmployee.h"` باستخدام علامتي التنصيص المزدوجة
- C) `import clsEmployee;`
- D) `using clsEmployee.h;`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `#include "clsEmployee.h"` بعلامات التنصيص للبحث في مجلد المشروع المحلي أولاً.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
