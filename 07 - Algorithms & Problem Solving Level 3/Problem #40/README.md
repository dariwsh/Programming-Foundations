# 🧮 Problem #40: Join String (Vector & Array)

A C++ solution demonstrating **Function Overloading to join either a vector of strings or an array of strings**.

---

## 📋 Problem Description

Write two overloaded functions named `JoinString` to join elements into a single string with a custom delimiter:
1. One taking a `vector<string>`.
2. Another taking a standard array of strings `string[]` and its length.

---

## 💡 Key Concepts

- **Function Overloading**
- **Vector and Array Traversal**
- **String Concatenation**

---

## 💻 C++ Code

```cpp
#include <string>
#include <iostream>
#include <vector>

using namespace std;


string JoinString(vector<string>vString, string Delim)
{
	string S1 = "";
	for (string& S : vString)
	{
		S1 = S1 + S + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

string JoinString(string vString[] , short length, string Delim)
{
	string S1 = "";
	for (short i = 0 ; i < length; i++)
	{
		S1 = S1 + vString[i] + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}


int main()
{
	vector<string>vString = { "Ahmed","Mohamed","Ali"};
	string arrString[] = { "Mohammed","Faid","Ali","Maher" };

	cout << "\nVector after join: \n";
	cout << JoinString(vString, "  ");

	cout << "\n\nArray after join: \n";
	cout << JoinString(arrString,4 , " ");


	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #40.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #40.cpp` file.
