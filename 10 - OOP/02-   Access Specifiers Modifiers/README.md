# 02 - Access Specifiers & Modifiers

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
Access Specifiers define the visibility and accessibility of class members (variables and functions) from outside the class and derived classes.

### 🔑 2. Key Concepts & Takeaways
- **`public`**: Accessible from anywhere in the program.
- **`private`**: Accessible only within the class itself.
- **`protected`**: Accessible within the class itself and its inherited/derived subclasses.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Base {
private:
    int _privateVar = 10;   // Only Base

protected:
    int _protectedVar = 20; // Base & Derived classes

public:
    int publicVar = 30;     // Accessible everywhere

    void Print() {
        cout << _privateVar << " " << _protectedVar << " " << publicVar << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Keep variables `private` or `protected` and expose controlled access via public methods.
- `struct` members are `public` by default, whereas `class` members are `private` by default.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Which access specifier allows derived (child) classes to access a member while keeping it hidden from the rest of the program?**
- A) `public`
- B) `private`
- C) `protected`
- D) `static`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `C) `protected` - Accessible by derived classes, but inaccessible to the public interface.`
</details>

<br>

#### **Q2: Can code in `main()` directly access a `private` member variable?**
- A) Yes, always
- B) No, it will cause a compilation error
- C) Only if the variable is an integer
- D) Yes, using pointer hacks without errors

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, it will cause a compilation error.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 02 - محددات الوصول (Access Specifiers & Modifiers)

### 🎯 1. نظرة عامة والهدف
تحدد معدلات الوصول مدى إمكانية رؤية واستخدام عناصر الكلاس (المتغيرات والدوال) من داخل الكلاس أو من الكائنات الخارجية أو من الكلاسات المشتقة.

### 🔑 2. المفاهيم الأساسية والفوائد
- **`public`**: متاح للوصول والاستخدام من أي مكان في البرنامج.
- **`private`**: متاح فقط من داخل الكلاس نفسه.
- **`protected`**: متاح من داخل الكلاس ومن الكلاسات التي ترث منه فقط.

### 💡 3. ملاحظات وتوجيهات عملية
- القاعدة الذهبية: اجعل البيانات `private` ووفر دوال `public` للتحكم بها.
- الفرق الجوهري بين `struct` و `class` في C++ هو أن الـ struct عناصرها public افتراضياً والـ class عناصرها private افتراضياً.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: أي محدد وصول يتيح للكلاسات المشتقة (الأبناء) الوصول للعنصر مع إخفائه عن باقي البرنامج الخارجي؟**
- A) `public`
- B) `private`
- C) `protected`
- D) `static`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `C) `protected` - يسمح للوراثة بالوصول ويحجب الوصول الخارجي.`
</details>

<br>

#### **السؤال الثاني: هل تستطيع دالة `main()` الوصول مباشرة إلى متغير `private`؟**
- A) نعم في أي وقت
- B) لا، وسينتج عن ذلك خطأ تجميع (Compilation Error)
- C) فقط إذا كان رقماً صحيحاً
- D) نعم دون قيود

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، محاولة الوصول المباشر تعطي خطأ من المترجم (Compiler Error).`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
