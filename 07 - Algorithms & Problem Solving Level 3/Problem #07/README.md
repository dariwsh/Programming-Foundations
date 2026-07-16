# 🧮 Problem #07: Transpose a Matrix

A C++ solution for analyzing and solving the problem of **Transpose a Matrix**.

---

## 📋 Problem Description

Fill a 3x3 matrix with ordered numbers, then transpose it (swap rows and columns) and print both matrices.

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Matrix Transposition**
- **Index Swapping (arr[i][j] → arr[j][i])**

---

## 💻 C++ Code

```cpp
// Description:
//   Fill a 3x3 matrix with ordered numbers,
//   then transpose it (swap rows and columns)
//   and print both matrices.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Matrix Transposition
//   - Index Swapping (arr[i][j] → arr[j][i])
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
#include <ctime>
using namespace std;

void FillMatrixWithOrderedNumbers(int arr[3][3], short Rows, short
	Cols)
{
	int count = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			count++;
			arr[i][j] = count;
		}
	}
}
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
void TransposeMatrix(int arr[3][3], int arrTranspose[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arrTranspose[i][j] = arr[j][i];
		}
	}

}



int main()
{
	int arr[3][3], ArrayTransposeMatrix[3][3];
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);
	cout << "------------------------\n";
	TransposeMatrix(arr, ArrayTransposeMatrix, 3, 3);
	PrintMatrix(ArrayTransposeMatrix, 3, 3);
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #07.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #07.cpp` file.
