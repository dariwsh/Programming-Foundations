# 🧮 Problem #42: Replace Words

A C++ solution for **replacing specific words inside a string**.

---

## 📋 Problem Description

Write a function `replaceWordString` that finds all occurrences of a specific word in a string and replaces them with another word.

---

## 💡 Key Concepts

- **String Search (`std::string::find`)**
- **String Replace (`std::string::replace`)**

---

## 💻 C++ Code

```cpp
#include <string>
#include <iostream>
#include <vector>

using namespace std;
   
string ReadString()
{
	cout << "Please Enter Your String:\n";
	string S1;
	getline(cin, S1);
	return S1;
}

string ReadStringToReplace()
{
	cout << "\nPlease Enter The Word To Replace:\n";
	string Word;
	cin >> Word;
	return Word;
}

string ReadReplaceTo()
{
	cout << "\nPlease Enter The New Word:\n";
	string NewWord;
	cin >> NewWord;
	return NewWord;
}

string replaceWordString(string S1, string replace, string replaceTo)
{
	short pos = S1.find(replace);
	while (pos != std::string::npos)
	{
		S1 = S1.replace(pos, replace.length(), replaceTo);
		pos = S1.find(replace);
	}
	return S1;
}

int main()
{
	string S1 = ReadString();
	string StringToReplace = ReadStringToReplace();
	string ReplaceTo = ReadReplaceTo();

	cout << "\nOriginal String:\n";
	cout << S1;

	cout << "\n\nAfter Replace:\n";
	cout << replaceWordString(S1, StringToReplace, ReplaceTo);

	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #42.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #42.cpp` file.
