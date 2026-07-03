# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ Vector - Iterators

# 📌 Overview
Learn how to use C++ standard library iterators to traverse vectors dynamically.

---

# 🧠 Concepts Covered
- Defining vector iterators (`vector<T>::iterator`)
- `begin()` and `end()` iterators
- Dereferencing iterators to read/write values

---

# 💡 Practical Details

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> num{1, 2, 3, 45, 66, 7};
    vector<int>::iterator iter;

    // Forward iteration
    for (iter = num.begin(); iter != num.end(); iter++) {
        cout << *iter << " "; // Dereference iterator
    }
    cout << endl;

    vector<string> name{ "Ahmed", "Mohamed", "Darwish" };
    vector<string>::iterator itern;

    for (itern = name.begin(); itern != name.end(); itern++) {
        cout << *itern << " ";
    }
    return 0;
}
```

---

# 💡 Key Takeaways
- An iterator is an object that points to an element inside a container.
- `begin()` returns an iterator pointing to the first element.
- `end()` returns an iterator pointing past-the-end element (boundary).

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.