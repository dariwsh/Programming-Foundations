# 🧮 Problem #13: Check if Matrix is Identity

A C++ solution for analyzing and solving the problem of **Check if Matrix is Identity**.

---

## 📋 Problem Description

Check if a given 3x3 matrix is an Identity Matrix (1s on diagonal, 0s elsewhere).

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Identity Matrix Properties**
- **Diagonal Check (i == j)**

---

## 💻 C++ Code

```cpp
// Description:
//   Check if a given 3x3 matrix is an Identity
//   Matrix (1s on diagonal, 0s elsewhere).
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Identity Matrix Properties
//   - Diagonal Check (i == j)
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

bool IsIdentityMarix(int Matrix1[3][3], 
	short Rows, short Cols)
{
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			if (i==j && Matrix1[i][j] != 1)
			{
				return false;
			}
		}
	}
	return true;
}
int main()
{
	
	//int Matrix1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int Matrix1[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	cout << "\nMatrix1:\n";
	PrintMatrix(Matrix1, 3, 3);
	if (IsIdentityMarix(Matrix1, 3, 3))
		cout << "\nYES: Matrix is identity.";
	else
		cout << "\nNo: Matrix is NOT identity.";


}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #13.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #13.cpp` file.
