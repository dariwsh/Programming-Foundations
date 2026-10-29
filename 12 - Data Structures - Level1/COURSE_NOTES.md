# 📖 Data Structures Level 1 - Detailed Lesson Notes (ملاحظات الدروس)

هذا الملف يحتوي على ملاحظات شاملة ومنظمة لجميع مواضيع الكورس طبقاً لشرح الدكتور وطريقة الشرح المعتمدة كمدرس مساعد.

---

## 📌 المراجعة والأساسيات (Prerequisites Revision)

### 01 - Revision 1D Arrays (المصفوفات أحادية الأبعاد)
- **ما هي؟** مجموعة من العناصر من نفس النوع مخزنة متجاورة في الـ Memory.
- **ليه بنستخدمها؟** للوصول السريع للعناصر عن طريق الـ Index بـ Time Complexity $O(1)$.
- **🎯 Technique الدكتور:** Traversing An Array (التنقل بين عناصر مصفوفة متصلة).
- 🧠 **الخلاصة:**
  - العناصر متجاورة في الـ RAM.
  - الـ Access ممتاز ($O(1)$) بس الـ Size ثابت.
- 🔑 **أهم Syntax:** `int arr[5] = {10, 20, 30, 40, 50};`
- 🎯 **أهم Technique:** استخدام Loops (مثل `for` العادية أو `range-based for`) للـ Traversal.
- ⚠️ **أهم خطأ أتجنبه:** Out of Bounds Access (الوصول لـ Index خارج حجم Array).
- 📖 **كلمات مهمة:**
  - `Array` = مصفوفة
  - `Index` = فهرس / موقع العنصر
  - `Traversal` = المرور على العناصر عنصر عنصر

---

### 02 - Revision 2D Arrays (المصفوفات ثنائية الأبعاد)
- **ما هي؟** جدول مكون من صفوف (Rows) وأعمدة (Columns).
- **ليه بنستخدمها؟** لتمثيل البيانات الشبكية (Grids / Matrices) مثل الألعاب (Tic-Tac-Toe, Chess) أو البيانات الجدولية.
- **🎯 Technique الدكتور:** Nested Loops Traversal (الـ Traversal باستخدام Loop داخل Loop).
- 🧠 **الخلاصة:**
  - الـ Row الأول يتخزن كاملاً ثم الـ Row الثاني (Row-Major Order).
- 🔑 **أهم Syntax:** `int matrix[3][3];`
- 🎯 **أهم Technique:** استخدام 2 Nested Loops للتحكم في الـ Row والـ Column.
- ⚠️ **أهم خطأ أتجنبه:** الخلط بين Index الصف `matrix[row][col]` وIndex العمود.
- 📖 **كلمات مهمة:**
  - `Matrix` = مصفوفة ثنائية / مصفوفة رياضية
  - `Row` = صف
  - `Column` = عمود

---

### 03 - Revision Pointers (المؤشرات والذاكرة)
- **ما هي؟** متغير يخزن عنوان (Memory Address) متغير آخر في الـ RAM.
- **ليه بنستخدمها؟** لأن الـ Linked Data Structures (مثل Linked List, Tree, Graph) تعتمد كلياً على الـ Pointers للربط بين العناصر.
- **🎯 Technique الدكتور:** Dereferencing & Pass-by-Pointer.
- 🧠 **الخلاصة:**
  - `&` تعني "عنوان المتغير" (Address-of Operator).
  - `*` تعني "المحتوى الموجود داخل العنوان" (Dereference Operator).
- 🔑 **أهم Syntax:**
  ```cpp
  int x = 10;
  int* ptr = &x; // ptr يخزن عنوان x
  cout << *ptr;  // طباعة قيمة x (10)
  ```
- 🎯 **أهم Technique:** Pointer Manipulation وربط عناوين الـ Memory.
- ⚠️ **أهم خطأ أتجنبه:** Wild Pointer / Null Pointer Dereferencing (استخدام `*ptr` وهو بيشاور على `NULL` أو مكان غير معروف).
- 📖 **كلمات مهمة:**
  - `Pointer` = مؤشر (متغير يحمل عنوان memory)
  - `Address` = عنوان في الذاكرة
  - `Dereference` = الوصول لقيمة العنوان

---

### 04 - Revision Dynamic Arrays (الذاكرة الديناميكية)
- **ما هي؟** حجز مساحة للـ Array أثناء تشغيل البرنامج (Run-time) في منطقة الـ Heap.
- **ليه بنستخدمها؟** لأن الـ Static Array حجمها ثابت، بينما Dynamic Array يمكنك تحديد حجمها حسب حاجة المستخدم.
- **🎯 Technique الدكتور:** Manual Dynamic Memory Allocation & Deallocation (`new` and `delete`).
- 🧠 **الخلاصة:**
  - استخدام `new` لحجز المكان في الـ Heap.
  - استخدام `delete[]` لتحرير المساحة ومنع الـ Memory Leak.
- 🔑 **أهم Syntax:**
  ```cpp
  int* arr = new int[size];
  // استخدام الـ Array
  delete[] arr; // مهم جداً!
  ```
