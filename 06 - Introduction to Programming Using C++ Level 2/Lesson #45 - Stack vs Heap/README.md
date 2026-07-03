# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Memory Management - Stack vs Heap

# 📌 Overview
Explore the structural differences, memory lifetimes, and performance of Stack and Heap segments.

---

# 🧠 Concepts Covered
- Stack: fast, automatic size and scope management
- Heap: manual allocation, large size limit, global persistence
- Heap pointers residing on Stack

---

# 💡 Practical Details

```cpp
#include <iostream>
using namespace std;

int main() {
    int x = 10;     // Stack variable (automatically managed)
    int* p = &x;    // Stack pointer pointing to stack variable

    int* q = new int; // Pointer q on stack, points to dynamically allocated int on Heap
    *q = 50;

    cout << "Stack value x: " << x << endl;
    cout << "Heap value *q: " << *q << endl;

    delete q;       // Free Heap memory; pointer q still exists on stack
    return 0;
}
```

---

# 💡 Key Takeaways
- Stack variables are cleared automatically when scope ends.
- Heap variables remain allocated until explicitly freed via `delete`.
- Stack size is highly limited (often 1MB); Heap size is limited by total system RAM.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.