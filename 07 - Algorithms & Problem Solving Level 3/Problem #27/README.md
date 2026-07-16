# 🧮 Problem #27: Invert Character Case

A C++ solution for analyzing and solving the problem of **Invert Character Case**.

---

## 📋 Problem Description

Write a program to read a character and invert its case (upper to lower, lower to upper).

---

## 💡 Key Concepts

- **Character Manipulation**
- **isupper() Function**
- **toupper() & tolower() Functions**

---

## 💻 C++ Code

```cpp
// Description:
//   Write a program to read a character and
//   invert its case (upper to lower, lower to upper).
//
// Key Concepts:
//   - Character Manipulation
//   - isupper() Function
//   - toupper() & tolower() Functions
// =============================================

#include <string>
#include <iostream>
using namespace std;

char ReadChar()
{
	char S1;
	cout << "Please Enter Your Char?\n";
	cin >> S1;
	return S1;
}

char Convert(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}


int main()
{
	char S1 = ReadChar();
	cout << "\n Char after inverting case: \n";
	S1 = Convert(S1);
	cout << S1 << endl;

	
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #27.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #27.cpp` file.
