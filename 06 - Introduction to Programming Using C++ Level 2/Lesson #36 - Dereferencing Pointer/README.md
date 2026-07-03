# 📘 Introduction
In this lesson, we learned about:

# 📘 C++ Lesson 36 — Dereferencing Pointer

<p align="center">
  <img src="https://img.shields.io/badge/C++-Pointers-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Dereferencing-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Core-green?style=for-the-badge"/>
</p>

---

# 👨‍💻 Author

Ahmed Darwish

---

# 📌 Overview

This lesson explains:

> How to access and modify values using pointers

---

# 🧠 Concepts Covered

Dereferencing means:

> Accessing the value stored at a memory address

---

# 🔹 Syntax

```cpp
*p
```

---

# 🔹 Core Rule

| Expression | Meaning          |
| ---------- | ---------------- |
| p          | address          |
| *p         | value at address |

---

# 💡 Practical Details

```cpp
int a = 10;
int *p = &a;

cout << *p;
```

---

# 🎯 Output

```text
10
```

---

# 🔥 Modify Original Variable

```cpp
*p = 50;
```

✔️ Changes original value directly

---

# 🔥 Pro Tips & Rules

* Dereferencing nullptr
* Uninitialized pointers
* Confusing `p` with `*p`

---

# 🧠 Important Concepts

* Memory access
* Address vs value
* Direct variable manipulation

---

# 🚀 Next Step

* Pointer Arithmetic
* Arrays with pointers
* Pointer & Functions

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.