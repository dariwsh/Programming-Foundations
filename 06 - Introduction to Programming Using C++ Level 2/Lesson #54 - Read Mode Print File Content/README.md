# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ File Handling - Reading File Content

# 📌 Overview
Learn how to open files in input read mode and read lines sequentially from a file.

---

# 🧠 Concepts Covered
- Input stream mode (`ios::in`)
- Line-by-line file reading with `getline()`

---

# 💡 Practical Details

```cpp
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void PrintFileContent(string FileName) {
    fstream MyFile;
    MyFile.open(FileName, ios::in); // Open in read mode

    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) { // Loop until End of File
            cout << Line << endl;
        }
        MyFile.close();
    }
}

int main() {
    PrintFileContent("MyFile.txt");
    return 0;
}
```

---

# 💡 Key Takeaways
- Use `ios::in` to read files.
- `getline(stream, string)` returns false when the End of File (EOF) is reached, making it ideal for loop checks.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.