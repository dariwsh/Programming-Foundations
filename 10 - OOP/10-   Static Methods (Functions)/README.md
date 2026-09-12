# 10 - Static Methods (Functions)

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
Static methods are utility functions associated with the class itself rather than instances. They can be invoked without creating an object.

### 🔑 2. Key Concepts & Takeaways
- Can be called using `ClassName::MethodName()`.
- Do NOT have access to the `this` pointer or non-static members.
- Can ONLY access static data members or other static methods directly.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class MathHelper {
public:
    static int Add(int a, int b) {
        return a + b;
    }

    static double CircleArea(double radius) {
        return 3.14159 * radius * radius;
    }
};

int main() {
    // Calling without instantiating any object
    cout << "Sum: " << MathHelper::Add(15, 25) << "\n";
    cout << "Area: " << MathHelper::CircleArea(5) << "\n";
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Ideal for pure utility libraries (Math, String formatting, Date converters) that do not depend on object state.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Why can't a static method access non-static class members directly?**
- A) Because non-static members require a specific object instance (and `this` pointer) which does not exist in static context
- B) Because static methods run in a different thread
- C) Because non-static variables are read-only
- D) Because static methods cannot return values

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Because non-static members require a specific object instance (and `this` pointer) which does not exist in static context.`
</details>

<br>

#### **Q2: How do you call a public static function `PrintBanner()` from class `App`?**
- A) `App->PrintBanner();`
- B) `App::PrintBanner();`
- C) `call App.PrintBanner();`
- D) `import App::PrintBanner();`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `App::PrintBanner();``
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 10 - الدوال الثابتة (Static Methods)

### 🎯 1. نظرة عامة والهدف
الدوال الثابتة (Static Functions) هي دوال تابعة للكلاس نفسه وليس لكائن معين، ويمكن استدعاؤها مباشرة باسم الكلاس دون الحاجة لإنشاء كائن.

### 🔑 2. المفاهيم الأساسية والفوائد
- يتم استدعاؤها مباشرة باستخدام: `ClassName::MethodName()`.
- لا تملك مؤشر `this` ولا يمكنها الوصول للمتغيرات العادية غير الثابتة.
- يمكنها فقط التعامل المباشر مع المتغيرات والدوال الثابتة (Static).

### 💡 3. ملاحظات وتوجيهات عملية
- ممتازة جداً للدوال المساعدة والرياضية وتنسيق النصوص التي لا تعتمد على حالة كائن معين.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: لماذا لا تستطيع الدالة الثابتة (Static Method) الوصول للمتغيرات العادية مباشرة؟**
- A) لأن المتغيرات العادية تتطلب كائناً محدداً ومؤشر `this`، والدالة الثابتة تعمل على مستوى الكلاس بدون كائن محدد
- B) لأن الدوال الثابتة تعمل في Thread منفصل
- C) لأن المتغيرات العادية للقراءة فقط
- D) لأن الدوال الثابتة لا ترجع قيماً

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) لأنها لا ترتبط بكائن معين ولا تملك مؤشر `this` المرجعي.`
</details>

<br>

#### **السؤال الثاني: كيف تستدعي دالة ثابتة عامة باسم `PrintBanner()` من كلاس `App`؟**
- A) `App->PrintBanner();`
- B) `App::PrintBanner();`
- C) `call App.PrintBanner();`
- D) `import App::PrintBanner();`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `App::PrintBanner();` باستخدام معامل النطاق `::`.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
