# 📘 Introduction
In this lesson, we learned about:

# Lesson #21 - Automatic Variables in C++

# 📌 Overview
In this lesson, we explore **Automatic Variables** in C++, which are the default type of local variables created inside functions or blocks.

---

# 🧠 Concepts Covered

An **automatic variable** is a variable that:
- Is declared inside a function or block
- Is created automatically when the function starts
- Is destroyed when the function ends

> These variables are called "automatic" because their lifetime is managed automatically.

---

# ⚙️ Example

```cpp
#include <iostream>
using namespace std;

void test() {
    int x = 0;
    x++;
    cout << x << endl;
}

int main() {
    test();
    test();
    test();
}

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.