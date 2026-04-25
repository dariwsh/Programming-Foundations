# 📘 Bitwise OR Operator (|) — Lesson #13

## 🧠 Introduction

The Bitwise OR operator (`|`) works on the **binary representation (bits)** of numbers. It compares each bit of two numbers and returns `1` if **at least one of the bits is 1**.

---

## ⚙️ How it works

For each bit position:

* `0 | 0 = 0`
* `0 | 1 = 1`
* `1 | 0 = 1`
* `1 | 1 = 1`

📌 Rule:

> The result is 1 if at least one bit is 1

---

## 🔢 Example

```
12 = 1100
10 = 1010
-------------
     1110 = 14
```

📌 So:

```
12 | 10 = 14
```

---

## 💻 C++ Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int b = 10;

    int result = a | b;

    cout << "Result = " << result << endl;

    return 0;
}
```

---

## 🎯 Uses of Bitwise OR

### 1) Flags / Permissions

Used to combine multiple options into a single variable.

```cpp
int READ = 1;   // 001
int WRITE = 2;  // 010

int permissions = READ | WRITE; // 011
```

---

### 2) Feature Combination

Used in systems to enable multiple settings at once.

---

## ⚠️ Important Difference

| Operator | Meaning |                               |                           |
| -------- | ------- | ----------------------------- | ------------------------- |
| `        | `       | Bitwise OR (operates on bits) |                           |
| `        |         | `                             | Logical OR (true / false) |

---

## 📌 Key Idea

> Bitwise OR sets the result bit to 1 if any input bit is 1

---

## 🚀 Summary

* Works on binary representation
* Used to combine values and flags
* Important in C++ and low-level programming


Ahmed Darwish
