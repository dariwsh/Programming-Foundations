# 🧮 Problem #31: Count Letter (Match Case)

A C++ solution for analyzing and solving the problem of **Count Letter with Match Case option**.

---

## 📋 Problem Description

Count how many times a specific character appears in a given string, with an option to match case sensitivity or ignore it.

---

## 💡 Key Concepts

- **String Traversal**
- **Character Comparison**
- **Case Sensitivity Handling**
- **Default Parameters**

---

## 💻 C++ Code

```cpp
// Description:
//   Count how many times a specific character
//   appears in a given string, with an option to
//   match case sensitivity or ignore it.
//
// Key Concepts:
//   - String Traversal
//   - Character Comparison
//   - Case Sensitivity Handling
//   - Default Parameters
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
char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
}
char InvertLetterCase(char char1)
{
	return isupper(char1) ? tolower(char1) : toupper(char1);
}
short CountLetter(string S1, char Letter, bool MatchCase = true)
{
	short Counter = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (MatchCase)
		{
			if (S1[i] == Letter)
				Counter++;
		}
		else
		{
			if (tolower(S1[i]) == tolower(Letter))
				Counter++;
		}
	}
	return Counter;
}

int main()
{
	string S1 = ReadString();
	char Ch1 = ReadChar();
	cout << "\nLetter \'" << Ch1 << "\' Count = " <<
		CountLetter(S1, Ch1);
	cout << "\nLetter \'" << Ch1 << "\' ";
	cout << "Or \'" << InvertLetterCase(Ch1) << "\' ";
	cout << " Count = " << CountLetter(S1, Ch1, false);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #31.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #31.cpp` file.
