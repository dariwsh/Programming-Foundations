# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ File Handling - Save Vector to File

# 📌 Overview
Understand how to write a vector database of strings back to a text file sequentially.

---

# 🧠 Concepts Covered
- Iterating vectors and writing variables to file
- File overwriting to synchronize memory database to disk

---

# 💡 Practical Details

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void SaveVectorToFile(string FileName, vector<string>& vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::out); // Open in overwrite mode

    if (MyFile.is_open()) {
        for (const string& Line : vFileContent) {
            MyFile << Line << endl; // Write back line-by-line
        }
        MyFile.close();
    }
}

int main() {
    vector<string> content = {"Line 1", "Line 2", "Line 3"};
    SaveVectorToFile("MyFile.txt", content);
    return 0;
}
```

---

# 💡 Key Takeaways
- Saving dynamic memory vectors back to file uses write-only `ios::out` mode to synchronize states.
- Ensure you close the stream after the loop completes.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.