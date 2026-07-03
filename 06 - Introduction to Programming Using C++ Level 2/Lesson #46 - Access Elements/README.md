# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Vector - Access Elements

# 📌 Overview
Learn how to access elements in a vector safely and understand the differences between subscript and bounds-checked methods.

---

# 🧠 Concepts Covered
- Using `.at(index)` for safe access
- Difference between `[index]` and `.at(index)`
- Vector boundary checks

---

# 💡 Practical Details

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numberOfUser;
    cout << "Enter Number Of Elements: ";
    cin >> numberOfUser;

    vector<int> num(numberOfUser);
    for (int i = 0; i < numberOfUser; i++) {
        cout << "Element " << i << ": ";
        cin >> num.at(i); // Safe bounds-checked access
    }

    cout << "\nFirst Element  : " << num.at(0) << endl;
    cout << "Last Element   : " << num.at(numberOfUser - 1) << endl;
    cout << "Middle Element : " << num.at(numberOfUser / 2) << endl;

    return 0;
}
```

---

# 💡 Key Takeaways
- Using `.at(index)` performs range checking and throws an `out_of_range` exception if boundaries are violated.
- Subscript notation `v[index]` is faster but unsafe since it does not perform range checks.
- Use `.at()` when safety and reliability are critical.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.