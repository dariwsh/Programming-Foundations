# 📘 C++ Lesson 33 — Call By Value vs Call By Reference

<p align="center">
  <img src="https://img.shields.io/badge/C++-Functions-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Reference-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Core-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson explains the difference between:

* Call By Value
* Call By Reference

> 🎯 Goal: Understand how data is passed to functions and how it affects variables

---

## 🔴 Call By Value

### 🧠 Concept

> A copy of the variable is passed to the function

---

### 🔹 Example

```cpp id="v1xk4m"
void Increase(int x)
{
    x = x + 1;
}
```

---

### 🔹 Usage

```cpp id="u8pt5q"
int a = 10;
Increase(a);
cout << a;
```

---

### 🎯 Output

```text id="z4sd3v"
10
```

---

### 💣 Explanation

* `x` is a copy of `a`
* Changes do NOT affect original variable

---

## 🔵 Call By Reference

### 🧠 Concept

> The original variable is passed using reference

---

### 🔹 Example

```cpp id="g7b8x1"
void Increase(int &x)
{
    x = x + 1;
}
```

---

### 🔹 Usage

```cpp id="6rxzme"
int a = 10;
Increase(a);
cout << a;
```

---

### 🎯 Output

```text id="yw9h1g"
11
```

---

### 💣 Explanation

* `x` refers to the same memory as `a`
* Changes affect the original variable

---

## 🔥 Key Difference

| Feature          | By Value | By Reference |
| ---------------- | -------- | ------------ |
| What is passed   | Copy     | Original     |
| Memory           | New copy | Same address |
| Affects original | ❌ No     | ✔️ Yes       |

---

## 🧪 Example — Swap

### ❌ By Value

```cpp id="j9e4mc"
void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

✔️ Result:

```text id="fcwh7o"
No change
```

---

### ✔️ By Reference

```cpp id="r6ghmz"
void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
```

✔️ Result:

```text id="q1vj1p"
Values swapped
```

---

## 🧠 Memory Insight

```text id="rdknv9"
Variable = Name + Value + Address
```

---

## 💣 When to Use Reference?

* When you want to modify original data
* When passing large data (vector, struct)
* To improve performance (avoid copy)

---

## ⚠️ Important Notes

* Always use `&` carefully
* Reference can change original data unexpectedly
* Prefer `const &` when you don’t want modification

---

## 🎯 Goal

> Master how functions interact with variables and memory

---

## 🚀 Next Step

* Passing vector by reference
* Passing struct by reference
* Advanced function design