- 🎯 **أهم Technique:** Managing Heap Memory.
- ⚠️ **أهم خطأ أتجنبه:** Memory Leak (نسيان استخدام `delete[]` بعد الانتهاء من الـ Dynamic Array).
- 📖 **كلمات مهمة:**
  - `Heap` = كومة الذاكرة (الذاكرة الديناميكية)
  - `Stack` = ذاكرة الاستدعاء (الذاكرة الاستاتيكية)
  - `Memory Leak` = تسريب الذاكرة

---

### 05 - Revision Recursion (الاستدعاء الذاتي)
- **ما هي؟** دالة تنادي نفسها لحل مشكلة أصغر من نفس النوع.
- **ليه بنستخدمها؟** تبسيط الحلول في الـ Trees و Graphs والـ Divide and Conquer.
- **🎯 Technique الدكتور:** Call Stack Visualization & Base Case Specification.
- 🧠 **الخلاصة:**
  - يتكون الـ Recursion من: **Base Case** (شرط التوقف) + **Recursive Call** (استدعاء الدالة لنفسها).
- 🔑 **أهم Syntax:**
  ```cpp
  void print(int n) {
      if (n == 0) return; // Base Case
      cout << n << " ";
      print(n - 1);       // Recursive Call
  }
  ```
- 🎯 **أهم Technique:** التفكير التراجعي (Sub-problems) وفهم الـ Call Stack.
- ⚠️ **أهم خطأ أتجنبه:** Stack Overflow (نسيان الـ Base Case أو كتابته بشرط خاطئ فتظل الدالة تنادي نفسها للأبد).
- 📖 **كلمات مهمة:**
  - `Recursion` = الاستدعاء الذاتي للدالة
  - `Base Case` = شرط توقف Recursion
  - `Call Stack` = مكدس الاستدعاءات في نظام التشغيل

---

## 📚 Data Structures Core (الهياكل الخطية الأساسية)

### 06 & 07 - Stack (المكدس) & Stack Swap
- **ما هو؟** structure خطي يتبع مبدأ **LIFO** (Last-In, First-Out) - آخر عنصر يدخل هو أول عنصر يخرج.
- **ليه بنستخدمه؟** في عمليات الـ Undo/Redo، تقييم التعابير الرياضية (Expression Evaluation)، واستدعاءات الدوال في الـ Memory (Call Stack).
- 🧠 **الخلاصة:**
  - الإضافة والمسح يكون من طرف واحد فقط وهو الـ **Top**.
- 🔑 **أهم Syntax (STL Stack):**
  ```cpp
  #include <stack>
  stack<int> stk;
  stk.push(10);     // إضافة
  stk.pop();        // حذف Top
  int val = stk.top(); // قراءة Top
  stk.swap(stk2);   // تبديل محتوى 2 Stacks
  ```
- 🎯 **أهم Technique:** LIFO Processing.
- ⚠️ **أهم خطأ أتجنبه:** عمل `stk.top()` أو `stk.pop()` والـ Stack فاضي (`stk.empty()`).
- 📖 **كلمات مهمة:**
  - `Stack` = مكدس
  - `Push` = إدخال عنصر
  - `Pop` = إخراج عنصر
  - `Top` = أعلى عنصر في Stack

---

### 08 & 09 - Queue (الطابور) & Queue Swap
- **ما هو؟** structure خطي يتبع مبدأ **FIFO** (First-In, First-Out) - أول عنصر يدخل هو أول عنصر يخرج.
- **ليه بنستخدمه؟** في جدولة المهام (Printer Spooling, CPU Scheduling)، وطوابير الانتظار.
- 🧠 **الخلاصة:**
  - الإضافة تكون من الـ **Back (Rear)**، والحذف يكون من الـ **Front**.
- 🔑 **أهم Syntax (STL Queue):**
  ```cpp
  #include <queue>
  queue<int> q;
  q.push(10);      // إضافة في الـ Back
  q.pop();         // حذف من الـ Front
  int f = q.front();
  int b = q.back();
  ```
- 🎯 **أهم Technique:** FIFO Processing.
- ⚠️ **أهم خطأ أتجنبه:** محاولة وصول لـ `front()` والطابور فارغ.
- 📖 **كلمات مهمة:**
  - `Queue` = طابور
  - `Front` = مقدمة الطابور
  - `Back / Rear` = مؤخرة الطابور

---

### 10 إلى 16 - Singly Linked List (القائمة الموصولة الأحادية)
- **ما هي؟** سلسلة من الـ **Nodes** المخزنة في أماكن متفرقة في الـ Heap، كل Node تحتوي على data ومؤشر `next` يشير للـ Node التالية.
- **ليه بنستخدمها؟** لأن حجمها **Dynamic 100%**، والإضافة والحذف في البداية بـ $O(1)$ دون الحاجة لإعادة تشكيل أو تحريك بقية العناصر مثل Array.
- 🧠 **الخلاصة:**
  - تبدأ دائماً بـ مؤشر `head`.
  - آخر Node تشير دائماً إلى `NULL`.
