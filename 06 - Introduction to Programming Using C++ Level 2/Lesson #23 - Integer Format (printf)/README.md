# 📘 Introduction
In this lesson, we learned about:

# 📘 C++ Lesson 01 — Printing Integers (printf)

# 👨‍💻 Author
Ahmed Darwish

---

# 📌 Overview

This lesson focuses on formatting integers using `printf` in C/C++.

---

# 🧠 Why It Matters

> Clean output = readable programs

---

# 🔧 Syntax

```cpp
printf("%d", value);
```

---

# 🔹 Formatting Options

# 1. Basic Print
```cpp
printf("%d", 10);
```

---

# 2. Width
```cpp
printf("%5d", 12);
```
Output:
```
   12
```

---

# 3. Zero Padding
```cpp
printf("%05d", 12);
```
Output:
```
00012
```

---

# 4. Left Alignment
```cpp
printf("%-5d", 12);
```
Output:
```
12   
```

---

# 5. Large Numbers
```cpp
printf("%3d", 12345);
```
Output:
```
12345
```

---

# 💡 Key Rules

- Width defines total space  
- `0` adds zeros  
- `-` aligns left  
- `%d` is for integers  

---

# 🎯 Goal

Master integer formatting for clean and structured output.

---

# 🚀 Example

```cpp
#include <stdio.h>

int main()
{
    printf("%05d\n", 7);
    printf("%-5d\n", 3);
    printf("%6d\n", 99);
}
```

---

# 🔥 Tip

> Formatting is not optional — it’s professional.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.