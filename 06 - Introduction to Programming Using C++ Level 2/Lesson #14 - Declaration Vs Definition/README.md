# 📘 Introduction
In this lesson, we learned about:

# 📘 C++ Lesson — Declaration vs Definition

# 👨‍💻 Author
Ahmed Darwish

---

# 📌 Overview
This lesson explains the difference between **function declaration** and **function definition** in C++, and why order matters in your code.

---

# 🧠 Concepts Covered

> The compiler reads code from top to bottom.  
> You must declare a function before using it.

---

# 🔹 What is Declaration?

A declaration tells the compiler:
> "This function exists"

```cpp
void SayHello();
```

- ✔️ Function name  
- ✔️ Return type  
- ✔️ Parameters (types only)  
- ❌ No function body  

---

# 🔹 What is Definition?

A definition contains:
> "The actual implementation"

```cpp
void SayHello()
{
    cout << "Hello";
}
```

---

# ❌ Common Error

```cpp
int main()
{
    SayHello(); // ❌ Error
}

void SayHello()
{
    cout << "Hello";
}
```

# 💥 Why?
The compiler does not know the function yet.

---

# ✅ Solution 1 — Use Declaration

```cpp
void SayHello(); // Declaration

int main()
{
    SayHello(); // ✔️ Works
}

void SayHello()
{
    cout << "Hello";
}
```

---

# ✅ Solution 2 — Define Before main

```cpp
void SayHello()
{
    cout << "Hello";
}

int main()
{
    SayHello(); // ✔️ Works
}
```

---

# 🔍 Important Note

In declaration, parameter names are optional:

```cpp
int Sum(int, int); // ✔️ Valid
```

```cpp
int Sum(int a, int b); // ✔️ Also valid
```

---

# 🔥 Pro Tips & Rules

- ❌ Calling a function before declaration  
- ❌ Forgetting return type  
- ❌ Writing only function name without type  

---

# 🧠 Key Takeaways

- Declaration = informs the compiler  
- Definition = implements the function  
- Order matters in C++  
- Compiler must see declaration before usage  

---

# 🎯 Goal

Write structured and organized code that compiles without errors.

---

# 💡 Tip

> If your function is below `main()`, always declare it above.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.