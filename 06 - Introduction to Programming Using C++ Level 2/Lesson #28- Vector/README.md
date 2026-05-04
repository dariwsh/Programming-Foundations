# 📘 C++ Lesson — Vectors Part 1

<p align="center">
  <img src="https://img.shields.io/badge/C++-STL-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Topic-Vector-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson introduces **Vectors** in C++.

> 🎯 Goal: Understand dynamic arrays and how to use them efficiently.

---

## 🧠 What is a Vector?

A vector is:

> A dynamic array that can grow and shrink during runtime.

---

## 🔹 Declaration

```cpp
#include <vector>
using namespace std;

vector<int> v;
```

---

## 🔹 Initialization

```cpp
vector<int> v = {10, 20, 30};
```

---

## 🔹 Access Elements

```cpp
cout << v[0];
```

---

## 🔹 Looping

### ❌ Copy (Slow)

```cpp
for (int x : v)
```

### ✅ Reference (Fast)

```cpp
for (int &x : v)
```

---

## 🔹 Add Elements

```cpp
v.push_back(10);
```

---

## 🔹 Remove Elements

```cpp
v.pop_back();
```

### ⚠️ Safe Removal

```cpp
if (!v.empty())
    v.pop_back();
```

---

## 🔹 Clear Vector

```cpp
v.clear();
```

---

## 🔹 Useful Functions

| Function | Description        |
| -------- | ------------------ |
| size()   | number of elements |
| empty()  | check if empty     |
| clear()  | remove all         |

---

## 🔹 Vector with Struct

```cpp
struct Employee {
    string name;
    float salary;
};

vector<Employee> v;
```

---

## 🔹 Key Concept

> Vector behaves like a stack (LIFO)

---

## 🧪 Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {1,2,3};

    v.push_back(4);

    for (int &x : v)
        cout << x << " ";
}
```

---

## 🎯 Output

```
1 2 3 4
```

---

## 💣 Common Mistakes

* Using copy instead of reference
* Calling `pop_back()` on empty vector
* Forgetting `#include <vector>`

---

## 🚀 Pro Tip

> Use reference (`&`) in loops for better performance.

---

## ⭐ Next Step

* Vector Part 2
* Advanced STL (list, map, stack)
