# 🧮 Problem #17: Search for a Number in a Matrix

A C++ solution for analyzing and solving the problem of **Search for a Number in a Matrix**.

---

## 📋 Problem Description

Search for a user-entered number in a 3x3 matrix and report whether it exists or not.

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Linear Search in Matrix**
- **Boolean Functions & User Input**

---

## 💻 C++ Code

```cpp
// Description:
//   Search for a user-entered number in a 3x3
//   matrix and report whether it exists or not.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Linear Search in Matrix
//   - Boolean Functions & User Input
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << " ";
		}
		cout << "\n";
	}
}


bool IsNumberInMatrix(int Matrix1[3][3],
	int Number, short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				return true;
			}

		}
	}
	return false;
}
void PrintSearchResult(int Matrix1[3][3],
	int Number, short Rows, short Cols)
{
	if (IsNumberInMatrix(Matrix1, Number, 3, 3))
		cout << "\nYes: It is there.\n";
	else
		cout << "\nNo: It is NOT there.\n";
}
int main()
{

	int Matrix1[3][3] = { {9,1,0},{1,9,9},{0,0,9} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	int Number;
	cout << "\nEnter the number to search for: ";
	cin >> Number;

	cout << "\nSearching for " << Number << "...\n";
	PrintSearchResult(Matrix1, Number, 3, 3);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #17.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #17.cpp` file.
