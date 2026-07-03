# 📘 Introduction
In this lesson, we learned about:

# 📘 C++ Lesson 31 — pop_back()

---

# 📌 Overview

This lesson explains how to remove elements from a vector.

---

# 🔹 Function

```cpp
v.pop_back();
```

✔️ Removes last element

---

# 🔹 Example

```cpp
v = {10,20,30,40,50}
```

After:

```cpp
v.pop_back();
```

✔️ Result:

```text
10 20 30 40
```

---

# ⚠️ Important

```cpp
v.pop_back(); // if empty → crash
```

✔️ Safe:

```cpp
if (!v.empty())
    v.pop_back();
```

---

# 🧠 Concept

```text
Vector = LIFO (Stack behavior)
```

---

# 🎯 Goal

Understand safe removal of elements

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.