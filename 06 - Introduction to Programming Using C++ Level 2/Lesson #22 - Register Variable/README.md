
---

# 📘 تطبيق عملي — Lesson #22 (Register Variables)

```markdown
# 📘 Lesson #22 - Register Variables

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Level](https://img.shields.io/badge/Level-Foundations-green)
![Performance](https://img.shields.io/badge/Topic-Optimization-red)

---

## 📌 Overview
This lesson introduces **register variables** and how they relate to CPU-level optimization.

---

## 🧠 Concept
Register variables:
- Are stored in CPU registers (if applied)
- Provide faster access than RAM
- Are suggested using `register` keyword

---

## ⚙️ Example

```cpp
#include <iostream>
using namespace std;

int main() {
    register int i;
    for(i = 0; i < 5; i++) {
        cout << i << endl;
    }
}