# 🧮 Problem #39: Join String (From Vector)

A C++ solution for **joining a vector of strings into a single string with a custom delimiter**.

---

## 📋 Problem Description

Write a function `JoinString` that takes a `vector<string>` and a custom delimiter string and joins them into a single string.

---

## 💡 Key Concepts

- **Vector Traversal**
- **String Concatenation**
- **Substring Extraction (`std::string::substr` to remove trailing delimiter)**

---

## 💻 C++ Code

```cpp
#include <string>
#include <iostream>
#include <vector>

using namespace std;
string ReadString()
{
	string S1;
	cout << "\nPlease Enter Your String?\n";
	getline(cin, S1);
	return S1;
}


string JoinString(vector<string>vString, string Delim)
{
	string S1 ="";
	for (string& S : vString)
	{
		S1 = S1 + S + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

int main()
{
	vector<string>vString = { "Ahmed","Mohamed" };

	//vString = SplitString(ReadString() , " ");
	string Result = JoinString(vString, " , ");
	cout << Result;

	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #39.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #39.cpp` file.
