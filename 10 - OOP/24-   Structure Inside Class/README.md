# 24 - Structures Inside Classes

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
Grouping related sub-attributes into a `struct` defined inside or used within a class to keep class organization neat and modular.

### 🔑 2. Key Concepts & Takeaways
- Encapsulating composite types (e.g. `stAddress`, `stContactInfo`) inside a main class.
- Enhances code readability and modular data transfer.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsUser {
private:
    struct stAddress {
        string Street;
        string City;
        string Country;
    };

    string _name;
    stAddress _address;

public:
    clsUser(string name, string street, string city, string country) {
        _name = name;
        _address.Street = street;
        _address.City = city;
        _address.Country = country;
    }

    void Print() {
        cout << _name << "\nAddress: " << _address.Street << ", " << _address.City << "\n";
    }
};
```

### 💡 4. Important Notes & Best Practices
- Structs inside classes can be `private` for internal organization or `public` for external data packaging.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: Why define a `struct` inside a class?**
- A) To increase compilation speed tenfold
- B) To group logically coupled sub-data under a structured namespace/scope
- C) C++ does not allow variables without structs
- D) To bypass private access rules

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) To group logically coupled sub-data under a structured namespace/scope.`
</details>

<br>

#### **Q2: If a struct is declared in the `private` section of a class, can outside functions in `main()` instantiate that struct directly?**
- A) Yes, structs are always globally visible
- B) No, private nested types are strictly inaccessible outside the enclosing class
- C) Only with pointers
- D) Only in debug builds

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) No, private nested types are strictly inaccessible outside the enclosing class.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 24 - الهياكل داخل الكلاسات (Structures Inside Classes)

### 🎯 1. نظرة عامة والهدف
تنظيم وتجميع البيانات الفرعية المترابطة داخل هيكل `struct` داخل الكلاس لزيادة الترتيب والنمذجة النظيفة للبيانات المعقدة.

### 🔑 2. المفاهيم الأساسية والفوائد
- تجميع البيانات المركبة مثل (العنوان `stAddress` أو الاتصال `stContactInfo`) كـ struct داخل الكلاس.
- يزيد من وضوح الكود وسهولة تمرير مجموعات البيانات المترابطة.

### 💡 3. ملاحظات وتوجيهات عملية
- يمكن جعل الـ Struct داخلياً `private` للاستخدام الداخلي فقط أو `public` لتبادل البيانات مع الخارج.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: لماذا نقوم بتعريف `struct` داخل كلاس معين؟**
- A) لتسريع التجميع 10 أضعاف
- B) لتجميع البيانات الفرعية المترابطة منطقياً في كيان منظم تحت نطاق الكلاس
- C) لأن C++ لا تسمح بمتغيرات بدون struct
- D) لتخطي حماية البيانات

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لتنظيم البيانات الفرعية المترابطة معاً في قالب واحد.`
</details>

<br>

#### **السؤال الثاني: إذا تم الإعلان عن struct في القسم `private` من الكلاس، هل يمكن لدالة `main()` إنشاء كائن منه مباشرة؟**
- A) نعم دائماً
- B) لا، الأنواع المعرفة داخل القسم الخاص لا يمكن الوصول إليها من خارج الكلاس
- C) فقط باستخدام المؤشرات
- D) فقط في وضع Debug

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) لا، الأنواع المعرفة داخل النطاق الخاص تكون محجوبة عن الخارج تماماً.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
