# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Standard Library - cctype Functions

# 📌 Overview
Learn how to use functions from the `<cctype>` library to check and transform characters in C++.

---

# 🧠 Concepts Covered
- Case conversions: `toupper()`, `tolower()`
- Character type checks: `isupper()`, `islower()`, `isdigit()`, `ispunct()`
- Boolean check return behaviors (zero vs non-zero)

---

# 💡 Practical Details

```cpp
#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char x = toupper('a'); // Convert to uppercase 'A'
    char w = tolower('A'); // Convert to lowercase 'a'

    cout << "isupper('A'): " << isupper('A') << " (non-zero means true)" << endl;
    cout << "islower('A'): " << islower('A') << " (zero means false)" << endl;
    cout << "isdigit('9'): " << isdigit('9') << endl;
    cout << "ispunct('!'): " << ispunct('!') << " (punctuation checks)" << endl;

    return 0;
}
```

---

# 💡 Key Takeaways
- `<cctype>` functions like `isupper` return a non-zero value for true and 0 for false.
- `toupper` and `tolower` return the integer ASCII code, which can be implicitly printed as a char or cast.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.