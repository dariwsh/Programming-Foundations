# 🧮 Problem #19: Min & Max Element in a Matrix

A C++ solution for analyzing and solving the problem of **Min & Max Element in a Matrix**.

---

## 📋 Problem Description

Generate a 3x3 random matrix and find the minimum and maximum elements in it.

---

## 💡 Key Concepts

- **2D Arrays (Matrices)**
- **Min/Max Search Algorithm**
- **Comparison Logic**

---

## 💻 C++ Code

```cpp
// Description:
//   Generate a 3x3 random matrix and find the
//   minimum and maximum elements in it.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Min/Max Search Algorithm
//   - Comparison Logic
// =============================================

#include <iostream>
#include <iomanip>
using namespace std;

int RandomNumber(int From, int To)
{
    int RandNum = rand() % (To - From + 1) + From;
    return RandNum;
}

void FillMatrixWithRandomNumbers(int Matrix[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            Matrix[i][j] = RandomNumber(1, 10);
        }
    }
}

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

int GetMinimumNumber(int Matrix[3][3], short Rows, short Cols)
{
    int MinValue = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] < MinValue)
            {
                MinValue = Matrix[i][j];
            }
        }
    }

    return MinValue;
}

int GetMaximumNumber(int Matrix[3][3], short Rows, short Cols)
{
    int MaxValue = Matrix[0][0];

    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            if (Matrix[i][j] > MaxValue)
            {
                MaxValue = Matrix[i][j];
            }
        }
    }

    return MaxValue;
}

int main()
{
    srand((unsigned)time(NULL));

    int Matrix1[3][3];

    FillMatrixWithRandomNumbers(Matrix1, 3, 3);

    cout << "\nMatrix1:\n";
    PrintMatrix(Matrix1, 3, 3);

    cout << "\nMinimum Number is: " << GetMinimumNumber(Matrix1, 3, 3) << endl;
    cout << "Maximum Number is: " << GetMaximumNumber(Matrix1, 3, 3) << endl;

    system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #19.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #19.cpp` file.
