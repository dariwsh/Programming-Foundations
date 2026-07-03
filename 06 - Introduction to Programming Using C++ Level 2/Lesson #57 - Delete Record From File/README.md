# 📘 Introduction
In this lesson, we learned about:

# 📘 Introduction

In this lesson, we learned about:

# C++ File Handling - Delete Record from File

# 📌 Overview
Learn the standard pattern to delete lines or records from flat text files using memory buffers.

---

# 🧠 Concepts Covered
- In-memory records modification
- Skipping empty strings during file writes

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
            if (Line != "") { // Skip deleted records
                MyFile << Line << endl;
            }
        }
        MyFile.close();
    }
}

void DeleteRecordFromFile(string FileName, string Record) {
    vector<string> vFileContent;
    LoadDataFromFileToVector(FileName, vFileContent);
    for (string& Line : vFileContent) {
        if (Line == Record) {
            Line = ""; // Mark as deleted
        }
    }
    SaveVectorToFile(FileName, vFileContent); // Rewrite
}

int main() {
    DeleteRecordFromFile("MyFile.txt", "ali");
    return 0;
}
```

---

# 💡 Key Takeaways
- You cannot easily insert or delete lines directly in the middle of a text file on disk.
- The standard pattern is: Load to Vector -> Mark or Remove -> Save Vector back to file.

---

# 👨‍💻 Author
Ahmed Darwish 🚀 🚀 Software Engineering Student
I share my journey in learning programming, my projects, and my study summaries.
🌐 Portfolio [https://darwish.xo.je](https://darwish.xo.je)
💻 GitHub [https://github.com/dariwsh](https://github.com/dariwsh)
🔗 LinkedIn [https://www.linkedin.com/in/ahmed-darwish-33b752330/](https://www.linkedin.com/in/ahmed-darwish-33b752330/)
🤝 Any advice or feedback is always welcome, learning never stops.
❤️ Thanks for visiting.