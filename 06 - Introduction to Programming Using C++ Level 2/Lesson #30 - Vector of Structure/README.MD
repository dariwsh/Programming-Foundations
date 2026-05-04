# 📘 C++ Lesson 30 — Vector of Struct

<p align="center">
  <img src="https://img.shields.io/badge/C++-Vector-blue?style=for-the-badge&logo=c%2B%2B"/>
  <img src="https://img.shields.io/badge/Concept-Struct-orange?style=for-the-badge"/>
</p>

---

## 👨‍💻 Author

Ahmed Darwish

---

## 📌 Overview

This lesson demonstrates how to use a **vector of struct** to store multiple objects.

> 🎯 Goal: Manage structured data using dynamic arrays

---

## 🧠 Concept

```text
vector<struct> = dynamic list of objects
```

---

## 🔹 Struct Definition

```cpp
struct stEmployee{
    string FirstName;
    string LastName;
    float Salary;
};
```

---

## 🔹 Adding Data

```cpp
vector<stEmployee> Vemployee;

stEmployee temp;
temp.FirstName = "Ahmed";
temp.LastName = "Darwish";
temp.Salary = 1000;

Vemployee.push_back(temp);
```

---

## 🔹 Loop

```cpp
for (stEmployee &i : Vemployee)
{
    cout << i.FirstName << endl;
}
```

---

## 🎯 Output Example

```text
First Name : Ahmed
Last Name  : Darwish
Salary     : 1000
```

---

## 💣 Key Idea

> Vector can store full objects, not just numbers

---

## 🚀 Tip

Use reference (`&`) to avoid copying large objects
