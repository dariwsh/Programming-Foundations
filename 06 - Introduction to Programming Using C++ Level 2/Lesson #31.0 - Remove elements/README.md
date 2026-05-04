# 📘 C++ Lesson 31 — pop_back()

---

## 📌 Overview

This lesson explains how to remove elements from a vector.

---

## 🔹 Function

```cpp
v.pop_back();
```

✔️ Removes last element

---

## 🔹 Example

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

## ⚠️ Important

```cpp
v.pop_back(); // if empty → crash
```

✔️ Safe:

```cpp
if (!v.empty())
    v.pop_back();
```

---

## 🧠 Concept

```text
Vector = LIFO (Stack behavior)
```

---

## 🎯 Goal

Understand safe removal of elements
