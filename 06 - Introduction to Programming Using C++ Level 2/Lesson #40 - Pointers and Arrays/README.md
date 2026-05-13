# 📘 C++ Lesson 40 — Pointers and Arrays

<p align="center">
  <img src="https://img.shields.io/badge/C++-Pointers-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/C++-Arrays-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Concept-Pointer%20Arithmetic-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson explains the deep relationship between:

* Arrays
* Memory addresses
* Pointers
* Pointer arithmetic

---

## 🧠 Core Idea

> Array name is the address of the first element.

---

## 🔹 Example

```cpp id="x1jlwm"
int arr[4] = {10,20,30,40};

int *ptr = arr;
```

---

## 🔥 Pointer Arithmetic

| Expression | Meaning                  |
| ---------- | ------------------------ |
| ptr        | address of first element |
| ptr + 1    | next element address     |
| *(ptr + 1) | value of next element    |

---

## 🧪 Example

```cpp id="z4jlwm"
cout << *(ptr + 2);
```

---

## 🎯 Output

```text id="v8jlwm"
30
```

---

## 🧠 Important Insight

```text id="b2jlwm"
arr[i]
=
*(arr + i)
```

---

## ⚠️ Important Notes

* Pointer arithmetic depends on data type size
* Arrays and pointers are closely related
* Dereferencing accesses actual values

---

## 🚀 Next Step

* Pointer Arithmetic Advanced
* Dynamic Arrays
* Memory Traversal
