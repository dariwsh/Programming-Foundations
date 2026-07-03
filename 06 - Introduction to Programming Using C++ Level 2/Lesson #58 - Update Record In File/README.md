# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ File Handling - Update Record in File

# 📌 Overview
Learn how to find and update specific record lines inside a text database using vector buffers.

---

# 🧠 Concepts Covered
- Record updates inside memory buffers
- Overwriting files with updated vectors

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
            vFileContent.push_back(Line);
        }
        MyFile.close();
    }
}

void SaveVectorToFile(string FileName, vector<string>& vFileContent) {
    fstream MyFile;
    MyFile.open(FileName, ios::out);
    if (MyFile.is_open()) {
        for (string& Line : vFileContent) {
            if (Line != "") {
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}

void UpdateRecordFromFile(string FileName, string Record, string Update) {
    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
    for (string& Line : vFileContent) {
        if (Line == Record) {
            Line = Update; // Replace old record with new update
        }
    }
    SaveVectorToFile(FileName, vFileContent);
}

int main() {
    UpdateRecordFromFile("MyFile.txt", "Ali", "omar");
    return 0;
}
```

---

# 💡 Key Takeaways
- Updating records involves locating the target line in memory and substituting it.
- Always save the complete updated vector to reflect updates in the physical file.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.