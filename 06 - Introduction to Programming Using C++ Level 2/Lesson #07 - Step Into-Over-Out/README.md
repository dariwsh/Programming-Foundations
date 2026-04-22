# C++ Debugging - Step Into / Step Over / Step Out

## 📌 Overview
This lesson explains how to control program execution during debugging using:

- Step Into
- Step Over
- Step Out

---

## 🔧 Concepts

### 🔹 Step Into (F11)
Executes the current line and enters the function.

Use when:
- You want to debug inside a function

---

### 🔹 Step Over (F10)
Executes the line without entering the function.

Use when:
- You trust the function works correctly

---

### 🔹 Step Out (Shift + F11)
Exits the current function and returns to the caller.

Use when:
- You no longer need to debug inside the function

---

## 🧠 Example

```cpp
int result = add(3,4);
```

- F11 → enter function  
- F10 → execute without entering  
- Shift+F11 → exit function  

---

## 🎯 Key Idea

- Into → go inside  
- Over → skip  
- Out → exit  

---

## 👨‍💻 Author
Ahmed Darwish