# 05 - MSVC Compiler-Specific Properties (`__declspec(property)`)

<div align="center">
  <h3>⚡ C++ Object-Oriented Programming Series ⚡</h3>
  <p align="center">
    <a href="#english-version">
      <img src="https://img.shields.io/badge/Language-English-blue?style=for-the-badge&logo=readme&logoColor=white" alt="English">
    </a>
    &nbsp;&nbsp;
    <a href="#arabic-version">
      <img src="https://img.shields.io/badge/Language-Arabic-green?style=for-the-badge&logo=readme&logoColor=white" alt="Arabic">
    </a>
  </p>
  <p align="center">
    <a href="#english-version">🇬🇧 <b>Switch to English</b></a>
    &nbsp;&nbsp;•&nbsp;&nbsp;
    <a href="#arabic-version">🇪🇬 <b>التبديل إلى النسخة العربية</b></a>
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
Exploring the Microsoft Visual C++ proprietary syntax `__declspec(property)` to map getters and setters to clean property names like C#.

### 🔑 2. Key Concepts & Takeaways
- **`__declspec(property(get=..., put=...))`**: Non-standard MSVC extension for property syntax.
- **Syntax Sugar**: Allows `obj.Name = "value";` which internally calls `SetName("value")`.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class Person {
private:
    string _firstName;

public:
    void SetFirstName(string firstName) { _firstName = firstName; }
    string GetFirstName() { return _firstName; }

    // MSVC Property definition
    __declspec(property(get = GetFirstName, put = SetFirstName)) string FirstName;
};

int main() {
    Person p;
    p.FirstName = "Ahmed"; // Calls SetFirstName
    cout << p.FirstName;   // Calls GetFirstName
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Note: `__declspec(property)` is MSVC specific (Windows). For cross-platform code (GCC/Clang), standard Get/Set methods are standard.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Is `__declspec(property)` part of the ISO standard C++ specification?**
- A) Yes, since C++11
- B) No, it is a Microsoft Visual C++ specific compiler extension
- C) Yes, it is standard across all GCC and Clang compilers
- D) It belongs to the C language only

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, it is a Microsoft Visual C++ specific compiler extension.`
</details>

<br>

#### **Q2: When using `__declspec(property(get=GetX, put=SetX))`, what function is called by `obj.X = 10`?**
- A) `GetX()`
- B) `SetX(10)`
- C) Both simultaneously
- D) None, it assigns memory directly

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) `SetX(10)` - The 'put' directive redirects the assignment to SetX.`
</details>

---

<span id="arabic-version"></span>

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 05 - خصائص ميكروسوفت المتقدمة (__declspec(property))

### 🎯 1. نظرة عامة والهدف
استكشاف أسلوب ميكروسوفت الخاص (MSVC Property Extension) الذي يربط دوال Get و Set بالخصائص مباشرة لتظهر كأنها متغيرات كما في لغة C#.

### 🔑 2. المفاهيم الأساسية والفوائد
- **`__declspec(property)`**: ميزة خاصة بمترجم مايكروسوفت (MSVC) وليست قياسية في C++ المعيارية.
- **تسهيل الاستخدام (Syntax Sugar)**: يمكنك كتابة `obj.Name = "..."` وسيقوم المترجم تلقائياً باستدعاء دالة `SetName`.

### 💡 3. ملاحظات وتوجيهات عملية
- تنبيه: هذه الميزة خاصة بمترجم فيجوال ستوديو على ويندوز، وللأكواد المتوافقة مع كافة الأنظمة يفضل استخدام دوال Get و Set القياسية.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: هل ميزة `__declspec(property)` تابعة لمعايير C++ القياسية الدولية (ISO C++)؟**
- A) نعم منذ C++11
- B) لا، هي امتداد خاص بمترجم Microsoft Visual C++ (MSVC)
- C) نعم وهي مدعومة في كل مترجمات GCC و Clang
- D) تتبع لغة C فقط

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، هي امتداد خاص بمترجم Microsoft Visual C++ (MSVC).`
</details>

<br>

#### **السؤال الثاني: عند كتابة `obj.X = 10` في خاصية معرفة بـ `put=SetX`، ما الدالة التي يتم استدعاؤها بالخفاء؟**
- A) `GetX()`
- B) `SetX(10)`
- C) كلاهما معاً
- D) لا يتم استدعاء أي دالة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) `SetX(10)` - يتم توجيه عملية الإسناد تلقائياً إلى دالة الـ Setter.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
