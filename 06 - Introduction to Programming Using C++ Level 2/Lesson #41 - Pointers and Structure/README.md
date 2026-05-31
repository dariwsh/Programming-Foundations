# 📘 C++ Lesson 41 — Pointers with Structs

<p align="center">
  <img src="https://img.shields.io/badge/C++-Pointers-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/C++-Structs-orange?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Concept-Arrow%20Operator-green?style=for-the-badge"/>
</p>

---

# 👨‍💻 Author

Ahmed Darwish

---

# 📌 Overview

This lesson explains how to use:

* Pointers with structs
* Accessing struct members through pointers
* The `->` operator
* Relationship between pointers and objects

---

# 🧠 Core Concept

A pointer can point to:

* Variables
* Arrays
* Structs
* Objects

In this lesson:

```text id="v1p7rk"
Pointer points to a struct object
```

---

# 🔹 Struct Example

```cpp id="m4x2zn"
struct stEmployee
{
    string Name;
    float Salary;
};
```

---

# 🔥 Creating Object and Pointer

```cpp id="t8q5jf"
stEmployee Employee1;
stEmployee *ptr;
```

---

# 🧠 Pointer Assignment

```cpp id="k3n9vu"
ptr = &Employee1;
```

Now:

```text id="d6w1xm"
ptr stores address of Employee1
```

---

# 🔹 Normal Access

```cpp id="h7v4pa"
Employee1.Name
```

Uses:

```text id="q2m8fs"
Dot Operator
```

---

# 🔥 Pointer Access

```cpp id="c5z1yw"
ptr->Name
```

Uses:

```text id="x9t3kr"
Arrow Operator
```

---

# 🧠 Important Insight

```text id="n4p6ju"
-> means:
Dereference then access member
```

---

# 🔥 Equivalent Syntax

```cpp id="r8m2xo"
ptr->Name
```

is equivalent to:

```cpp id="f1v7kq"
(*ptr).Name
```

---

# 🧠 Memory Model

```text id="w3x9jt"
Employee1
 ├── Name
 └── Salary

ptr
 └── stores address of Employee1
```

---

# 🔥 Full Example

```cpp id="u6q2zp"
#include <iostream>
using namespace std;

struct stEmployee
{
    string Name;
    float Salary;
};

int main()
{
    stEmployee Employee1, *ptr;

    Employee1.Name = "Mohammed Abu-Hadhoud";
    Employee1.Salary = 5000;

    ptr = &Employee1;

    cout << ptr->Name << endl;
    cout << ptr->Salary << endl;

    return 0;
}
```

---

# 🎯 Output

```text id="y5m8rk"
Mohammed Abu-Hadhoud
5000
```

---

# ⚠️ Common Mistakes

---

## ❌ Wrong

```cpp id="b2q7vx"
ptr.Name
```

---

## ✔️ Correct

```cpp id="j9w4kn"
ptr->Name
```

---

# 🧠 Why?

Because:

```text id="g6t1pm"
ptr is a pointer, not object
```

---

# 💣 Senior Insight

Pointers to structs are heavily used in:

* Linked Lists
* Trees
* Dynamic Objects
* OOP Internals
* Game Engines

---

# 🔥 Golden Rule

| Syntax | Meaning                       |
| ------ | ----------------------------- |
| .      | Access object member          |
| ->     | Access member through pointer |

---

# 🚀 What You Learned

✔️ Pointer to Struct
✔️ Arrow Operator `->`
✔️ Struct Memory Access
✔️ Difference between `.` and `->`
✔️ `(*ptr).member` equivalence

---

# 📚 Next Step

* Dynamic Structs
* Arrays of Structs
* Linked Lists
* Object Memory Layout

---

<p align="center">
  Made with ❤️ by Ahmed Darwish
</p>
