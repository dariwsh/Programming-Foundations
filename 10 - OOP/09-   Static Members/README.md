# 09 - Static Data Members

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
Static data members belong to the class itself rather than individual instances, shared uniformly across all objects of that class.

### 🔑 2. Key Concepts & Takeaways
- Shared memory: Modifying it in one object affects all other objects.
- Must be initialized outside the class body at file scope.
- Exists even if no objects of the class are instantiated.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Counter {
public:
    static int ObjectCount;

    Counter() {
        ObjectCount++;
    }
};

// Must initialize outside class
int Counter::ObjectCount = 0;

int main() {
    Counter c1, c2, c3;
    cout << "Total Instances: " << Counter::ObjectCount << "\n"; // Output: 3
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Use the scope resolution operator `ClassName::StaticVar` to access static variables clearly.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Where MUST a static member variable be initialized in C++?**
- A) Inside `main()` only
- B) Outside the class definition at global/namespace scope
- C) Inside the destructor
- D) Static variables cannot be initialized

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Outside the class definition at global/namespace scope.`
</details>

<br>

#### **Q2: If you modify a static variable through object `A`, what happens when object `B` reads it?**
- A) Object `B` sees its own separate untouched copy
- B) Object `B` sees the updated value because memory is shared
- C) Compilation error occurs
- D) The program resets

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Object `B` sees the updated value because memory is shared.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 09 - الأعضاء الثابتة على مستوى الكلاس (Static Members)

### 🎯 1. نظرة عامة والهدف
المتغيرات الثابتة (Static Variables) تنتمي إلى الكلاس نفسه وليس لكائن معين، وتكون مشتركة بين جميع كائنات الكلاس في مكان واحد بالذاكرة.

### 🔑 2. المفاهيم الأساسية والفوائد
- ذاكرة مشتركة: تعديل القيمة من أي كائن ينعكس فوراً على باقي الكائنات.
- يجب تعريفها وتهيئتها خارج الكلاس في النطاق العام (Global Scope).
- توجد في الذاكرة حتى لو لم يتم إنشاء أي كائن من الكلاس.

### 💡 3. ملاحظات وتوجيهات عملية
- يُفضل دائماً الوصول للمتغيرات الثابتة باسم الكلاس ومعامل النطاق `Counter::ObjectCount`.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: أين يجب تهيئة المتغير الثابت (Static Member Variable) في C++؟**
- A) داخل main() فقط
- B) خارج الكلاس في النطاق العام (File Scope)
- C) داخل الـ Destructor
- D) لا يمكن تهيئة المتغيرات الثابتة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) خارج تعريف الكلاس في النطاق العام باستخدام `Type ClassName::Var = val;`.`
</details>

<br>

#### **السؤال الثاني: إذا قمت بتعديل متغير static عن طريق الكائن `A`، ماذا يرى الكائن `B`؟**
- A) يرى نسخته القديمة المنفصلة
- B) يرى القيمة المحدثة مباشرة لأن المكان في الذاكرة مشترك بينهما
- C) يحدث خطأ أثناء الترجمة
- D) يعيد البرنامج تشغيل نفسه

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) يرى القيمة الجديدة المحدثة لأنها مشتركة على مستوى الكلاس بالكامل.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
