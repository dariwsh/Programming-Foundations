# 📘 C++ Lesson 37 — Common Pointer Mistakes

<p align="center">
  <img src="https://img.shields.io/badge/C++-Pointers-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Memory%20Safety-red?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Intermediate-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson covers the most dangerous and common mistakes when working with pointers in C++.

> 🎯 Goal: Learn how to avoid invalid memory access and undefined behavior.

---

## 🧠 Topics Covered

* Uninitialized pointers
* nullptr dereference
* Dangling pointers
* Memory leaks
* Double delete
* Wrong pointer usage

---

## 🔥 Core Idea

> Most C++ crashes come from invalid memory access.

---

## ⚠️ Common Mistakes

| Mistake             | Result             |
| ------------------- | ------------------ |
| Garbage pointer     | Crash              |
| nullptr dereference | Segmentation fault |
| Dangling pointer    | Undefined behavior |
| Memory leak         | RAM consumption    |
| Double delete       | Heap corruption    |

---

## 🧪 Example

```cpp id="jlwm2z"
int *p = nullptr;

cout << *p;
```

---

## 🚨 Result

```text id="jlwm8n"
Crash
```

---

## 🧠 Important Insight

> Pointer bugs are memory bugs.

---

## 🔥 Best Practices

* Initialize every pointer
* Use nullptr
* Delete allocated memory
* Avoid dangling pointers
* Prefer smart pointers in modern C++

---

## 🚀 Next Step

* Dynamic Memory
* Smart Pointers
* Memory Ownership
