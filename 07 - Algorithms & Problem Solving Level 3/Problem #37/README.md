# 🧮 Problem #37: Split String

A C++ solution for **splitting a string into a vector of tokens using a custom delimiter**.

---

## 📋 Problem Description

Write a function that takes a string and a custom delimiter string (which can be more than one character) and splits the string into a vector of substrings (tokens), then prints them along with the token count.

---

## 💡 Key Concepts

- **String Search (`std::string::find`)**
- **Substring Extraction (`std::string::substr`)**
- **Dynamic Array (`std::vector`)**
- **String Erasure (`std::string::erase`)**

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

int main()
{
	vector<string>vString;
	string S1 = "Ahmed*,,*Mohmammed*,,*Ali";
	vString = SplitString(S1, "*,,*");

	//vString = SplitString(ReadString() , " ");
	cout << "\nTokens = " << vString.size() << endl;
	for (string& S : vString)
	{
		cout << S << endl;
	}

	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #37.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #37.cpp` file.
