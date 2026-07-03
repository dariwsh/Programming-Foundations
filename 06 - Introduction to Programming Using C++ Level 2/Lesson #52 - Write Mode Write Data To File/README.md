# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ File Handling - Writing Data to File

# 📌 Overview
Learn how to open, write text to, and close files in C++ using write mode.

---

# 🧠 Concepts Covered
- The `<fstream>` library and file stream variables
- Opening files with `ios::out` (Write Mode)
- Checking if files are open using `is_open()`

---

# 💡 Practical Details

```cpp
#include <fstream>
#include <iostream>
using namespace std;

int main() {
    fstream MyFile;
    MyFile.open("MyFile.txt", ios::out); // Open in write/overwrite mode

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