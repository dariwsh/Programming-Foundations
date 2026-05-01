# 📘 C++ Lesson 25 — String & Char Formatting (printf)

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson explains how to format **characters** and **strings** using `printf` in C/C++.

You will learn how to control:

* Width (space)
* Alignment
* Precision (cutting text)

> 🎯 Goal: Produce clean, structured, and professional output.

---

## 🔹 1. Character Formatting `%c`

### ✅ Basic Example

```cpp
printf("%c", 'A');
```

**Output**

```
A
```

---

### 🔹 Width with Char

```cpp
printf("%5c", 'A');
```

**Output**

```
    A
```

> 💡 Adds spaces before the character.

---

## 🔹 2. String Formatting `%s`

### ✅ Basic Example

```cpp
printf("%s", "Ahmed");
```

**Output**

```
Ahmed
```

---

### ⚠️ Important (C++ string)

```cpp
string name = "Ahmed";
printf("%s", name.c_str());
```

> ❌ `printf` does NOT accept `std::string` directly.

---

## 🔹 3. Width (Right Alignment)

```cpp
printf("%10s", "Ali");
```

**Output**

```
       Ali
```

> 💡 Total width = 10 characters

---

## 🔹 4. Left Alignment

```cpp
printf("%-10s", "Ali");
```

**Output**

```
Ali       
```

---

## 🔹 5. Precision (String Truncation)

```cpp
printf("%.3s", "Ahmed");
```

**Output**

```
Ahm
```

> 💡 `.N` = maximum number of characters printed

---

## 🔹 6. Width + Precision

```cpp
printf("%10.3s", "Ahmed");
```

**Output**

```
       Ahm
```

---

## 🧠 How It Works (Execution Order)

```text
1. Apply precision (cut text)
2. Apply width (add spaces)
3. Apply alignment
```

---

## 💣 Advanced Example

```cpp
printf("%-8.4s", "Programming");
```

### Step-by-step:

1. Cut → `"Prog"`
2. Align left → add spaces

**Output**

```
Prog    
```

---

## 🔥 Key Rules

* `%c` → single character
* `%s` → string (char array or `.c_str()`)
* `.N` → limits number of characters
* `N` → total width
* `-` → left alignment

---

## 🧪 Practice Examples

```cpp
printf("%.2s", "Hello");   // He
printf("%6c", 'B');        //      B
printf("%-6.3s", "World"); // Wor   
printf("%8.5s", "AhmedAli"); //    Ahmed
```

---

## ❗ Common Mistakes

### ❌ Wrong Order Thinking

> Applying width before precision

### ✅ Correct

> Precision → Width → Alignment

---

## 🎯 Final Goal

> Be able to read any `printf` format and instantly know:

* What will be printed
* How it will be aligned
* How many characters will appear

---

## 🚀 Pro Tip

> Clean formatting is a sign of a professional developer.
