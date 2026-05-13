# 📘 C++ Lesson 39 — Call by Reference Using Pointers

<p align="center">
  <img src="https://img.shields.io/badge/C++-Pointers-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Call%20By%20Reference-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Intermediate-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson explains how pointers can be used to:

* Pass addresses
* Modify original variables
* Avoid unnecessary copying

---

## 🧠 Core Concept

> Instead of sending values,
> we send memory addresses.

---

## 🔹 Example

```cpp id="8jlwm2"
void swap(int *n1, int *n2)
{
    int temp;

    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
```

---

## 🔥 Key Idea

```text id="ujlwm5"
*n1 modifies original variable
```

---

## 🧪 Function Call

```cpp id="kjlwm1"
swap(&a, &b);
```

---

## 🧠 Memory Model

| Variable | Meaning      |
| -------- | ------------ |
| n1       | address of a |
| *n1      | value of a   |

---

## ⚠️ Common Mistakes

* Passing value instead of address
* Forgetting dereference `*`
* Invalid pointers

---

## 🚀 Why Use It?

* Direct memory access
* Efficient data modification
* Useful in large systems and data structures

---

## 🧠 Professional Insight

Pointers allow:

> Indirect manipulation of caller memory.

---

## 📚 Next Step

* Pointer Arithmetic
* Arrays & Pointers
* Dynamic Memory
