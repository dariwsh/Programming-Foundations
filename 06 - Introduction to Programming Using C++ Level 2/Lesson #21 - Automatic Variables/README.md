# Lesson #21 - Automatic Variables in C++

## 📌 Overview
In this lesson, we explore **Automatic Variables** in C++, which are the default type of local variables created inside functions or blocks.

---

## 🧠 What is an Automatic Variable?

An **automatic variable** is a variable that:
- Is declared inside a function or block
- Is created automatically when the function starts
- Is destroyed when the function ends

> These variables are called "automatic" because their lifetime is managed automatically.

---

## ⚙️ Example

```cpp
#include <iostream>
using namespace std;

void test() {
    int x = 0;
    x++;
    cout << x << endl;
}

int main() {
    test();
    test();
    test();
}