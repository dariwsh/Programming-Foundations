# 🧮 Problem #38: Trim String (Left, Right, All)

A C++ solution for **trimming leading, trailing, or all edge spaces from a string**.

---

## 📋 Problem Description

Write functions to trim spaces from a string:
1. `TrimLeft`: Removes all leading spaces.
2. `TrimRight`: Removes all trailing spaces.
3. `Trim`: Removes both leading and trailing spaces.

---

## 💡 Key Concepts

- **String Traversal**
- **Substring Extraction (`std::string::substr`)**
- **Character Comparison**

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

string TrimLeft(string S1)
{
	for (int i = 0; i < S1.length(); i++)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(i, S1.length() - i);
		}
	}
	return "";
}


string TrimRight(string S1)
{

	for (int i = S1.length(); i >= 0; i--)
	{
		if (S1[i] != ' ')
		{
			return S1.substr(0, i + 1);
		}
	}
	return "";
}


string Trim(string S1)
{
	return TrimLeft(TrimRight(S1));
}


int main()
{
	string S1               = "          Mohammed Abu-Hahdoud         ";
	cout << "\nString       = " << S1;
	cout << "\n\nTrim left  = " << TrimLeft(S1);
	cout << "\nTrim Right   = " << TrimRight(S1);
	cout << "\nTrim         = " << Trim(S1);


	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #38.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #38.cpp` file.