- 🔑 **أهم Syntax:**
  ```cpp
  class Node {
  public:
      int value;
      Node* next;
  };
  ```
- 🎯 **أهم Technique:** **Pointers Manipulation & Linked List Traversal**
  - **Traversal:** `while(head != NULL) { head = head->next; }`
  - **Insert Head ($O(1)$):** `newNode->next = head; head = newNode;`
  - **Insert End ($O(n)$):** الوصول لأخر node جعل `current->next = newNode;`
  - **Delete Node:** تعديل `prev->next = current->next;` ثم `delete current;`
- ⚠️ **أهم خطأ أتجنبه:**
  - إضاعة الـ `head` أو الروابط (Losing pointer references) مما يسبب فقدان القائمة كاملة في الذاكرة.
- 📖 **كلمات مهمة:**
  - `Singly Linked List` = قائمة موصولة أحادية الاتجاه
  - `Node` = عقدة (عنصر يحمل بيانات ومؤشر)
  - `Head` = مؤشر بداية القائمة

---

### 17 إلى 24 - Doubly Linked List (القائمة الموصولة الثنائية)
- **ما هي؟** قائمة موصولة تحتوي فيها كل Node على **مؤشرين**: `next` (للعقدة التالية) و `prev` (للعقدة السابقة).
- **ليه بنستخدمها؟** تسمح بالـ Traversal في الاتجاهين (Forward & Backward)، وتسهل عمليات الحذف والإضافة قبل أو بعد أي Node بدون الحاجة لتتبع الـ Predecessor يدويًا.
- 🧠 **الخلاصة:**
  - كل Node تعرف من قبلها ومن بعدها.
  - تحتاج تعديل 4 مؤشرات عند الإضافة أو الحذف في منتصف القائمة.
- 🔑 **أهم Syntax:**
  ```cpp
  class Node {
  public:
      int value;
      Node* next;
      Node* prev;
  };
  ```
- 🎯 **أهم Technique:** Two-Way Pointer Re-linking (تحديث روابط `next` و `prev` بحذر وبترتيب صحيح).
- ⚠️ **أهم خطأ أتجنبه:** نسيا تحديث الـ `prev` pointer للعقدة المجاورة فيؤدي ذلك لـ Dangling Pointer أو كسر الاتجاه المعاكس.
- 📖 **كلمات مهمة:**
  - `Doubly Linked List` = قائمة موصولة ثنائية الاتجاه
  - `Prev (Previous)` = المؤشر للعقدة السابقة

---

### 25 - STL Map (الخريطة / القاموس)
- **ما هي؟** Structure يخزن البيانات على هيئة أزواج **Key-Value Pairs**، حيث يكون كل Key فريد لا يتكرر.
- **ليه بنستخدمها؟** للبحث السريع عن العناصر باستخدام Key بدلاً من الـ Index العددي.
- 🧠 **الخلاصة:**
  - في C++ STL، تُنفذ الـ `std::map` داخلياً باستخدام Red-Black Tree (Self-balancing Binary Search Tree) وتكون العناصر مرتبة بحسب الـ Key، والبحث فيها بـ $O(\log n)$.
- 🔑 **أهم Syntax:**
  ```cpp
  #include <map>
  map<string, int> studentGrades;
  studentGrades["Ahmed"] = 95;
  studentGrades["Ali"] = 88;
  cout << studentGrades["Ahmed"];
  ```
- 🎯 **أهم Technique:** Key-Based Associative Lookup.
- ⚠️ **أهم خطأ أتجنبه:** البحث بـ Index غير موجود بأسلوب `map[key]` يتسبب في إنشاء عنصر جديد بقيمة افتراضية إذا لم ينتبه المبرمج!
- 📖 **كلمات مهمة:**
  - `Map` = خريطة بيانات ترابطية
  - `Key` = المفتاح الفريد
  - `Value` = القيمة المترابطة بالمفتاح

---

### 26 - C++ Union (الاتحاد في الذاكرة)
- **ما هي؟** User-Defined Data Type يشبه الـ `struct` لكن كل أعدائه يتشاركون **نفس المكان في الـ Memory**.
- **ليه بنستخدمها؟** لتوفير المساحة في الـ Memory عندما نحتاج تتبع قيمة واحدة فقط من بين عدة أنواع في أي وقت.
- 🧠 **الخلاصة:**
  - حجم الـ `union` يساوي حجم أكبر متغير فيه فقط.
- 🔑 **أهم Syntax:**
  ```cpp
  union Data {
      int i;
      float f;
      char c;
  };
  ```
- 🎯 **أهم Technique:** Memory Sharing & Overlapping Attributes.
- ⚠️ **أهم خطأ أتجنبه:** كتابة قيمة في متغيّر ثم قراءة متغير آخر من نفس الـ Union فـ يُقرأ كبيانات مشوهة (Overwritten memory).
- 📖 **كلمات مهمة:**
  - `Union` = اتحاد في الذاكرة
  - `Shared Memory` = ذاكرة مشتركة

---
*هذا الملف جاهز ومحدث ومطابق تماماً لمنهج الدكتور Mohamed Abu-Hadhoud (Course 12 - Data Structures Level 1).*
