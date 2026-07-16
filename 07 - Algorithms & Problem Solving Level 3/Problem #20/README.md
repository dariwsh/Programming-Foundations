# 🧮 Problem #20: Check if Matrix is Palindrome

A C++ solution for analyzing and solving the problem of **Check if Matrix is Palindrome**.

---

## 📋 Problem Description

Check if each row of a 3x3 matrix reads the same forwards and backwards (Palindrome).

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Palindrome Check**
- **Two-pointer Comparison**

---

## 💻 C++ Code

```cpp
// Description:
//   Check if each row of a 3x3 matrix reads
//   the same forwards and backwards (Palindrome).
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Palindrome Check
//   - Two-pointer Comparison
// =============================================

#include <iostream>
#include <iomanip>
using namespace std;

void PrintMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            printf(" %0*d ", 2, Matrix[i][j]);
        }

        cout << endl;
    }
}

bool IsPalindromeMatrix(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols / 2; j++)
        {
            if (Matrix[i][j] != Matrix[i][Cols - 1 - j])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int Matrix1[3][3] =
    {
        {1, 2, 1},
        {5, 5, 5},
        {7, 3, 7}
    };

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsPalindromeMatrix(Matrix1, 3, 3))
    {
        cout << "\nYes: Matrix is Palindrome.\n";
    }
    else
    {
        cout << "\nNo: Matrix is NOT Palindrome.\n";
    }

    system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #20.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #20.cpp` file.
