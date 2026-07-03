# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Standard Library - String Object

# 📌 Overview
Unlock the power of the `std::string` class and master its useful built-in string manipulation methods.

---

# 🧠 Concepts Covered
- String length (`.length()`)
- Accessing chars (`.at()`, `.push_back()`)
- Appending and inserting strings (`.append()`, `.insert()`)
- Substrings (`.substr()`) and searching (`.find()`, `npos`)

---

# 💡 Practical Details

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "My Name is Ahmed Darwish, I Love Programming.";
    cout << "Length: " << s1.length() << endl;

    s1.append(" @ProgrammingAdvices"); // Appending
    s1.insert(11, " Eng.");              // Inserting

    cout << "Substring: " << s1.substr(0, 7) << endl; // From index 0, length 7
    
    // Finding substring
    size_t found = s1.find("Ahmed");
    if (found != s1.npos) {
        cout << "Found 'Ahmed' at index: " << found << endl;
    }

    if (s1.find("Ali") == s1.npos) {
        cout << "'Ali' Not found" << endl;
    }

    s1.clear(); // Reset to empty string
    return 0;
}
```

---

# 💡 Key Takeaways
- `std::string` manages its memory dynamically, unlike character arrays.
- `.find()` returns `std::string::npos` if the target string is not found.
- `.substr(pos, len)` creates a new string from position `pos` with length `len`.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.