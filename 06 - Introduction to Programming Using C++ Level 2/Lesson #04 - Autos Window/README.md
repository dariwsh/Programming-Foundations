# 🚀 C++ Debugging - Autos Window Guide

> See your variables live while debugging 🔥

---

## 🎯 Why this matters?

When debugging, you need to **see what is happening inside your code**.

👉 The Autos Window helps you:

* Track variables automatically
* Understand code step by step
* Find bugs faster

---

## 🧠 What is Autos Window?

The **Autos Window** shows variables used near the current line while debugging.

💡 Simple idea:

> "It shows you important variables automatically"

---

## ⚡ When does it work?

* Only works in **Debug mode**
* Only appears when the program **stops at a breakpoint**

---

## 🔍 What does it show?

When the program stops:

* Variables in the current line
* Variables from previous lines
* Their current values

📌 In C++:
It shows variables from **a few lines before the current line** ([Microsoft Learn][1])

---

## 🧪 Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    int y = 10;

    int sum = x + y; // 🔴 Breakpoint here

    cout << sum;

    return 0;
}
```

👉 When it stops:

* You will see `x`, `y`, `sum`
* You can check values before execution

---

## 🛠 How to open Autos Window

While debugging:

👉 Debug → Windows → Autos
OR
👉 Shortcut: `Ctrl + Alt + V` then `A` ([Microsoft Learn][1])

---

## 🔥 Pro Tips

* Use Autos for **quick check**
* Use Locals for **all variables**
* Use Watch for **specific variables**

---

## ⚠️ Important Notes

* Autos shows only **related variables**
* Some values may not appear if not used yet
* Values update while stepping through code

---

## 🧩 Practice

Try this:

* Add breakpoint in different lines
* Watch how variables change
* Compare Autos vs Locals

---

## 💡 Real Talk

Beginners:
❌ Print everything

Smart developers:
✅ Use Autos Window
✅ Debug step by step

---

## 🏁 Summary

* Autos Window = auto variables view
* Works only in debugging
* Shows nearby variables
* Helps understand code faster 🔥

---

## ⭐ If this helped you

Give the repo a ⭐ and follow for more C++ content 🚀

---
Ahmed Darwish
