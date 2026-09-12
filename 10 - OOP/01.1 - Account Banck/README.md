# 01.1 - Bank Account Real-World Simulation

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
Practical application of classes, encapsulation, and methods using a real-world Bank Account simulation with deposit, withdrawal, balance checks, and validation.

### 🔑 2. Key Concepts & Takeaways
- **Encapsulation**: Hiding sensitive data (`Balance`) from unauthorized direct modifications.
- **Business Rules**: Preventing invalid withdrawals (e.g. withdrawal amount > balance).
- **State Management**: Providing safe public methods to interact with private states.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class BankAccount {
private:
    double _Balance;

public:
    BankAccount() {
        _Balance = 0;
    }

    void Deposit(double amount) {
        if (amount > 0) {
            _Balance += amount;
            cout << "Deposited: " << amount << "\n";
        }
    }

    void Withdraw(double amount) {
        if (amount > 0 && amount <= _Balance) {
            _Balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
        } else {
            cout << "Error: Insufficient balance or invalid amount!\n";
        }
    }

    void PrintBalance() {
        cout << "Current Balance: $" << _Balance << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Always validate financial inputs before committing state mutations.
- Encapsulating the balance guarantees financial integrity in your banking model.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Why should the `Balance` attribute be marked `private`?**
- A) To make the code compile faster
- B) To protect it from unauthorized direct manipulation and enforce business logic
- C) Because C++ does not allow double variables to be public
- D) To save RAM usage

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) To protect it from unauthorized direct manipulation and enforce business logic.`
</details>

<br>

#### **Q2: What happens if a user tries to withdraw more money than their balance?**
- A) C++ crashes with a segmentation fault
- B) The balance becomes negative automatically
- C) The conditional validation stops the transaction and notifies the user
- D) The operating system shuts down

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `C) The conditional validation stops the transaction and notifies the user.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 01.1 - محاكاة الحساب البنكي عملياً (Bank Account)

### 🎯 1. نظرة عامة والهدف
تطبيق عملي واقعي على مفاهيم الكلاسات، وتغليف البيانات (Encapsulation) والعمليات المالية كالإيداع والسحب مع التحقق من صحة الرصيد.

### 🔑 2. المفاهيم الأساسية والفوائد
- **تغليف البيانات (Encapsulation)**: جعل الرصيد `private` لمنع التعديل العشوائي.
- **قواعد العمل (Business Rules)**: منع السحب في حال عدم كفاية الرصيد.
- **العمليات الآمنة**: توفير دوال مثل `Deposit()` و `Withdraw()` للتعامل الآمن مع البيانات.

### 💡 3. ملاحظات وتوجيهات عملية
- التأكد دائماً من أن قيمة الإيداع والسحب أكبر من الصفر وألا يتجاوز السحب الرصيد المتوفر.
- إخفاء الرصيد داخل الـ private يحمي النظام البنكي من التلاعب.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: لماذا يجب أن يكون متغير الرصيد `_Balance` خاصاً `private`؟**
- A) لتسريع تشغيل البرنامج
- B) لحمايته من التعديل المباشر غير المصرح به وتطبيق شروط الأمان والسحب
- C) لأن لغة C++ لا تسمح بـ double public
- D) لتقليل حجم الذاكرة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لحمايته من التعديل المباشر وتطبيق شروط التحقق من صحة المعاملات.`
</details>

<br>

#### **السؤال الثاني: ما الذي يحدث إذا حاول المستخدم سحب مبلغ أكبر من رصيده الحالي؟**
- A) البرنامج ينهار تماماً
- B) يصبح الرصيد سالباً تلقائياً
- C) تمنع دالة التحقق العملية وتطبع رسالة خطأ بعدم كفاية الرصيد
- D) يتوقف النظام عن العمل

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `C) تمنع دالة التحقق العملية وتطبع رسالة توضح عدم كفاية الرصيد.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
