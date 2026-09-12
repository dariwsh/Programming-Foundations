# 27 - Passing Objects to Functions (By Value vs By Reference)

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
Understanding how objects are passed to functions: Pass by Value (creates a full copy calling Copy Constructor) vs Pass by Reference (efficient, zero copy overhead).

### 🔑 2. Key Concepts & Takeaways
- **Pass by Value**: Invokes Copy Constructor, consumes extra memory/CPU.
- **Pass by Reference (`&`)**: Shares original memory, fast, allows mutating original object.
- **Pass by `const` Reference (`const &`)**: Fast, zero copies, and guarantees immutability.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsA {
public:
    int x;
};

// By Value (Copies object)
void ModifyByVal(clsA obj) {
    obj.x = 100;
}

// By Reference (Modifies original)
void ModifyByRef(clsA &obj) {
    obj.x = 100;
}

// Read-only (Zero copies, protected)
void Print(const clsA &obj) {
    cout << obj.x << "\n";
}
```

### 💡 4. Important Notes & Best Practices
- Standard C++ guideline: Pass primitive types (int, float) by value; pass objects and classes by `const &` unless mutation is intended.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What happens when an object is passed by value to a function?**
- A) Its destructor runs immediately
- B) A new copy of the object is created using its Copy Constructor
- C) The original object is deleted from RAM
- D) The function cannot access member variables

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) A new copy of the object is created using its Copy Constructor.`
</details>

<br>

#### **Q2: Why is `const ClassName &obj` considered best practice for read-only object parameters?**
- A) It avoids copying overhead while preventing accidental modifications to the original object
- B) It makes variables public
- C) It converts the class into a struct
- D) It executes faster than inline assembly

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) It avoids copying overhead while preventing accidental modifications to the original object.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 27 - تمرير الكائنات إلى الدوال (بالقيمة وبالمرجع)

### 🎯 1. نظرة عامة والهدف
فهم آليات تمرير الكائنات إلى الدوال: التمرير بالقيمة (By Value ينشئ نسخة ويستدعي Copy Constructor) والتمرير بالمرجع (By Reference يوفر الأداء بدون نسخ).

### 🔑 2. المفاهيم الأساسية والفوائد
- **التمرير بالقيمة (By Value)**: يستدعي Copy Constructor وينشئ نسخة جديدة بالذاكرة مما قد يستهلك موارد.
- **التمرير بالمرجع (By Reference `&`)**: يشير للكائن الأصلي مباشرة، سريع، ويسمح بتعديل الكائن الأصلي.
- **التمرير بمرجع ثابت (`const &`)**: الأفضل دائماً للقراءة، سريع بدون نسخ ويحمي الكائن من التعديل.

### 💡 3. ملاحظات وتوجيهات عملية
- قاعدة ذهبية في C++: الأنواع الأولية البسيطة (int, bool) تُمرر بالقيمة، بينما الكائنات والـ Classes تُمرر دائماً بـ `const &` ما لم تكن بحاجة لتعديلها.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما الذي يحدث عند تمرير كائن إلى دالة بالقيمة (By Value)؟**
- A) يتم تدمير الكائن فوراً
- B) يتم إنشاء نسخة جديدة تماماً في الذاكرة عبر استدعاء الـ Copy Constructor
- C) يُحذف الكائن الأصلي
- D) لا تستطيع الدالة قراءة المتغيرات

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) يتم إنشاء نسخة جديدة من الكائن في الذاكرة باستدعاء دالة النسخ.`
</details>

<br>

#### **السؤال الثاني: لماذا يُعتبر `const ClassName &obj` أفضل ممارسة لتمرير الكائنات للقراءة فقط؟**
- A) لأنه يمنع التكلفة العالية لنسخ الكائن ويضمن في نفس الوقت عدم تعديل الكائن الأصلي بالخطأ
- B) لأنه يجعل المتغيرات public
- C) لأنه يحول الكلاس إلى struct
- D) لأنه أسرع من لغة التجميع

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) لأنه يوفر أقصى سرعة وأداء دون نسخ، مع حماية الكائن الأصلي من أي تعديل عرضي.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
