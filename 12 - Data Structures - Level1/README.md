# 📚 مرجع مراجعة الأساسيات قبل كورس هياكل البيانات (Data Structures - Level 1)

أهلاً بك! هذا المجلد يحتوي على **مرجع شامل ومُنظّم** للمفاهيم الأساسية التي تحتاج إلى إتقانها تماماً قبل البدء في دراسة **هياكل البيانات (Data Structures - Level 1)** باستخدام لغة **C++**.

---

## 📂 فهرس الموضوعات والمشاريع

| # | اسم الموضوع | المجلد / الملف | المفاهيم الأساسية |
|---|---|---|---|
| 1️⃣ | **المصفوفات أحادية الأبعاد**<br>*(1D Arrays)* | [`Revtion Array`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/Revtion%20Array/Revtion%20Array/Revtion%20Array.cpp) | • التخزين المتتابع في الذاكرة (Contiguous Memory)<br>• التكرار التقليدي والـ Range-based For Loop<br>• حساب المتوسط، أصغر/أكبر عنصر، وعكس العناصر |
| 2️⃣ | **المصفوفات ثنائية الأبعاد**<br>*(2D Arrays / Matrices)* | [`Two Dimensional Arrays`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/Two%20Dimensional%20Arrays/Two%20Dimensional%20Arrays/Two%20Dimensional%20Arrays.cpp) | • مصفوفة الصفوف والأعمدة (Row-Major Order)<br>• جدول الضرب 10x10 وتنسيق الطباعة<br>• حساب مجموع الصفوف/الأعمدة والقطر الرئيسي والفرعي<br>• تدويـر المصفوفة (Matrix Transpose) |
| 3️⃣ | **المؤشرات والذاكرة**<br>*(Pointers & Memory)* | [`REVTION POINTER`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/REVTION%20POINTER/REVTION%20POINTER/REVTION%20POINTER.cpp) | • معامل العنوان `&` ومعامل القيمة `*`<br>• تعديل القيم عبر الذاكرة وإعادة توجيه المؤشر<br>• تجنب الأخطاء باستخدام `nullptr`<br>• التمرير بالمؤشر والمرجع (Pass by Pointer/Ref)<br>• حسابات المؤشرات (Pointer Arithmetic) |
| 4️⃣ | **المصفوفات الديناميكية**<br>*(Dynamic Memory Allocation)* | [`Dynmaic Array`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/Dynmaic%20Array/Dynmaic%20Array/Dynmaic%20Array.cpp) | • الفرق بين ذاكرة الـ Stack و ذاكرة الـ Heap<br>• حجز الذاكرة ديناميكياً باستخدام `new` و `new[]`<br>• تحرير الذاكرة لمنع التسريب `delete[]`<br>• تكبير حجم المصفوفة الديناميكية يدوياً (Array Resizing) |
| 5️⃣ | **العودية / الاستدعاء الذاتي**<br>*(Recursion)* | [`Recursion revion`](file:///i:/Programming-Foundations/12%20-%20Data%20Structures%20-%20Level1/Recursion%20revion/Recursion%20revion/Recursion%20revion.cpp) | • شرط التوقف (Base Case) والخطوة التكرارية<br>• فهم مكدس الاستدعاءات (Call Stack)<br>• الأمثلة: الأعداد، الأسس $Base^{Power}$، المضروب $N!$، فيبوناتشي، ومجموع عناصر المصفوفة |

---

## 🛠️ كيفية التشغيل والبناء (Building & Running)

جميع المشاريع جاهزة ومصممة لبيئة **Visual Studio**:
1. يمكنك فتح أي ملف `.slnx` أو `.vcxproj` مستهدف داخل المجلدات في Visual Studio.
2. أو تجميعها عبر مشغل الأوامر (MSBuild / C++ Compiler):

```powershell
# تجميع مشروع المصفوفات الديناميكية مثلاً:
MSBuild "Dynmaic Array\Dynmaic Array\Dynmaic Array.vcxproj" /p:Configuration=Debug /p:Platform=x64

# تشغيل الملف التنفيذي الناتج:
& "Dynmaic Array\Dynmaic Array\x64\Debug\Dynmaic Array.exe"
```

---

## 💡 نصائح مهمة قبل بدء كورس هياكل البيانات

1. **إتقان المؤشرات (Pointers):** هياكل البيانات مثل **Linked Lists, Trees, Graphs** تعتمد كلياً على المؤشرات والعناوين في الذاكرة.
2. **إدارة الذاكرة الديناميكية (Dynamic Allocation):** تذكر دائماً استخدام `delete[]` لكل عملية `new[]` لحماية الذاكرة من التسريب (Memory Leaks).
3. **التفكير العودي (Recursive Thinking):** العديد من الخوارزميات (مثل Quick Sort, Merge Sort, Tree Traversals) تعتمد بشكل أساسي على فهمك للدوال العودية ومكدس الاستدعاءات (Call Stack).

---
*تم الترتيب والشرح وتجهيز كافة الأمثلة البرمجية والتعليقات التوضيحية بنجاح.*
