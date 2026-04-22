# 🚀 C++ Debugging - Quick Watch Window

> Check any variable or expression instantly ⚡

---

## 🎯 Why this matters?

Sometimes you want to check a variable **quickly** without adding it to Watch.

👉 That’s where **Quick Watch** is useful:

* Fast check for variables
* Evaluate expressions instantly
* No need to setup anything

---

## 🧠 What is Quick Watch?

**Quick Watch** is a tool in Visual Studio that shows the value of a variable or expression during debugging.

💡 Simple idea:

> "Check any value instantly"

---

## ⚡ Key Features

* Show value of a variable
* Evaluate expressions (like `a + b`)
* Change variable value
* Add variable to Watch window

📌 It works only while debugging ([video2.skills-academy.com][1])

---

## 🔍 Important Note

* Quick Watch shows **one variable at a time**
* You must close it to continue debugging ([video2.skills-academy.com][1])

---

## 🧪 Example

```cpp
#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    int sum = a + b; // 🔴 Breakpoint here

    cout << sum;

    return 0;
}
```

👉 When stopped:

* Select `a` or `sum`
* Open Quick Watch
* See value instantly

---

## 🛠 How to open Quick Watch

While debugging:

👉 Right click on variable → Quick Watch
OR
👉 Shortcut: `Shift + F9` ([O'Reilly][2])

---

## 🔥 Pro Tips

* Use it for **quick testing**
* Use Watch window for long tracking
* Try writing expressions like:

```cpp
a + b
```

---

## ⚠️ Difference from Watch

| Quick Watch  | Watch          |
| ------------ | -------------- |
| One variable | Many variables |
| Temporary    | Permanent      |
| Fast check   | Long tracking  |

---

## 🧩 Practice

Try this:

* Add breakpoint
* Open Quick Watch
* Test expressions like:

  * `a + b`
  * `a * b`

---

## 💡 Real Talk

Beginners:
❌ Print values

Smart developers:
✅ Use Quick Watch
✅ Debug faster

---

## 🏁 Summary

* Quick Watch = fast check tool
* Works in debug mode
* Shows one value
* Helps test expressions quickly 🔥

---

## ⭐ If this helped you

Give the repo a ⭐ and follow for more C++ content 🚀

---
Ahemd Darwish
