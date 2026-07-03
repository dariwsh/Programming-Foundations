# 📘 Introduction
In this lesson, we learned about:

# 📘 C++ Lesson — Pointers (Basics)

<p align="center">
  <img src="https://img.shields.io/badge/C++-Pointers-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Memory-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Core-green?style=for-the-badge"/>
</p>

---

# 👨‍💻 Author

Ahmed Darwish

---

# 📌 Overview

This lesson introduces **Pointers**, one of the most powerful features in C++.

> 🎯 Goal: Understand memory-level programming

---

# 🧠 Concepts Covered

A pointer is:

> A variable that stores the memory address of another variable

---

# 🔹 Syntax

```cpp
int a = 10;
int *p = &a;
```

---

# 🔹 Key Concepts

| Concept | Description      |
| ------- | ---------------- |
| `a`     | value            |
| `&a`    | address          |
| `p`     | stores address   |
| `*p`    | value at address |

---

# 🔹 Dereferencing

```cpp
*p
```

✔️ Access value using pointer

---

# 💡 Practical Details

```cpp
int a = 10;
int *p = &a;

*p = 20;

cout << a;
```

---

# 🎯 Output

```
20
```

---

# 🔥 Key Idea

> Changing `*p` changes the original variable

---

# 🔥 Pro Tips & Rules

* Using uninitialized pointer
* Dereferencing null pointer
* Type mismatch
* Forgetting `*`

---

# 🧠 Why Use Pointers?

* Direct memory access
* Performance optimization
* Advanced data structures
* Dynamic memory allocation

---

# 🚀 Next Step

* Pointer vs Reference
* Pointer Arithmetic
* Arrays with pointers

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.