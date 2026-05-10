# 📘 C++ Lesson 36 — Dereferencing Pointer

<p align="center">
  <img src="https://img.shields.io/badge/C++-Pointers-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Dereferencing-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Core-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson explains:

> How to access and modify values using pointers

---

## 🧠 What is Dereferencing?

Dereferencing means:

> Accessing the value stored at a memory address

---

## 🔹 Syntax

```cpp
*p
```

---

## 🔹 Core Rule

| Expression | Meaning          |
| ---------- | ---------------- |
| p          | address          |
| *p         | value at address |

---

## 🧪 Example

```cpp
int a = 10;
int *p = &a;

cout << *p;
```

---

## 🎯 Output

```text
10
```

---

## 🔥 Modify Original Variable

```cpp
*p = 50;
```

✔️ Changes original value directly

---

## ⚠️ Common Mistakes

* Dereferencing nullptr
* Uninitialized pointers
* Confusing `p` with `*p`

---

## 🧠 Important Concepts

* Memory access
* Address vs value
* Direct variable manipulation

---

## 🚀 Next Step

* Pointer Arithmetic
* Arrays with pointers
* Pointer & Functions
