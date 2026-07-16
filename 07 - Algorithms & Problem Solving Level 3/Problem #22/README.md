# 🧮 Problem #22: Print Fibonacci Using Recursion

A C++ solution for analyzing and solving the problem of **Print Fibonacci Using Recursion**.

---

## 📋 Problem Description

Write a program to print Fibonacci series of a given number of terms using recursion.

---

## 💡 Key Concepts

- **Recursion**
- **Fibonacci Sequence**

---

## 💻 C++ Code

```cpp
// Description:
//   Write a program to print Fibonacci series
//   of a given number of terms using recursion.
//
// Key Concepts:
//   - Recursion
//   - Fibonacci Sequence
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void PrintFibonacciUsingRecurssion(short Number , int Prev1, int Prev2 )
{
	int FebNumber = 0;
	
	if (Number > 0)
	{
		FebNumber = Prev1 + Prev2;

		Prev2 = Prev1;
		Prev1 = FebNumber;
		cout << FebNumber << "  ";
		PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
	}
	
		
}



int main()
{
	int Number;
	cout << "Enter Number Fibonacci Series : \n";
	cin >> Number;
	PrintFibonacciUsingRecurssion(Number , 0 , 1);

	system("pause>0");

}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #22.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #22.cpp` file.
