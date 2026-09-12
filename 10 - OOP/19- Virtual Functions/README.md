# 19 - Virtual Functions & Polymorphism

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
Virtual functions allow derived classes to override methods such that the correct method is resolved at runtime even through a base class pointer/reference.

### 🔑 2. Key Concepts & Takeaways
- Marked with the `virtual` keyword in the base class.
- Enables Dynamic Dispatch via the virtual table (`vtable`).
- Foundational for building flexible, extensible object-oriented architectures.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsPerson {
public:
    virtual void Print() {
        cout << "I am a Person\n";
    }
};

class clsEmployee : public clsPerson {
public:
    void Print() override {
        cout << "I am an Employee\n";
    }
};

int main() {
    clsEmployee emp;
    clsPerson* ptr = &emp;

    // Calls clsEmployee::Print() thanks to virtual keyword!
    ptr->Print();
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Always declare base class destructors as `virtual` when working with polymorphic hierarchies to prevent memory leaks.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Without the `virtual` keyword, which method does `BasePtr->Print()` invoke if `BasePtr` points to a `Derived` object?**
- A) `Derived::Print()`
- B) `Base::Print()`
- C) Neither (Runtime Error)
- D) Pure virtual error

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `Base::Print()` - Without virtual, early binding resolves to the pointer type (Base).`
</details>

<br>

#### **Q2: What table does the C++ runtime maintain to resolve virtual function calls dynamically?**
- A) Hash Map
- B) Virtual Method Table (`vtable`)
- C) Process Thread Table
- D) ASCII Table

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Virtual Method Table (`vtable`).`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 19 - الدوال الافتراضية والتعددية الشكلية (Virtual Functions)

### 🎯 1. نظرة عامة والهدف
الدوال الافتراضية (Virtual Functions) تتيح تنفيذ دالة الكائن الحقيقي في وقت التشغيل (Runtime) حتى لو تم استدعاؤها من خلال مؤشر أو مرجع للكلاس الأب (Polymorphism).

### 🔑 2. المفاهيم الأساسية والفوائد
- تُسبق بالكلمة المفتاحية `virtual` في الكلاس الأب.
- تفعل الاستدعاء الديناميكي عبر جدول الدوال الافتراضية (vtable).
- هي حجر الزاوية للتعددية الشكلية (Polymorphism).

### 💡 3. ملاحظات وتوجيهات عملية
- نصيحة ذهبية: احرص دائماً على جعل دالة الهدم في الكلاس الأب افتراضية `virtual ~Base()` لتجنب تسريب الذاكرة عند حذف كائنات مشتقة بمؤشر الأب.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: بدون الكلمة المفتاحية `virtual`، أي دالة سيتم تنفيذها عند استدعاء `BasePtr->Print()` ومؤشر الأب يشير لكائن ابن؟**
- A) `Derived::Print()` (الابن)
- B) `Base::Print()` (الأب - بسبب الربط المبكر)
- C) يحدث خطأ في وقت التشغيل
- D) لا شيء

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `Base::Print()` - لأن المترجم يربط الدالة بنوع المؤشر (الأب) في حالة غياب كلمة virtual.`
</details>

<br>

#### **السؤال الثاني: ما هو الجدول الذي ينشئه المترجم لإدارة استدعاءات الدوال الافتراضية ديناميكياً؟**
- A) Hash Map
- B) جدول الدوال الافتراضية (vtable / vptr)
- C) Process Thread Table
- D) جدول ASCII

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) جدول الدوال الافتراضية (Virtual Table / vtable).`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
