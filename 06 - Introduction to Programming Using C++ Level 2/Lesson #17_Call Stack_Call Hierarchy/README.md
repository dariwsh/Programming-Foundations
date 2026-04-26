# 📘 C++ Lesson Repository

## 👨‍💻 Author
Ahmed Darwish


![Language](https://img.shields.io/badge/language-C%2B%2B-blue.svg)
![Status](https://img.shields.io/badge/status-active-success.svg)
![Level](https://img.shields.io/badge/level-beginner--to--intermediate-orange.svg)
![License](https://img.shields.io/badge/license-MIT-lightgrey.svg)

---

## 📌 Overview

This repository contains structured **C++ lessons** designed to build strong programming fundamentals through clear explanations, examples, and practice exercises.

Each lesson focuses on one core concept and helps you progress step-by-step from basics to more advanced topics.

---

## 🎯 Learning Goals

By using this repository, you will be able to:

* Understand core C++ concepts in depth
* Write clean and efficient C++ code
* Trace program execution logically
* Solve coding problems step-by-step
* Prepare for exams and real-world programming tasks

---

## 📂 Repository Structure

```
C++-Lessons/
│
├── Lesson-01-Introduction/
├── Lesson-02-Variables-and-DataTypes/
├── Lesson-03-Operators/
├── Lesson-17-Call-Stack/
└── README.md
```

---

## 🧠 Key Topics Covered

* Variables & Data Types
* Operators (Arithmetic, Logical, Bitwise)
* Conditions (if / switch)
* Loops (for / while / do-while)
* Functions
* Arrays & Strings
* Call Stack & Execution Flow
* Problem Solving Techniques

---

## 💻 Example Code

```cpp
#include <iostream>
using namespace std;

int Add(int a, int b) {
    return a + b;
}

int main() {
    int x = 5, y = 10;
    cout << Add(x, y) << endl;
    return 0;
}
```

---

# 📘 Lesson #17 - Call Stack / Call Hierarchy

## 📌 Concept

The **Call Stack** is a data structure used by C++ to manage function calls.
Each time a function is called, it is placed (pushed) onto the stack.
When it finishes, it is removed (popped).

---

## 🧠 How It Works

Example execution:

```
main()
  └── Add()
        └── return value
```

Stack behavior:

```
Push: main
Push: Add
Pop : Add
Pop : main
```

---

## 💻 Example Code

```cpp
#include <iostream>
using namespace std;

void FunctionC() {
    cout << "Inside Function C" << endl;
}

void FunctionB() {
    FunctionC();
    cout << "Inside Function B" << endl;
}

void FunctionA() {
    FunctionB();
    cout << "Inside Function A" << endl;
}

int main() {
    FunctionA();
    return 0;
}
```

---

## 🧪 Execution Flow

```
main → FunctionA → FunctionB → FunctionC
```

Then return back in reverse order:

```
FunctionC → FunctionB → FunctionA → main
```

---

## ⚠️ Common Mistakes

* Infinite recursion (stack overflow)
* Not understanding return flow
* Mixing execution order

---

## 🚀 Summary

Call Stack controls how functions execute and return.
Understanding it is critical for recursion, debugging, and tracing programs.

---

## 📈 Progress Tip

> Always trace function calls manually before running code.

---

## 📄 License

MIT License

---

## ⭐ Contributing

* Add new examples
* Improve explanations
* Suggest optimizations

---

🔥 Happy Coding!
