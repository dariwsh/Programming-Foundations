# 🧮 Problem #35: Print Each Word in String

A C++ solution for analyzing and solving the problem of **printing each word in a string**.

---

## 📋 Problem Description

Split a string by spaces and print each word on a separate line.

---

## 💡 Key Concepts

- **String Splitting**
- **Delimiter-Based Parsing**
- **`find()` and `substr()` Methods**
- **`erase()` for String Manipulation**

---

## 💻 C++ Code

```cpp
// Description:
//   Split a string by spaces and print each word
//   on a separate line.
//
// Key Concepts:
//   - String Splitting
//   - Delimiter-Based Parsing
//   - find() and substr() Methods
//   - erase() for String Manipulation
// =============================================

#include <string>
#include <iostream>
using namespace std;
string ReadString()
{
	string S1;
	cout << "\nPlease Enter Your String?\n";
	getline(cin, S1);
	return S1;
}

void PrintEachWordInString(string S1)
{
	string delim = " "; // delimiter
	cout << "\nYour string wrords are: \n\n";
	short pos = 0;
	string sWord; // define a string variable
	// use find() function to get the position of the delimiters
	// string::npos لم أجد.
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos); // store the word
		if (sWord != "")
		{
			cout << sWord << endl;
		}
		S1.erase(0, pos + delim.length()); /* erase() until
		positon and move to next word. */
	}
	if (S1 != "")
	{
		cout << S1 << endl; // it print last word of the string.
	}
}


int main()
{
	string S1 = ReadString();
	cout << S1.find(" ");
	PrintEachWordInString(S1);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #35.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #35.cpp` file.
