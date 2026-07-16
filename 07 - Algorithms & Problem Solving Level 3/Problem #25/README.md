# 🧮 Problem #25: Lower First Letter of Each Word (Function)

A C++ solution for analyzing and solving the problem of **Lower First Letter of Each Word (Function)**.

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

#include <string>
#include <iostream>
using namespace std;
string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}
string LowerFirstLetterOfEachWord(string S1)
{
	bool isFirstLetter = true;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ' && isFirstLetter)
		{
			S1[i] = tolower(S1[i]);
		}
		isFirstLetter = (S1[i] == ' ' ? true : false);
	}
	return S1;
}
int main()
{
	string S1 = ReadString();
	cout << "\nString after conversion:\n";
	S1 = LowerFirstLetterOfEachWord(S1);
	cout << S1 << endl;
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #25.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #25.cpp` file.
