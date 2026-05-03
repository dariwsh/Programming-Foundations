# 📘 C++ Lesson — 2D Arrays (Basics)

<p align="center">
  <img src="https://img.shields.io/badge/C++-Arrays-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Level-Beginner-green?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Focus-2D%20Arrays-orange?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson introduces **Two-Dimensional Arrays (2D Arrays)** in C++.

> 🎯 Goal: Understand how to store and process data in table format (rows & columns)

---

## 🧠 What is 2D Array?

A 2D Array is:

> Array of arrays (Table)

Example:

```
1 2 3
4 5 6
```

---

## 🔹 Declaration

```cpp
int arr[2][3];
```

* 2 → rows
* 3 → columns

✔️ Total elements = 6

---

## 🔹 Initialization

```cpp
int arr[2][3] = {
    {1,2,3},
    {4,5,6}
};
```

---

## 🔹 Access Element

```cpp
arr[1][0] = 10;
```

> row first, then column

---

## 🔹 Traversing (Looping)

```cpp
for(int i=0;i<2;i++){
    for(int j=0;j<3;j++){
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
```

---

## 🧠 Key Concept

| Variable | Meaning |
| -------- | ------- |
| i        | row     |
| j        | column  |

---

## 🔥 Logic Example

```cpp
arr[i][j] = i + j;
```

Output:

```
0 1 2
1 2 3
```

---

## 💣 Important Rules

* Always use nested loops
* i → rows
* j → columns
* Loop limits define everything

---

## 🎯 Goal

> Read and write 2D arrays confidently and understand their structure

---

## 🚀 Tip

> Don’t memorize — trace the loops step by step
