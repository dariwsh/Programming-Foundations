# 29 - Objects and Dynamic Arrays (`new[]` / `delete[]`)

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
Allocating and managing dynamic arrays of objects on the Heap using `new[]` and deallocating with `delete[]`.

### 🔑 2. Key Concepts & Takeaways
- Allocating on Heap: `clsPerson* arr = new clsPerson[size];`.
- Executing default constructors for every element.
- Mandatory cleanup: `delete[] arr;` to prevent memory leaks.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
using namespace std;

class clsItem {
public:
    int ID;
    clsItem() { ID = 0; }
};

int main() {
    int count = 3;
    clsItem* items = new clsItem[count]; // Heap allocation

    items[0].ID = 101;
    items[1].ID = 102;
    items[2].ID = 103;

    for (int i = 0; i < count; i++) {
        cout << "Item ID: " << items[i].ID << "\n";
    }

    delete[] items; // Clean up!
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Always pair `new[]` with `delete[]` (with brackets). Using regular `delete` invokes undefined behavior.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What operator must be used to free memory allocated with `new ClassName[10]`?**
- A) `free(arr);`
- B) `delete arr;`
- C) `delete[] arr;`
- D) `release arr;`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `C) `delete[] arr;` (Bracketed delete invokes destructors for all array elements).`
</details>

<br>

#### **Q2: What constructor is called when instantiating `new clsPerson[5]`?**
- A) The Copy Constructor
- B) The Default Parameterless Constructor for all 5 objects
- C) The Destructor
- D) No constructor is executed

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) The Default Parameterless Constructor for all 5 objects.`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 29 - الكائنات مع المصفوفات الديناميكية (new[] / delete[])

### 🎯 1. نظرة عامة والهدف
حجز وإدارة مصفوفات الكائنات ديناميكياً في ذاكرة الـ Heap باستخدام `new[]` وتحريرها بأمان باستخدام `delete[]`.

### 🔑 2. المفاهيم الأساسية والفوائد
- الحجز على الـ Heap: `clsPerson* arr = new clsPerson[size];`.
- استدعاء الكونسـتراكتور الافتراضي لكل عنصر في المصفوفة.
- التحرير الإلزامي: `delete[] arr;` لتفادي تسريب الذاكرة (Memory Leaks).

### 💡 3. ملاحظات وتوجيهات عملية
- قاعدة إلزامية: كل حجز بـ `new[]` يجب تحريره بـ `delete[]` (بالأقواس) لضمان استدعاء دوال الهدم لكافة العناصر.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو المعامل الذي يجب استخدامه لتحرير مصفوفة كائنات حُجزت بـ `new ClassName[10]`؟**
- A) `free(arr);`
- B) `delete arr;`
- C) `delete[] arr;` (المعامل المزود بالأقواس المربعة)
- D) `release arr;`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `C) `delete[] arr;` لضمان استدعاء دالة الهدم لجميع كائنات المصفوفة.`
</details>

<br>

#### **السؤال الثاني: أي دالة بناء يتم استدعاؤها عند حجز مصفوفة ديناميكية `new clsPerson[5]`؟**
- A) الـ Copy Constructor
- B) دالة البناء الافتراضية بدون معاملات (Default Constructor) لكل عنصر من العناصر الخمسة
- C) دالة الهدم
- D) لا يتم استدعاء أي كونسـتراكتور

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) دالة البناء الافتراضية بدون معاملات لكل كائن في المصفوفة.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
