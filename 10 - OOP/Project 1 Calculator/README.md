# Project 1 - Interactive OOP Calculator (`clsCalculator`)

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
An Object-Oriented Calculator supporting stateful arithmetic operations (Add, Subtract, Multiply, Divide), formatted result printing, state clearing, and a stateful `Undo` capability.

### 🔑 2. Key Concepts & Takeaways
- Stateful design: maintaining current calculation state and previous state.
- Defensive programming: Division by zero prevention.
- Dynamic operation chaining and undo functionality.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsCalculator {
private:
    float _Result = 0;
    float _LastNumber = 0;
    string _LastOp = "Clear";
    float _PrevResult = 0;

public:
    void Clear() {
        _PrevResult = _Result;
        _Result = 0;
        _LastOp = "Clear";
    }

    void Add(float num) {
        _PrevResult = _Result;
        _LastNumber = num;
        _Result += num;
        _LastOp = "Adding";
    }

    void Divide(float num) {
        if (num == 0) num = 1; // Prevent divide by zero
        _PrevResult = _Result;
        _LastNumber = num;
        _Result /= num;
        _LastOp = "Dividing";
    }

    void Undo() {
        _Result = _PrevResult;
        _LastOp = "Undo";
    }

    void PrintResult() {
        cout << "Result After " << _LastOp << ": " << _Result << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Encapsulating the calculation state prevents outside code from corrupting mathematical steps.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: How does `clsCalculator` handle division by zero safely?**
- A) By checking if divisor == 0 before performing division to prevent undefined behavior
- B) By letting the OS crash
- C) By setting result to infinity string
- D) Division by zero is allowed in C++

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) By checking if divisor == 0 before performing division to prevent undefined behavior.`
</details>

<br>

#### **Q2: What fundamental data is required inside the class to support a 1-step `Undo()` method?**
- A) Saving `_PrevResult` before applying any new operation
- B) Writing calculations to a text file
- C) Static integer count
- D) Restarting the program

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) Saving `_PrevResult` before applying any new operation.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# المشروع الأول - الآلة الحاسبة كائنية التوجه مع خاصية التراجع (clsCalculator)

### 🎯 1. نظرة عامة والهدف
مشروع الآلة الحاسبة كائنية التوجه: دعم العمليات الحسابية المتتالية، وتخزين الحالة السابقة مع إمكانية التراجع عن العمليات (`Undo`)، وإعادة التصفير (`Clear`).

### 🔑 2. المفاهيم الأساسية والفوائد
- التصميم القائم على حفظ الحالة (Stateful): حفظ النتيجة الحالية والعملية السابقة.
- البرمجة الدفاعية: الحماية من القسمة على صفر.
- تفعيل خاصية التراجع الذكي (Undo) والعمليات التراكمية.

### 💡 3. ملاحظات وتوجيهات عملية
- تغليف الحالة الحسابية يحمي العمليات الرياضية من التعديلات الخارجية العشوائية ويسهل عملية التراجع.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: كيف يتعامل كلاس الآلة الحاسبة مع مشكلة القسمة على صفر بأمان؟**
- A) بالتحقق من أن المقسوم عليه لا يساوي صفراً قبل تنفيذ العملية لتفادي انهيار البرنامج
- B) بترك البرنامج ينهار
- C) بتحويل النتيجة لنص غير معرف
- D) القسمة على صفر مسموحة بدون قيود

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) بالتحقق المسبق من عدم القسمة على صفر وتصحيحها أو منع العملية لتجنب انهيار التطبيق.`
</details>

<br>

#### **السؤال الثاني: ما هي البيانات الأساسية التي يجب تخزينها داخل الكلاس لتوفير خاصية التراجع لخطوة سابقة (`Undo`)؟**
- A) حفظ قيمة النتيجة السابقة `_PrevResult` قبل تطبيق أي عملية حسابية جديدة
- B) كتابة الأرقام في ملف خارجي
- C) عداد ثابت
- D) إعادة تشغيل التطبيق

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) حفظ قيمة النتيجة السابقة `_PrevResult` قبل تعديل النتيجة الحالية.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
