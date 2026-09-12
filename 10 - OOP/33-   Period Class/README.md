# 33 - Project: Period & Date Range Management (`clsPeriod`)

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
Advanced OOP project integrating `clsDate` to represent and manage Date Ranges (Periods), detecting appointment overlaps, period lengths, and date containment.

### 🔑 2. Key Concepts & Takeaways
- Composition of objects (`clsPeriod` contains two `clsDate` objects: StartDate and EndDate).
- Overlap detection logic (crucial for booking, reservation, and scheduling systems).
- Period length and boundary checks.

### 💻 3. Code Implementation & Example
```cpp
#include <iostream>
#include "clsPeriod.h"
using namespace std;

int main() {
    clsPeriod period1(clsDate(1, 1, 2026), clsDate(10, 1, 2026));
    clsPeriod period2(clsDate(5, 1, 2026), clsDate(15, 1, 2026));

    if (clsPeriod::IsOverlapPeriods(period1, period2)) {
        cout << "Warning: The two periods overlap!\n";
    } else {
        cout << "Periods are completely separate.\n";
    }

    cout << "Period 1 Duration: " << period1.PeriodLengthInDays() << " days.\n";
    return 0;
}
```

### 💡 4. Important Notes & Best Practices
- Two periods overlap if and only if StartDate1 <= EndDate2 AND EndDate1 >= StartDate2.

### 🧠 5. Knowledge Check & Mini-Quiz

#### **Q1: What OOP principle is demonstrated when `clsPeriod` uses `clsDate` instances as member variables?**
- A) Multiple Inheritance
- B) Composition / Aggregation (HAS-A relationship)
- C) Virtual Polymorphism
- D) Friend Casting

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `B) Composition / Aggregation (HAS-A relationship).`
</details>

<br>

#### **Q2: Which condition proves two periods [S1, E1] and [S2, E2] DO NOT overlap?**
- A) `E1 < S2 || S1 > E2` (Period 1 ends before Period 2 starts, OR Period 1 starts after Period 2 ends)
- B) `S1 == S2`
- C) `E1 == E2`
- D) `S1 < E1`

<details>
<summary>👀 <b>View Answer & Explanation</b></summary>

> **Correct Answer:** `A) `E1 < S2 || S1 > E2` (Period 1 ends before Period 2 starts, OR Period 1 starts after Period 2 ends).`
</details>

---

<details>
<summary><b>🌍 🇪🇬 التوثيق والشرح باللغة العربية (اضغط هنا للتبديل إلى الشرح بالعربي)</b></summary>

<div dir="rtl">

# 33 - مشروع: كلاس الفترات الزمنية وتداخل المواعيد (clsPeriod)

### 🎯 1. نظرة عامة والهدف
مشروع كلاس الفترات الزمنية `clsPeriod` المعتمد على `clsDate`: حساب طول الفترة، فحص تداخل الفترات والمواعيد (Overlap Detection)، والتأكد من وقوع تاريخ معين داخل فترة.

### 🔑 2. المفاهيم الأساسية والفوائد
- تركيب الكائنات (Composition: كلاس الفترات يحتوي على كائنين من كلاس التاريخ: البداية والنهاية).
- خوارزمية فحص تداخل المواعيد (Overlap) - أساسية لأنظمة حجوزات الفنادق والطيران والعيادات.
- حساب مدة الفترة وفحص وجود تاريخ بداخلها.

### 💡 3. ملاحظات وتوجيهات عملية
- تتداخل فترتان إذا وفقط إذا كانت بداية الأولى قبل نهاية الثانية، ونهاية الأولى بعد بداية الثانية.

### 🧠 4. كويز سريع لاختبار فهمك

#### **السؤال الأول: ما هو المبدأ البرمجي الذي يظهر عندما يمتلك كلاس `clsPeriod` كائنات من نوع `clsDate` كأعضاء داخله؟**
- A) الوراثة المتعددة
- B) التركيب والاحتواء (Composition / HAS-A Relationship)
- C) التعددية الشكلية الافتراضية
- D) الصداقة

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `B) مبدأ التركيب والاحتواء (Composition) - الفترة تمتلك تاريخ بداية وتاريخ نهاية.`
</details>

<br>

#### **السؤال الثاني: أي شرط يثبت رياضياً أن الفترتين [S1, E1] و [S2, E2] لا تتقاطعان إطلاقاً؟**
- A) `E1 < S2 || S1 > E2` (الأولى تنتهي قبل بدء الثانية، أو الأولى تبدأ بعد انتهاء الثانية)
- B) `S1 == S2`
- C) `E1 == E2`
- D) `S1 < E1`

<details>
<summary>👀 <b>عرض الإجابة الصحيحة والتفسير</b></summary>

> **الإجابة الصحيحة:** `A) أن تنتهي إحدى الفترتين تماماً قبل أن تبدأ الأخرى.`
</details>

</div>
</details>

---
<div align="center">
  <sub>Developed with 💻 & ☕ by <b>Ahmed Darwish</b> • Master OOP in C++</sub>
</div>
