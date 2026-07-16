# 🧮 Problem #06: Fill Matrix With Ordered Numbers

A C++ solution for analyzing and solving the problem of **Fill Matrix With Ordered Numbers**.

---

## 📋 Problem Description

Fill a 3x3 matrix with ordered numbers from 1 to 9 and print it.

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Sequential Filling**
- **Counter Variable**

---

## 💻 C++ Code

```cpp
// Description:
//   Fill a 3x3 matrix with ordered numbers
//   from 1 to 9 and print it.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Sequential Filling
//   - Counter Variable
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






int main()
{
	int arr[3][3];
	FillMatrixWithOrderedNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 ordered matrix:\n";
	PrintMatrix(arr, 3, 3);
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #06.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #06.cpp` file.
