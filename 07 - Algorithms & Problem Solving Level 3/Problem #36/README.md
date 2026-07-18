# 🧮 Problem #36: Count Words in String

A C++ solution for analyzing and solving the problem of **counting words in a string**.

---

## 📋 Problem Description

Count the number of words in a given string by splitting it using spaces as delimiters.

---

## 💡 Key Concepts

- **String Splitting**
- **Delimiter-Based Parsing**
- **Word Counting**
- **`find()` and `substr()` Methods**

---

## 💻 C++ Code

```cpp
// Description:
//   Count the number of words in a given string
//   by splitting it using spaces as delimiters.
//
// Key Concepts:
//   - String Splitting
//   - Delimiter-Based Parsing
//   - Word Counting
//   - find() and substr() Methods
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

short CountWords(string S1)
{
	short Counter = 0;
	string delim = " ";
	short pos = 0;
	string sWord;
	while ((pos = S1.find(delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			Counter++;
		}
		S1.erase(0, pos + delim.length());
	}
	if (S1 != "")
	{
		Counter++;
	}
	return Counter;
}


int main()
{
	string S1 = ReadString();
	cout << CountWords(S1);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #36.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #36.cpp` file.
