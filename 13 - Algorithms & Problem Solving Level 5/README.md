# Algorithms & Problem Solving - Level 5 (Data Structures in C++)

م مرحباً بك في مستودع **خوارزميات وحل المشاكل - المستوى الخامس (Algorithms & Problem Solving Level 5)**.
يحتوي هذا المستودع على تطبيق عملي لمفاهيم **القوالب (Templates)** و **القوائم المترابطة (Singly & Doubly Linked Lists)** بلغة C++.

---

## 📁 الهيكل التنظيمي للمشروع (Folder Structure)

تم تنظيم وترتيب المجلدات بشكل يسهل تصفحه وفهمه كالآتي:

| # | اسم المجلد | الوصف والعمليات المطبقة |
|---|---|---|
| **01** | `01 - Template Functions` | مراجعة الـ Template Functions (`myMax`, `myMin`, `myMax3`, `isEqual`) وإمكانية استخدام أنواع بيانات مختلفة. |
| **02** | `02 - Template Classes` | إنشاء كلاس عام (Generic Class) باستعمال `template <class T>` لتنفيذ حاسبة تدعم أنواعاً مختلفة مثل `int` و `float`. |
| **03** | `03 - Singly Linked List Implementation` | البنية الأساسية للقائمة المترابطة الأحادية (Singly Linked List Node) والربط بين العناصر يدوياً وطباعتها. |
| **04** | `04 - Singly Linked List - Insert At Beginning` | دالة الإضافة في بداية القائمة المترابطة الأحادية (`InsertAtBeginning`). |
| **05** | `05 - Singly Linked List - Find Node` | البحث عن عنصر بالـ Value، والإضافة بعد عقدة محددة (`InsertAfter`) والإضافة في النهاية (`InsertAtEnd`). |
| **06** | `06 - Singly Linked List - Delete Node` | حذف عقدة محددة بالقيمة (`DeleteNode`) وإدارة الذاكرة الديناميكية (`delete`). |
| **07** | `07 - Singly Linked List - Delete First and Last Node` | عمليات حذف أول عقدة (`DeleteFirstNode`) وآخر عقدة (`DeleteLastNode`) من القائمة الأحادية. |
| **08** | `08 - Doubly Linked List Implementation` | كلاس العقدة المزدوجة (Doubly Linked List Node) المحتوي على مؤشرين (`next` و `prev`) والتنقل في الاتجاهين. |
| **09** | `09 - Doubly Linked List - Insert At Beginning` | الإضافة في بداية القائمة المزدوجة وشرح خطوات التوصيل الأربعة وطباعة تفاصيل العقد. |
| **10** | `10 - Doubly Linked List - Find Node` | دالة البحث عن عنصر داخل القائمة المترابطة المزدوجة (`Find`). |
| **11** | `11 - Doubly Linked List - Insert After Node` | الإضافة بعد عقدة معينة والإضافة في نهاية القائمة المزدوجة (`InsertAfter` & `InsertAtEnd`). |
| **12** | `12 - Doubly Linked List - Delete Node` | عمليات الحذف الكترونية المتقدمة للقائمة المزدوجة (حذف عقدة بواسطة المؤشر، حذف العقدة الأولى، وحذف العقدة الأخيرة). |
| **13** | `13 - Project 1` | مشروع تطبيقي/بيئة اختبار أولية. |

---

## 💡 المفاهيم الأساسية المكتسبة (Key Concepts)

### 1. C++ Templates
- **Template Functions**: كتابة دالة واحدة تعمل مع مختلف أنواع البيانات بدون تكرار الكود.
- **Template Classes**: بناء كلاسات مرنة تتكيف مع نوع البيانات المحدد أثناء إنشاء الكائن (Instantiation).

### 2. Singly Linked List (القائمة المترابطة الأحادية)
- تتكون من عقد (Nodes)، كل عقدة تحتوي على `value` ومؤشر `next` يشير للعقدة التالية.
- العمليات المغطاة: الإضافة في البداية والنهاية، البحث، الحذف حسب القيمة، حذف العقدة الأولى والأخيرة.

### 3. Doubly Linked List (القائمة المترابطة المزدوجة)
- كل عقدة تحتوي على `value` ومؤشرين: `next` للعقدة التالية و `prev` للعقدة السابقة.
- تمكنك من التنقل للأمام وللخلف داخل القائمة وتسهل عملية الحذف والإضافة.

---

## 🛠️ كيفية التشغيل (How to Run)

يمكنك فتح التشغيل عبر Visual Studio:
1. افتح مجلد الدرس المطلوب.
2. افتح ملف الحل `.sln` أو ملف الكود `.cpp`.
3. قم بملء وتشغيل البرنامج عبر **Ctrl + F5** أو **F5**.

أو باستخدام أي مترجم C++ يعمل من السطر الأوامر (g++ / clang++):
```bash
g++ "01 - Template Functions/01-  Review Template Functions/01-  Review Template Functions.cpp" -o output
./output
```

---

✨ *تم تنظيم وترتيب هذا المستودع وكتابة التعليقات والتوضيحات وتصحيح الأخطاء بعناية.*
