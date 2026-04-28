# 📘 C++ Lesson — Recursion

## 👨‍💻 Author
Ahmed Darwish

---

## 📌 Overview

Recursion is a technique where a function calls itself to solve a problem.

---

## 🧠 Core Idea

> A function keeps calling itself until a stopping condition is met.

---

## 🔧 Structure

```cpp
if (Base Case)
    return;

Recursive Call;
```

---

## 🔹 Key Components

### 1. Base Case
Stops recursion.

### 2. Recursive Case
Function calls itself.

---

## 🔥 Example

```cpp
void Print(int n)
{
    if (n == 0) return;
    cout << n;
    Print(n - 1);
}
```

---

## 🧠 Call Stack

- Recursion uses stack (LIFO)
- Functions wait until deeper calls finish

---

## ⚠️ Common Mistakes

- Missing base case  
- Wrong recursive direction  
- Infinite recursion  

---

## 🔁 Example: Factorial

```cpp
int Fact(int n)
{
    if (n == 0) return 1;
    return n * Fact(n - 1);
}
```

---

## 📊 Recursion vs Loop

| Recursion | Loop |
|----------|------|
| Easy logic | Faster |
| Uses stack | No stack |
| Risk of crash | Safer |

---

## 🧠 Key Takeaways

- Recursion = self-calling function  
- Always define base case  
- Think in steps (down & up)  

---

## 🎯 Goal

Understand how problems can be broken into smaller versions of themselves.