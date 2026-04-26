# 🧪 C++ Quiz — Declaration vs Definition

## 👨‍💻 Author
Ahmed Darwish

---

## 📌 Topics Covered
- Function Declaration
- Function Definition
- Compiler behavior (Top → Bottom)
- Common errors in function usage

---

## 🧠 الهدف من الكويز

> التأكد من فهم الفرق بين declaration و definition  
> مش الحفظ — الفهم

---

## 🟢 Level 1 — Basics

### Q1
```cpp
int main()
{
    Test();
}

void Test()
{
}
```

❓ Why does this code produce an error?

---

### Q2
Choose the correct declaration:

A)
```cpp
void Test();
```

B)
```cpp
Test();
```

---

## 🔵 Level 2 — Understanding

### Q3
```cpp
int Sum(int, int);
```

❓ Is this valid? Why?

---

### Q4
```cpp
int main()
{
    Sum(2,3);
}

int Sum(int a, int b)
{
    return a + b;
}
```

❓ Will this work? Explain.

---

## 🟡 Level 3 — Fix the Code

### Q5
Fix the error:

```cpp
int main()
{
    Print();
}

void Print()
{
    cout << "Hello";
}
```

---

## 🔴 Level 4 — Thinking

### Q6
What is the difference between:

```cpp
void Test();
```

and

```cpp
void Test()
{
}
```

---

## ⚫ Level 5 — Challenge

### Q7
Write a program that:
- Declares a function above `main()`
- Defines it below `main()`
- Calls it inside `main()`

---

## 🎯 What You Should Learn

- Compiler reads top to bottom  
- Declaration informs  
- Definition executes  
- Order matters  

---

## 💡 Hint

> If the function is below `main()`, you must declare it above.

---

## 🚀 Goal

Build strong understanding of how C++ handles functions internally.