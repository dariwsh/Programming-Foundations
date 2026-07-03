# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Vector - Change and Modify Elements

# 📌 Overview
Understand how to update elements in a vector using references in loops, index subscripting, or the `.at()` method.

---

# 🧠 Concepts Covered
- Modifying vector elements in range-based loops using references (`&`)
- Updating elements using subscripts `[]`
- Updating elements using `.at()`

---

# 💡 Practical Details

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num{ 1, 2, 3, 4, 5 };

    // Update all elements using reference loop
    for (int& i : num) {
        i = 20; // Modify original element in vector
    }

    // Individual modifications
    num[1] = 40;     // Subscript method
    num.at(2) = 80;  // .at() method
    num.at(4) = 90;

    cout << "Updated Vector: ";
    for (const int& i : num) {
        cout << i << " ";
    }
    return 0;
}
```

---

# 💡 Key Takeaways
- A range-based loop `for(int x : vec)` makes copies. You MUST declare it as `for(int& x : vec)` to modify items.
- `.at()` allows assignment: `vec.at(i) = new_value;`.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.