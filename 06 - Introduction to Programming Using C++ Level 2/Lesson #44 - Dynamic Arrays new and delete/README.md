# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Memory Management - Dynamic Arrays

# 📌 Overview
Learn how to dynamically allocate arrays at runtime using dynamic size input.

---

# 🧠 Concepts Covered
- Dynamic array allocation using `new[]`
- deallocating arrays using `delete[]`
- Pointer arithmetic and array subscripts

---

# 💡 Practical Details

```cpp
#include <iostream>
using namespace std;

int main() {
    int NumberOfStudents;
    cout << "Enter total Number of Students: ";
    cin >> NumberOfStudents;

    // allocate dynamic array
    float* ptr = new float[NumberOfStudents];

    cout << "Enter Grades of Students:\n";
    for (int i = 0; i < NumberOfStudents; i++) {
        cout << "Student " << i + 1 << " : ";
        cin >> *(ptr + i); // or ptr[i]
    }

    // Find max grade
    float max = ptr[0];
    for (int i = 1; i < NumberOfStudents; i++) {
        if (ptr[i] > max) {
            max = ptr[i];
        }
    }

    cout << "\nMaximum Grade: " << max << endl;

    // deallocate array memory using delete[]
    delete[] ptr;
    return 0;
}
```

---

# 💡 Key Takeaways
- Use `new T[size]` to allocate a dynamic array of size determined at runtime.
- Always use `delete[] ptr` instead of `delete ptr` to free arrays.
- Access dynamic arrays using subscripts `ptr[i]` or pointer arithmetic `*(ptr + i)`.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.