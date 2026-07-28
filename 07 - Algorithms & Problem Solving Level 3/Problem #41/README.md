# 🧮 Problem #41: Reverse Words

A C++ solution for **reversing the order of words in a given string**.

---

## 📋 Problem Description

Write a function `ReverseWordString` that reads a string and reverses the order of its words (e.g., "Welcome to Jordan" becomes "Jordan to Welcome").

---

## 💡 Key Concepts

- **String Splitting**
- **Vector Iterators (`std::vector::iterator`)**
- **Reversed Traversal**

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

vector<string>SplitString(string S1, string Delim)
{
	vector<string>vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(Delim)) != string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());

	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

string ReverseWordString(string S1)
{
	vector<string>vString = SplitString(S1, " ");

	string S2 = "";

	vector<string>::iterator iter = vString.end();
	while (iter != vString.begin())
	{
		--iter;
		S2 += *iter + " ";
	}
	S2 = S2.substr(0, S2.length() - 1);
	return S2;
	
}

int main()
{
	
	string S1 = ReadString();
	cout << "\n\nString after reversing words:";
	cout << "\n"<< ReverseWordString(S1);

	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #41.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #41.cpp` file.
