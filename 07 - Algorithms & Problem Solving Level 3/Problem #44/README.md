# 🧮 Problem #44: Remove Punctuations

A C++ solution for **removing all punctuation marks from a string**.

---

## 📋 Problem Description

Write a function `RemovePunctuationsFromString` that reads a string and filters out all punctuation marks (e.g., `,`, `.`, `;`, `'`, etc.).

---

## 💡 Key Concepts

- **String Filtering**
- **Punctuation Check (`std::ispunct`)**

---

## 💻 C++ Code

```cpp
#include <iostream> 
#include <string> 
#include <vector> 
using namespace std;


string RemovePunctuationsFromString(string S1)
{
	string S2 = "";
	for (int i = 0; i < S1.length(); i++)
	{
		if (!ispunct(S1[i]))
		{
			S2 += S1[i];
		}
	}
	return S2;
}

int main()
{
	string S1 = "Welcome to Jordan, Jordan is a nice country; it'samazing.";
	cout << "Original String:\n" << S1;
	cout << "\n\nPauncuations Removed:\n" <<RemovePunctuationsFromString(S1);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #44.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #44.cpp` file.
