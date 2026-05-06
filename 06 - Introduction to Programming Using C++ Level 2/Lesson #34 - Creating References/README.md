# 📘 C++ Lesson 34 — Creating References

<p align="center">
  <img src="https://img.shields.io/badge/C++-Reference-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Alias-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Core-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson explains how to create and use **References** in C++.

> 🎯 Goal: Understand how variables can share the same memory

---

## 🧠 What is a Reference?

A reference is:

> An alias (another name) for an existing variable

---

## 🔹 Syntax

```cpp
int a = 10;
int &x = a;
```

---

## 🔹 Key Behavior

* `x` and `a` refer to the same memory
* Any change to one affects the other

---

## 🧪 Example

```cpp
int a = 10;
int &x = a;

x = 50;

cout << a;
```

---

## 🎯 Output

```
50
```

---

## 🔥 Core Rule

> Reference does NOT create a copy — it shares the same address

---

## 🧠 Memory Insight

```
a  ---> 10
x  ---> same address
```

---

## 🔴 Rules

### 1. Must be initialized

```cpp
int &x; // ❌ ERROR
```

---

### 2. Cannot be reassigned

```cpp
int a = 10, b = 20;
int &x = a;

x = b; // changes value of a, not reference
```

---

## 🔹 Multiple References

```cpp
int a = 10;
int &x = a;
int &y = x;
```

✔️ All refer to the same variable

---

## 🔹 Comparison

| Type       | Behavior  |
| ---------- | --------- |
| int x = a  | copy      |
| int &x = a | reference |

---

## 🔹 Common Uses

* Function parameters
* Vectors & loops
* Structs

---

## 💣 Important Note

> Reference can modify original data directly

---

## 🎯 Goal

Master memory-level thinking in C++

---

## 🚀 Next Step

* Const Reference
* Pointer vs Reference
* Advanced memory control
