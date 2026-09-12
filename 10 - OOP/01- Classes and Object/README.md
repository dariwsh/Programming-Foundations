# 01 - Classes and Objects

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
Understanding the foundation of OOP: A Class is a user-defined blueprint or prototype from which objects are created, bundling data (attributes) and behaviors (methods) together.

### 🔑 2. Key Concepts & Takeaways
- **Class**: Logical structure that defines state (variables) and behavior (functions).
- **Object**: An instance in memory created from that class.
- **Direct Access**: By default, C++ class members are `private` unless marked `public`.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Person {
public:
    string FirstName;
    string LastName;
    short Age;

    void PrintFullName() {
        cout << "Name: " << FirstName << " " << LastName << "\n";
        cout << "Age : " << Age << "\n";
    }
};

int main() {
    Person person1;
    person1.FirstName = "Ahmed";
    person1.LastName = "Darwish";
    person1.Age = 22;

    person1.PrintFullName();
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Always follow PascalCase or meaningful naming conventions for classes.
- Separate public interfaces from private member variables for data protection.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the default access modifier for members in a C++ `class`?**
- A) `public`
- B) `private`
- C) `protected`
- D) `internal`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `private` - In C++ classes, all members are private by default unless specified otherwise.`
</details>

<br>

#### **Q2: Which statement correctly instantiates an object from class `Person`?**
- A) `new Person();`
- B) `Person person1;`
- C) `class Person = person1;`
- D) `create Person person1;`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `Person person1;` - Allocates a stack-based instance of the Person class.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 01 - الأصناف والكائنات (Classes and Objects)

### 🎯 1. نظرة عامة والهدف
فهم حجر الأساس للبرمجة كائنية التوجه: الصنف (Class) هو القالب أو المخطط العام، والكائن (Object) هو نسخة حقيقية وملموسة من هذا القالب تحتوي على البيانات والوظائف.

### 🔑 2. المفاهيم الأساسية والفوائد
- **Class**: المخطط الهيكلي الذي يحدد المتغيرات والدوال.
- **Object**: الكائن الحي المحجوز بالذاكرة وفقاً لهذا المخطط.
- **مستوى الوصول الافتراضي**: الأعضاء داخل الـ Class تكون `private` افتراضياً ما لم تحدد كـ `public`.

### 💡 3. ملاحظات وتوجيهات عملية
- احرص على استخدام تسميات معبرة للكلاسات (مثل `clsPerson` أو `Person`).
- استخدم الحقول والخصائص بالشكل الصحيح للحفاظ على نظافة الكود.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو مستوى الوصول الافتراضي للأعضاء داخل الـ `class` في C++؟**
- A) `public`
- B) `private`
- C) `protected`
- D) `internal`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `private` - الأعضاء داخل الكلاس تكون خاصة افتراضياً حتى تعلن أنها public.`
</details>

<br>

#### **السؤال الثاني: أي من العبارات التالية تقوم بإنشاء كائن (Object) بشكل صحيح على الـ Stack؟**
- A) `new Person();`
- B) `Person person1;`
- C) `class Person = person1;`
- D) `create Person person1;`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `Person person1;` - إنشاء كائن مباشر على الـ Stack.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
