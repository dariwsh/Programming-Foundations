# 🧮 Problem #34: Print Vowels in String

A C++ solution for analyzing and solving the problem of **printing all vowels in a string**.

---

## 📋 Problem Description

Print all vowel letters found in a given string.

---

## 💡 Key Concepts

- **String Traversal**
- **Character Classification**
- **Vowel Detection**
- **Selective Printing**

---

## 💻 C++ Code

```cpp
// Description:
//   Print all vowel letters found in a given string.
//
// Key Concepts:
//   - String Traversal
//   - Character Classification
//   - Vowel Detection
//   - Selective Printing
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
bool IsVowel(char Ch1)
{
	Ch1 = tolower(Ch1);
	return ((Ch1 == 'a') || (Ch1 == 'e') || (Ch1 == 'i') || (Ch1
		== 'o') || (Ch1 == 'u'));
}
void PrintVowels(string S1)
{
	cout << "\nVowels in string are: ";
	for (short i = 0; i < S1.length(); i++)
	{
		if (IsVowel(S1[i]))
			cout << S1[i] << " ";
	}
}
int main()
{
	string S1 = ReadString();
	PrintVowels(S1);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #34.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #34.cpp` file.
