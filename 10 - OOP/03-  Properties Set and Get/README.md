# 03 - Properties: Getters and Setters

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
Learn how Getters and Setters implement encapsulation by restricting direct member access and validating incoming mutations.

### 🔑 2. Key Concepts & Takeaways
- **Setters (`Set...`)**: Used to set or modify private data with validation rules.
- **Getters (`Get...`)**: Used to retrieve private data safely.
- **Data Hiding**: Protects object internal integrity.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Person {
private:
    string _firstName;

public:
    // Setter
    void SetFirstName(string firstName) {
        if (!firstName.empty()) {
            _firstName = firstName;
        }
    }

    // Getter
    string GetFirstName() {
        return _firstName;
    }
};
```

### 💡 4. Important Notes & Best Practices
- Always use leading underscores (e.g., `_firstName`) for private attributes to distinguish them from parameter names.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What is the primary role of a Setter function?**
- A) To delete the object
- B) To validate and assign a new value to a private variable
- C) To print the class details on the console
- D) To allocate heap memory

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) To validate and assign a new value to a private variable.`
</details>

<br>

#### **Q2: Can a Getter modify the internal state of the object?**
- A) By design, Getters should only read/return values, not mutate state
- B) Yes, Getters always reset variables to 0
- C) Getters cannot return values
- D) Getters must be declared void

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) By design, Getters should only read/return values, not mutate state.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 03 - الخصائص: دوال الجلب والتعيين (Setters & Getters)

### 🎯 1. نظرة عامة والهدف
تعلم كيفية تطبيق مبدأ التغليف (Encapsulation) عبر دوال Get و Set لحماية البيانات من التعديلات غير السليمة ومراقبة القراءات.

### 🔑 2. المفاهيم الأساسية والفوائد
- **دوال التعيين (Setters)**: تُستخدم لضبط وتعديل البيانات بعد فحصها والتحقق من صحتها.
- **دوال الجلب (Getters)**: تُستخدم لقراءة البيانات الخاصة بشكل آمن.
- **إخفاء البيانات (Data Hiding)**: يمنع تدمير المنطق الداخلي للكائن.

### 💡 3. ملاحظات وتوجيهات عملية
- يفضل وضع شرطة سفلية في بداية أسماء المتغيرات الخاصة (مثل `_name`) لتمييزها عن معاملات الدوال.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو الغرض الأساسي من دالة الـ Setter؟**
- A) حذف الكائن من الذاكرة
- B) التحقق من صحة القيمة المدخلة وتعيينها للمتغير الخاص
- C) طباعة بيانات الكلاس فقط
- D) حجز ذاكرة في Heap

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) التحقق من صحة القيمة المدخلة وتعيينها للمتغير الخاص بأمان.`
</details>

<br>

#### **السؤال الثاني: هل يُفترض بدالة الـ Getter أن تعدل بيانات الكائن الداخلية؟**
- A) الأصل في دوال الـ Getter أنها للقراءة فقط واسترجاع القيمة دون تعديل الحالة
- B) نعم، تقوم بتصفير المتغيرات دائماً
- C) دوال الـ Get لا تُرجع أي قيمة
- D) يجب أن يكون نوع إرجاعها void دائماً

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) الأصل أن دوال الـ Getter للقراءة واسترجاع القيمة فقط دون إحداث أي تغيير جانبي.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
