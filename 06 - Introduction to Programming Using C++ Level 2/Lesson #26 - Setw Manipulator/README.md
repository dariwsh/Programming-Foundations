# 📘 C++ Lesson 26 — setw Manipulator

<p align="center">
  <img src="https://img.shields.io/badge/C++-Formatting-blue?style=for-the-badge&logo=c%2B%2B" />
  <img src="https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge" />
  <img src="https://img.shields.io/badge/Focus-Output%20Formatting-orange?style=for-the-badge" />
</p>

---

## 👨‍💻 Author

**Ahmed Darwish**

---

## 📌 Overview

This lesson introduces the `setw` manipulator from `<iomanip>` used to control output formatting in C++.

> 🎯 Goal: Print clean, aligned, and professional console output.

---

## 🧠 What is `setw`?

`setw(n)` sets the **minimum width** for the next output element.

```cpp
#include <iomanip>
cout << setw(5) << 42;
```

**Output**

```
   42
```

---

## ⚠️ Important Rule

> `setw` affects **ONLY the next element**

```cpp
cout << setw(5) << 1 << 2;
```

**Output**

```
    12
```

---

## 🔹 Alignment

### Right (Default)

```cpp
cout << setw(5) << 10;
```

### Left

```cpp
cout << left << setw(5) << 10;
```

---

## 🔹 Fill Character

```cpp
cout << setfill('*') << setw(5) << 7;
```

**Output**

```
****7
```

---

## 🔹 Persistent vs Non-Persistent

| Feature      | Behavior   |
| ------------ | ---------- |
| `setw`       | One-time   |
| `setfill`    | Persistent |
| `left/right` | Persistent |

---

## 🔹 Table Formatting (Real Use Case)

```cpp
cout << left << setw(10) << "Name"
     << setw(5) << "Age" << endl;

cout << setw(10) << "Ahmed"
     << setw(5) << 20 << endl;
```

**Output**

```
Name      Age
Ahmed     20
```

---

## 🧪 Examples

```cpp
cout << setw(4) << 5;                //    5
cout << left << setw(5) << 3;        // 3    
cout << setfill('0') << setw(4) << 8;// 0008
cout << setw(3) << 1 << setw(3) << 2;//   1  2
```

---

## 💣 Common Mistakes

### ❌ Expecting setw to apply to all elements

```cpp
cout << setw(3) << 1 << 2 << 3;
```

### ✅ Correct Output

```
  123
```

---

## 🎯 Key Takeaways

* `setw(n)` → applies once
* `setfill(c)` → stays active
* `left/right` → control alignment
* Always include `<iomanip>`

---

## 🚀 Pro Tip

> Formatting output is not optional — it's a sign of clean and professional code.

---

## ⭐ Next Step

Combine `setw` with:

* loops
* arrays
* tables

to build real console UIs.
