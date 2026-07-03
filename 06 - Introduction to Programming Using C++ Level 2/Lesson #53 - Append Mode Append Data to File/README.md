# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ File Handling - Append Mode

# 📌 Overview
Learn how to open files in append mode to write new content without deleting previous data.

---

# 🧠 Concepts Covered
- File appending using `ios::app` flag
- Combining stream modes (`ios::out | ios::app`)

---

# 💡 Practical Details

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream MyFile;
    // Open in output + append mode
    MyFile.open("MyFile.txt", ios::out | ios::app);

    if (MyFile.is_open()) {
        MyFile << "

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.