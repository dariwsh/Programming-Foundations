# 📘 Introduction
In this lesson, we learned about:

# C++ Debugging Practice - Breakpoints & Memory Values

# 🎯 Main Idea
This project is a simple C++ practice program created to demonstrate fundamental debugging concepts using Visual Studio Debugger.

It focuses on tracking variable values in memory, using breakpoints, tracing loops, and debugging function calls step by step.

---

# 🧠 Concepts Covered

# 1. Breakpoints
Learn how to pause program execution at specific lines and inspect variable values.

Example breakpoint locations

```cpp
a++;
++b;
a = a + a  i;
c = MySum(a, b);
```

---

# 💡 Practical Details
Monitor how variables change during execution

```cpp
a = 10 - 11 - 22 - 66 - 264 - 1320 - 7920
b = 20 - 21
c = 32 - 7941
```

Use
- Autos Window
- Quick Watch
- Watch Window

---

# 💡 Practical Details

```cpp
a++;
++b;
```

Practice understanding
- Post-increment
- Pre-increment

---

# 💡 Practical Details
Trace the `for` loop step by step

```cpp
for(int i=1; i=5; i++)
{
   a = a + ai;
}
```

Inspect
- Current value of `i`
- Updated value of `a`
- Loop behavior in memory

---

# 💡 Practical Details
Debug function calls using Step Into (F11)

```cpp
c = MySum(a,b);
```

Function

```cpp
int MySum(int a, int b)
{
   int s = a + b;
   return s;
}
```

---

# ✨ Key Features & Tools

- Breakpoints
- Step Into (F11)
- Continue (F5)
- Autos Window
- Quick Watch
- Memory Inspection

---

# Final Output

```text
11
21
32
1
2
3
4
5
7941
```

---

# Learning Goal
This project is intended for beginners learning

- C++ Debugging
- Variable Tracing
- Breakpoints
- Memory Analysis
- Function Call Inspection

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.