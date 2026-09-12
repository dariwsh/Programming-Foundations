# 25 - Nested Classes (Inner Classes)

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
A Nested Class is a class declared completely within the scope of another enclosing class, strengthening encapsulation and scoping.

### 🔑 2. Key Concepts & Takeaways
- Scoped within enclosing class: `EnclosingClass::NestedClass`.
- Does not automatically have access to non-static private members of the enclosing class without an object reference.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void Display() {
            cout << "Inside Nested Inner Class\n";
        }
    };
};

int main() {
    Outer::Inner innerObj;
    innerObj.Display();
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Use nested classes when a helper class exists purely to serve its enclosing parent class and has no standalone meaning outside.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: How do you instantiate a public nested class `Inner` declared inside `Outer` from `main()`?**
- A) `Inner obj;`
- B) `Outer::Inner obj;`
- C) `Outer->Inner obj;`
- D) `new Outer.Inner();`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `Outer::Inner obj;``
</details>

<br>

#### **Q2: If `Inner` is placed in the `private` section of `Outer`, can other classes instantiate `Inner`?**
- A) Yes
- B) No, it becomes an internal helper class exclusively accessible to `Outer`
- C) Only through global pointers
- D) Only in header files

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, it becomes an internal helper class exclusively accessible to `Outer`.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 25 - الكلاسات المتداخلة (Nested Classes)

### 🎯 1. نظرة عامة والهدف
الكلاس المتداخل (Nested Class) هو كلاس يتم تعريفه داخل نطاق كلاس آخر، لخدمة الكلاس الخارجي وتعزيز التغليف وحصر النطاق المنطقي.

### 🔑 2. المفاهيم الأساسية والفوائد
- ينتمي لنطاق الكلاس الحاضن: `EnclosingClass::NestedClass`.
- لا يملك وصولاً تلقائياً للأعضاء غير الثابتة في الكلاس الخارجي إلا عبر تمرير كائن صريح.

### 💡 3. ملاحظات وتوجيهات عملية
- تُستخدم الكلاسات المتداخلة عندما يكون الكلاس الداخلي مخصصاً فقط لخدمة الكلاس الخارجي ولا معنى لاستخدامه منفرداً في المشروع.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: كيف يتم إنشاء كائن من كلاس داخلي عام `Inner` موجود داخل `Outer` من دالة `main()`؟**
- A) `Inner obj;`
- B) `Outer::Inner obj;` باستخدام اسم الكلاس الخارجي ومعامل النطاق `::`
- C) `Outer->Inner obj;`
- D) `new Outer.Inner();`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `Outer::Inner obj;` باستخدام اسم الكلاس الخارجي ومعامل النطاق.`
</details>

<br>

#### **السؤال الثاني: إذا وُضع الكلاس الداخلي `Inner` في القسم الخاص `private` للكلاس `Outer`، هل يمكن لأي كلاس خارجي استخدامه؟**
- A) نعم
- B) لا، يصبح كلاس مساعد داخلي خاص محصور الاستخدام داخل `Outer` فقط
- C) فقط باستخدام المؤشرات
- D) في ملفات الهيدر فقط

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، يصبح محصوراً للاستخدام الداخلي داخل الكلاس الحاضن فقط.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
