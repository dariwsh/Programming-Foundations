# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ File Handling - Load File Data into Vector

# 📌 Overview
Learn how to load all text lines from a file directly into a `std::vector<string>` for manipulation.

---

# 🧠 Concepts Covered
- Combining file input streams with dynamic vectors
- Passing vectors by reference (`&`) for performance

---

# 💡 Practical Details

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::in);
    if (MyFile.is_open()) {
        string Line;
        while (getline(MyFile, Line)) {
            vFileContent.push_back(Line); // Store lines dynamically
        }
        MyFile.close();
    }
}

int main() {
    vector<string> fileLines;
    LoadDataFromFileToVector("MyFile.txt", fileLines);
    
    cout << "Loaded " << fileLines.size() << " lines from file.\n";
    return 0;
}
```

---

# 💡 Key Takeaways
- Loading files into vectors allows complete random-access reading in memory.
- Always pass the vector by reference to avoid copying data blocks.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.