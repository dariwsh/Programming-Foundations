# 🧮 Problem #15: Count Number in Matrix

A C++ solution for analyzing and solving the problem of **Count Number in Matrix**.

---

## 📋 Problem Description

Count how many times a specific number appears in a 3x3 matrix.

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Counting Pattern**
- **User Input (cin)**

---

## 💻 C++ Code

```cpp
// Description:
//   Count how many times a specific number
//   appears in a 3x3 matrix.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Counting Pattern
//   - User Input (cin)
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


short CountNumberInMatrix(int Matrix1[3][3],
	int Number , short Rows, short Cols)
{
	short NumberCount = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (Matrix1[i][j] == Number)
			{
				 NumberCount++;
			};
			
		}
	}
	return NumberCount;
}
int main()
{

	int Matrix1[3][3] = { {9,1,0},{1,9,9},{0,0,9} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	int Number;
	cout << "\nEnter the number to count in matrix? ";
	cin >> Number;

	cout << "\nNumber " << Number << " count in matrix is "
		<< CountNumberInMatrix(Matrix1, Number, 3, 3);
	system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #15.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #15.cpp` file.
