# 📘 C++ Lesson — Default Parameters

## 👨‍💻 Author
Ahmed Darwish

---

## 📌 Overview
This lesson explains how to use **default parameters** in C++ functions to provide optional values.

---

## 🧠 Core Idea

> Default parameters allow functions to be called with fewer arguments.

---

## 🔹 Syntax

```cpp
void Function(type param = value);
```

---

## 🔧 Example

```cpp
#include <iostream>
using namespace std;

void Print(int n = 10)
{
    cout << n;
}

int main()
{
    Print();    // uses default value → 10
    Print(5);   // uses passed value → 5
}
```

---

## ⚠️ Rules

### 1️⃣ Default parameters must be at the end

```cpp
// ❌ Wrong
void Test(int a = 1, int b);

// ✔️ Correct
void Test(int a, int b = 1);
```

---

### 2️⃣ If one parameter has default, all after it must also have default

```cpp
// ✔️ Correct
void Test(int a = 1, int b = 2);
```

---

### 3️⃣ Write default values only once (usually in declaration)

```cpp
void Sum(int a, int b = 5); // declaration

void Sum(int a, int b)      // definition
{
    cout << a + b;
}
```

---

## ❌ Common Mistakes

- Using default parameter before non-default  
- Repeating default value in definition  
- Confusing argument order  

---

## 🧠 Key Takeaways

- Default = optional value  
- Order matters  
- Avoid duplication  

---

## 🎯 Goal

Write flexible and clean functions with optional parameters.