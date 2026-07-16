# 🧮 Problem #23: Lower First Letter of Each Word

A C++ solution for analyzing and solving the problem of **Lower First Letter of Each Word**.

---

## 📋 Problem Description

Write a program to lower the first letter of each word in a given string.

---

## 💡 Key Concepts

- **String Traversal**
- **Character Manipulation**
- **tolower() Function**

---

## 💻 C++ Code

```cpp
// Description:
//   Write a program to lower the first letter
//   of each word in a given string.
//
// Key Concepts:
//   - String Traversal
//   - Character Manipulation
//   - tolower() Function
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Enter Your Name :\n";
    getline(cin, S1);
    return S1;
}

void LowerFirstLetterOfEachWord(string S1)
{
    cout << "\nString after conversion:\n";
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {
            S1[i] = tolower(S1[i]);
            
        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }

    cout << S1 << endl;
}


int main()
{
    LowerFirstLetterOfEachWord(ReadString());
    system("pause>0");

}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #23.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #23.cpp` file.
