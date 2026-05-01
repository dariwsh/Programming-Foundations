# 📘 C++ Lesson — Float Formatting (printf)

## 👨‍💻 Author
Ahmed Darwish

---

## 📌 Overview

This lesson explains how to format floating-point numbers using `printf`.

---

## 🧠 Key Concepts

- Control decimal precision  
- Control total width  
- Automatic rounding  

---

## 🔧 Syntax

```cpp
printf("%f", value);
```

---

## 🔹 Examples

### 1. Default
```cpp
printf("%f", 3.14);
```
Output:
```
3.140000
```

---

### 2. Precision
```cpp
printf("%.2f", 3.14159);
```
Output:
```
3.14
```

---

### 3. Rounding
```cpp
printf("%.3f", 3.14159);
```
Output:
```
3.142
```

---

### 4. Width + Precision
```cpp
printf("%8.2f", 3.14);
```
Output:
```
    3.14
```

---

### 5. Zero Padding
```cpp
printf("%08.2f", 3.14);
```
Output:
```
00003.14
```

---

### 6. Left Align
```cpp
printf("%-8.2f", 3.14);
```
Output:
```
3.14    
```

---

## 💡 Rules

- `.N` → decimal places  
- width → total length  
- rounding happens automatically  

---

## 🎯 Goal

Write clean and professional numeric output.

---

## 🚀 Tip

> Formatting makes your program readable and professional.