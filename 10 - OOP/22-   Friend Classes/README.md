# 22 - Friend Classes

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
A Friend Class has special permission to access the `private` and `protected` members of the class that grants friendship.

### 🔑 2. Key Concepts & Takeaways
- Declared using `friend class FriendClassName;`.
- Friendship is NOT mutual (A friending B does NOT mean B friends A).
- Friendship is NOT inherited.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class BankVault {
private:
    int _secretCode = 778899;

    // Granting clsBankManager full access
    friend class clsBankManager;
};

class clsBankManager {
public:
    void InspectVault(BankVault vault) {
        // Can access private _secretCode directly!
        cout << "Vault Secret Code is: " << vault._secretCode << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Use Friend Classes sparingly to avoid weakening encapsulation.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: If class A declares class B as its `friend`, does class A automatically get access to class B's private members?**
- A) Yes, friendship is automatically mutual
- B) No, friendship is unidirectional unless class B also explicitly declares class A as friend
- C) Yes, in all C++ compilers
- D) Only if both classes are in the same header

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, friendship is unidirectional unless class B also explicitly declares class A as friend.`
</details>

<br>

#### **Q2: Is friendship inherited in C++?**
- A) Yes, children are always friends of their parent's friends
- B) No, friendship is not inherited (A friend of a parent is NOT automatically a friend of the child)
- C) Only with public inheritance
- D) Yes, through templates

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, friendship is not inherited.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 22 - الكلاسات الصديقة (Friend Classes)

### 🎯 1. نظرة عامة والهدف
الكلاس الصديق (Friend Class) هو كلاس يُمنح إذناً خاصاً للوصول الكامل إلى كافة الأعضاء الخاصة (`private`) والمحمية (`protected`) في الكلاس الذي منحه الصداقة.

### 🔑 2. المفاهيم الأساسية والفوائد
- يتم إعلانه باستخدام: `friend class OtherClass;`.
- الصداقة ليست متبادلة (إذا كان A صديق B، فليس بالضرورة B صديق A ما لم ينص على ذلك).
- الصداقة لا تورث.

### 💡 3. ملاحظات وتوجيهات عملية
- استخدم الكلاسات الصديقة بحذر شديد لأن الإفراط فيها يضعف مبدأ التغليف (Encapsulation).

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: إذا أعلن كلاس A أن كلاس B صديق له (`friend`)، فهل يمتلك كلاس A تلقائياً صلاحية الدخول لبيانات B الخاصة؟**
- A) نعم، الصداقة متبادلة تلقائياً
- B) لا، الصداقة أحادية الاتجاه (One-way) ما لم يعلن B أيضاً أن A صديق له
- C) نعم في كل الحالات
- D) فقط إذا كانا في نفس الملف

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، الصداقة في C++ غير متبادلة تلقائياً ويجب التصريح بها من الطرفين إن لزم الأمر.`
</details>

<br>

#### **السؤال الثاني: هل تنتقل الصداقة بالوراثة في C++؟**
- A) نعم، أصدقاء الأب أصدقاء للأبناء دائماً
- B) لا، الصداقة لا تورث إطلاقاً في C++
- C) فقط في الوراثة العامة
- D) نعم باستخدام القوالب

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، الصداقة في C++ لا تورث.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
