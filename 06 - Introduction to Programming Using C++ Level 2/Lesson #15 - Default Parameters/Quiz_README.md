# 🧪 C++ Quiz — Default Parameters

## 👨‍💻 Author
Ahmed Darwish

---

## 📌 Topics Covered
- Default Parameters
- Function Calls
- Parameter Order
- Common Errors

---

## 🧠 Quiz Objective

> Test your understanding of how default parameters work in real scenarios.

---

## 🟢 Level 1 — Basics

### Q1
```cpp
void Test(int a = 1, int b = 2);

Test(5);
```

❓ What are the values of `a` and `b`?

---

### Q2
```cpp
void Test(int a = 1, int b);

Test(5);
```

❓ Is this code valid? Why?

---

## 🔵 Level 2 — Understanding

### Q3
```cpp
void Sum(int a, int b = 10);

int main()
{
    Sum(5);
}
```

❓ Will this produce output? Why?

---

### Q4
```cpp
void Test(int a = 1, int b = 2);

Test();
```

❓ What values are used?

---

## 🟡 Level 3 — Output Prediction

### Q5
```cpp
void Sum(int a, int b = 5)
{
    cout << a + b;
}

int main()
{
    Sum(2, 3);
    Sum(2);
}
```

❓ What is the output?

---

## 🔴 Level 4 — Advanced

### Q6
```cpp
void Test(int a = 1, int b = 2, int c = 3);

Test(5, 6);
```

❓ What are the values of `a`, `b`, and `c`?

---

## ⚫ Level 5 — Debugging

### Q7
```cpp
void Sum(int a, int b = 5);

void Sum(int a, int b = 5)
{
    cout << a + b;
}
```

❓ What is the problem in this code?

---

## 🎯 What You Should Learn

- Default parameters are optional values  
- They must be placed at the end  
- They are used during function calls  
- They must not be repeated  

---

## 💡 Hint

> Default values are applied from right to left.

---

## 🚀 Challenge

Try writing your own function with 3 parameters:
- Call it with 1 value  
- Then 2 values  
- Then all 3 values  

Observe how default parameters behave.