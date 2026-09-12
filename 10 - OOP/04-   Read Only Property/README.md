# 04 - Read-Only Properties

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
Understanding how to create immutable or read-only properties in C++ classes by exposing a Getter without providing any Setter.

### 🔑 2. Key Concepts & Takeaways
- **Read-Only Property**: A property with a `Get` method and NO `Set` method.
- **Immutable Fields**: Useful for IDs, calculated ages, UUIDs, or system creation timestamps.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class User {
private:
    int _id = 101; // Auto-generated ID
    string _name;

public:
    User(int id, string name) : _id(id), _name(name) {}

    // Read-Only Property (No Setter)
    int GetID() {
        return _id;
    }

    void SetName(string name) { _name = name; }
    string GetName() { return _name; }
};
```

### 💡 4. Important Notes & Best Practices
- Read-only properties prevent caller code from tampering with essential identifiers or internal invariants.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: How do you make a property read-only in standard C++?**
- A) Use the `readonly` keyword
- B) Implement a `Get` method only and do not provide a `Set` method
- C) Mark the entire class as `const`
- D) Make the variable `public const` in all cases

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Implement a `Get` method only and do not provide a `Set` method.`
</details>

<br>

#### **Q2: Which of the following is a prime candidate for a Read-Only property?**
- A) User Password
- B) System Generated Account Number / National ID
- C) User Age (when updated annually by manual input)
- D) Temporary form buffer

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) System Generated Account Number / National ID.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 04 - الخصائص للقراءة فقط (Read-Only Properties)

### 🎯 1. نظرة عامة والهدف
فهم كيفية إنشاء خصائص للقراءة فقط (Read-Only) في C++ عبر توفير دالة Get فقط دون إتاحة دالة Set، أو عبر احتساب القيم عند الطلب.

### 🔑 2. المفاهيم الأساسية والفوائد
- **خاصية للقراءة فقط**: توفير دالة `Get` فقط وتجاهل دالة `Set`.
- **حقول ثابتة**: مفيدة للأرقام القومية/المعرفات (IDs)، أو القيم المحسوبة مثل العمر بناءً على تاريخ الميلاد.

### 💡 3. ملاحظات وتوجيهات عملية
- الخصائص للقراءة فقط تحمي البيانات الجوهرية (مثل رقم الحساب أو المعرف) من التغيير بعد الإنشاء.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: كيف تجعل خاصية معينة للقراءة فقط (Read-Only) في C++؟**
- A) كتابة الكلمة المفتاحية readonly
- B) كتابة دالة Get فقط وعدم توفير دالة Set للمستخدم الخارجي
- C) جعل الكلاس بأكمله const
- D) جعل المتغير public const فقط

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) كتابة دالة Get فقط وعدم توفير دالة Set.`
</details>

<br>

#### **السؤال الثاني: أي من الخيارات التالية يُعتبر مثالاً مثالياً للخاصية المقتصرة على القراءة فقط؟**
- A) كلمة مرور المستخدم
- B) رقم الحساب البنكي أو الرقم القومي الثابت
- C) الاسم الأول القابل للتعديل
- D) نصوص الإدخال المؤقتة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) رقم الحساب البنكي أو الرقم القومي الثابت المنشأ من النظام.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
