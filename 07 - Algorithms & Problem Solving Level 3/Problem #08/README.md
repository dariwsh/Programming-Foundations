# 🧮 Problem #08: Multiply Two Matrices

A C++ solution for analyzing and solving the problem of **Multiply Two Matrices**.

---

## 📋 Problem Description

Generate two 3x3 random matrices, multiply them element by element, and print the result.

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Element-wise Multiplication**
- **Multiple Matrix Operations**

---

## 💻 C++ Code

```cpp
// Description:
//   Generate two 3x3 random matrices, multiply
//   them element by element, and print the result.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Element-wise Multiplication
//   - Multiple Matrix Operations
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int RandomNumber(int From, int To)
{
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short
	Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 10);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			printf(" %0*d ", 2, arr[i][j]);
		}
		cout << "\n";
	}
}

void MultiplyMatrices(int arr1[3][3], int arr2[3][3],
	int arr3Mult[3][3], short Cols, short Rows)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			arr3Mult[i][j] = arr1[i][j] * arr2[i][j];
		}
	}
}



int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr1[3][3];
	int arr2[3][3];
	int arr3[3][3];
	
	FillMatrixWithRandomNumbers(arr1, 3, 3);
	FillMatrixWithRandomNumbers(arr2, 3, 3);

	cout << "\nmatrix 1:\n";
	PrintMatrix(arr1, 3, 3);
	cout << "\nmatrix 2:\n";
	PrintMatrix(arr2, 3, 3);
	cout << "\nresult:\n";
	MultiplyMatrices(arr1, arr2, arr3, 3, 3);
	PrintMatrix(arr3, 3, 3);
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #08.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #08.cpp` file.
