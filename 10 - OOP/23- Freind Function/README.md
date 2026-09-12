# 23 - Friend Functions

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
A Friend Function is an external non-member function granted full access to a class's private and protected members.

### 🔑 2. Key Concepts & Takeaways
- Declared inside the class with the `friend` keyword.
- Defined outside the class without class scope resolution `::`.
- Commonly used for operator overloading (e.g. `<<` and `>>` streaming).

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsA {
private:
    int _var1 = 10;
    int _var2 = 20;

public:
    // Declare friend function
    friend int CalculateSum(clsA obj);
};

// Normal non-member function
int CalculateSum(clsA obj) {
    return obj._var1 + obj._var2; // Direct private access!
}

int main() {
    clsA a;
    cout << "Sum: " << CalculateSum(a) << "\n";
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- A friend function does not receive a hidden `this` pointer; it must receive the object as an explicit argument.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Is a friend function considered a member function of the class that friended it?**
- A) Yes, it is a full member
- B) No, it is a regular external function with privileged access
- C) Only if defined inside the class
- D) Yes, but only for static members

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, it is a regular external function with privileged access.`
</details>

<br>

#### **Q2: What is one of the most common use-cases for friend functions in C++?**
- A) Overloading stream operators like `<<` and `>>`
- B) Allocating dynamic arrays in memory
- C) Creating constructors
- D) Terminating infinite loops

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Overloading stream operators like `<<` and `>>`.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 23 - الدوال الصديقة (Friend Functions)

### 🎯 1. نظرة عامة والهدف
الدالة الصديقة (Friend Function) هي دالة عادية خارجية (ليست عضواً داخل الكلاس) ولكن يتم منحها تصريحاً للوصول الكامل إلى بيانات الكلاس الخاصة والمحمية.

### 🔑 2. المفاهيم الأساسية والفوائد
- يُصرح عنها داخل الكلاس بكلمة `friend`.
- يتم كتابة جسمها خارج الكلاس كدالة عادية دون اسم الكلاس أو `::`.
- تُستخدم بكثرة في تحميل المعاملات (Operator Overloading) مثل معاملات الإدخال والإخراج `<<` و `>>`.

### 💡 3. ملاحظات وتوجيهات عملية
- الدالة الصديقة لا تملك مؤشر `this` لأنها ليست دالة عضو، بل تستقبل الكائن كمعامل صريح.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: هل تعتبر الدالة الصديقة (Friend Function) دالة عضواً داخل الكلاس؟**
- A) نعم هي دالة عضو كاملة
- B) لا، هي دالة خارجية عادية ولكن تملك تصريح وصول استثنائي للبيانات الخاصة
- C) فقط إذا كُتبت داخل الكلاس
- D) نعم للأعضاء الثابتة فقط

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، هي دالة خارجية عادية وليست دالة عضو داخل الكلاس.`
</details>

<br>

#### **السؤال الثاني: ما هو أحد أشهر الاستخدامات للدوال الصديقة في C++؟**
- A) تحميل معاملات التدفق مثل الطباعة `<<` والإدخال `>>`
- B) حجز المصفوفات الديناميكية
- C) إنشاء دوال البناء
- D) إنهاء الحلقات التكرارية

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) تحميل معاملات تدفق الإدخال والإخراج مثل `operator<<`.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
