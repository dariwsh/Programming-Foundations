# 📘 Bitwise Operators in C++ (Complete README)

## 🧠 Introduction

Bitwise operators in C++ are used to perform operations directly on the **binary representation (bits)** of numbers. They are widely used in low-level programming, optimization, and competitive programming.

---

# 🔹 1. Bitwise AND Operator (&)

## ⚙️ Concept

The AND operator compares each bit of two numbers and returns 1 only if both bits are 1.

### 📊 Truth Table

| A | B | A & B |
| - | - | ----- |
| 0 | 0 | 0     |
| 0 | 1 | 0     |
| 1 | 0 | 0     |
| 1 | 1 | 1     |

## 🔢 Example

```
12 = 1100
10 = 1010
-----
    1000 = 8
```

## 💻 Code

```cpp
int result = 12 & 10;
cout << result;
```

## 🎯 Uses

* Check even / odd
* Bit masking

---

# 🔹 2. Bitwise OR Operator (|)

## ⚙️ Concept

Returns 1 if at least one bit is 1.

### 📊 Truth Table

| A | B | A | B |
|---|---|------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

## 🔢 Example

```
12 = 1100
10 = 1010
-----
    1110 = 14
```

## 💻 Code

```cpp
int result = 12 | 10;
cout << result;
```

---

# 🔹 3. Bitwise XOR Operator (^)

## ⚙️ Concept

Returns 1 only if bits are different.

### 📊 Truth Table

| A | B | A ^ B |
| - | - | ----- |
| 0 | 0 | 0     |
| 0 | 1 | 1     |
| 1 | 0 | 1     |
| 1 | 1 | 0     |

## 🔢 Example

```
12 = 1100
10 = 1010
-----
    0110 = 6
```

## 💻 Code

```cpp
int result = 12 ^ 10;
cout << result;
```

## 🎯 Uses

* Swap numbers without temp
* Error detection logic

---

# 🔹 4. Bitwise NOT Operator (~)

## ⚙️ Concept

Inverts all bits (0 ↔ 1).

## 💻 Code

```cpp
int result = ~5;
cout << result;
```

## ⚠️ Note

Result depends on 2's complement representation.

---

# ⚠️ Important Difference

| Operator | Type        |            |
| -------- | ----------- | ---------- |
| &        | Bitwise AND |            |
|          |             | Bitwise OR |
| ^        | Bitwise XOR |            |
| ~        | Bitwise NOT |            |
| &&       | Logical AND |            |

---

# 🚀 Summary

* Bitwise operators work on binary numbers
* Used in optimization and system-level programming
* Very important in C++ fundamentals and interviews

---

# 📌 Key Idea

> Everything is converted to binary first, then operations are applied bit by bit.


Ahmed Darwish
