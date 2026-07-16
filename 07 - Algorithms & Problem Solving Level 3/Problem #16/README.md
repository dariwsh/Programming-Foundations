# 🧮 Problem #16: Check if Matrix is Sparse

A C++ solution for analyzing and solving the problem of **Check if Matrix is Sparse**.

---

## 📋 Problem Description

Check if a 3x3 matrix is Sparse (has more zeros than non-zero elements).

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Sparse Matrix Definition**
- **Zero Counting**

---

## 💻 C++ Code

```cpp
// Description:
//   Check if a 3x3 matrix is Sparse (has more
//   zeros than non-zero elements).
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Sparse Matrix Definition
//   - Zero Counting
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
            cout << setw(3) << Matrix[i][j] << " ";
        }
        cout << endl;
    }
}

short CountNumberZero(int Matrix[3][3], short Rows, short Cols)
{
    short ZeroCount = 0;

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] == 0)
                ZeroCount++;
        }
    }

    return ZeroCount;
}

bool IsSparseMatrix(int Matrix[3][3], short Rows, short Cols)
{
    short ZeroCount = CountNumberZero(Matrix, Rows, Cols);
    short NonZeroCount = Rows * Cols - ZeroCount;

    return (ZeroCount > NonZeroCount);
}

int main()
{
    int Matrix1[3][3] =
    {
        {0,0,0},
        {0,9,1},
        {0,0,9}
    };

    cout << "Matrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    if (IsSparseMatrix(Matrix1, 3, 3))
        cout << "\nYes: It is Sparse.\n";
    else
        cout << "\nNo: It is NOT Sparse.\n";

    system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #16.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #16.cpp` file.
