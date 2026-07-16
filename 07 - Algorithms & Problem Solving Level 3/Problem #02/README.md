# 🧮 Problem #02: Sum of Each Row in a Matrix

A C++ solution for analyzing and solving the problem of **Sum of Each Row in a Matrix**.

---

## 📋 Problem Description

Generate a 3x3 random matrix and calculate the sum of each row, then print the results.

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Row-wise Traversal**
- **Accumulator Pattern**

---

## 💻 C++ Code

```cpp
// Description:
//   Generate a 3x3 random matrix and calculate
//   the sum of each row, then print the results.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Row-wise Traversal
//   - Accumulator Pattern
// =============================================

#include<iostream>
#include<string>
using namespace std;

int RandomNumber(int Form, int To)
{
	int RandNumber = rand() % (To - Form + 1) + Form;
	return RandNumber;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << "   " << arr[i][j] << "  ";
		}
		cout << "\n";
	}
}

int SumMatrixRows(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;
	for (int i = 0; i < Cols; i++)
	{
		sum += arr[Rows][i];
	}
	return sum;
}
void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		cout << " Row " << i + 1 << " Sum = " << SumMatrixRows(arr, i, Cols) << endl;
	}
}


int main()
{
	// بناءً على الوقت الحالي، عشان الأرقام تتغير كل مرة تشغل
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);

	PrintEachRowSum(arr, 3, 3);
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #02.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #02.cpp` file.
