# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Memory Management - new and delete

# 📌 Overview
Learn how to dynamically allocate and deallocate memory on the heap in C++.

---

# 🧠 Concepts Covered
- Dynamic memory allocation (Heap vs Stack)
- The `new` operator for heap allocation
- The `delete` operator to free memory and prevent leaks

---

# 💡 Practical Details

```cpp
#include <iostream>
using namespace std;

int main() {
    // 1. Declare pointers
    int* ptrx = new int;      // Dynamically allocate an int on the Heap
    float* ptry = new float;  // Dynamically allocate a float on the Heap

    // 2. Assign values
    *ptrx = 45;
    *ptry = 55.25f;

    cout << "Value of integer: " << *ptrx << endl;
    cout << "Value of float: " << *ptry << endl;

    // 3. deallocate memory (CRITICAL to avoid memory leaks)
    delete ptrx;
    delete ptry;

    return 0;
}
```

---

# 💡 Key Takeaways
- Dynamic allocation happens at runtime on the Heap.
- Always match every `new` with a `delete`.
- Forgetting to `delete` causes memory leaks, which consume system RAM.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.