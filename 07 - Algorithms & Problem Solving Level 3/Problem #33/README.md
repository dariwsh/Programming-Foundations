# 🧮 Problem #33: Count Vowels in String

A C++ solution for analyzing and solving the problem of **counting vowels in a string**.

---

## 📋 Problem Description

Count the number of vowel letters (a, e, i, o, u) in a given string.

---

## 💡 Key Concepts

- **String Traversal**
- **Character Classification**
- **Vowel Detection**
- **Counting with Loops**

---

## 💻 C++ Code

```cpp
// Description:
//   Count the number of vowel letters (a, e, i, o, u)
//   in a given string.
//
// Key Concepts:
//   - String Traversal
//   - Character Classification
//   - Vowel Detection
//   - Counting with Loops
// =============================================

#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
}


bool IsVowels(char Letter)
{
	Letter = tolower(Letter);
	return  (Letter == 'a' ||
		Letter == 'e' ||
		Letter == 'i' ||
		Letter == 'o' ||
		Letter == 'u');

}

short CountVowels(string S1)
{
	short count = 0;
	for (short i = 0; i < S1.length();i++)
	{
		if (IsVowels(S1[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string S1 = ReadString();


	cout << "\nNumber of vowels is: " << CountVowels(S1);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #33.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #33.cpp` file.
