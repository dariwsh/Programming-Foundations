# 🧮 Problem #32: Is Vowel?

A C++ solution for analyzing and solving the problem of **checking if a character is a vowel**.

---

## 📋 Problem Description

Check if a given character is a vowel letter (a, e, i, o, u) regardless of case.

---

## 💡 Key Concepts

- **Character Classification**
- **Case Conversion**
- **Boolean Logic**

---

## 💻 C++ Code

```cpp
// Description:
//   Check if a given character is a vowel letter
//   (a, e, i, o, u) regardless of case.
//
// Key Concepts:
//   - Character Classification
//   - Case Conversion
//   - Boolean Logic
// =============================================

#include <string>
#include <iostream>
using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
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


int main()
{
	char Ch1 = ReadChar();
	if (IsVowels(Ch1))
	{
		cout << "Yes Letter " << Ch1 << " is Vowel\n";
	}
	else
	{
		cout << "No Letter " << Ch1 << " is not Vowel\n";
	}
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #32.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #32.cpp` file.
