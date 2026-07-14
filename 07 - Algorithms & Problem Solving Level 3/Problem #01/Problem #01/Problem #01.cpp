// =============================================
// Problem #01: Fill Matrix With Random Numbers
// =============================================
// Description:
//   Generate a 3x3 matrix filled with random
//   numbers (1-100) and print it.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - Random Number Generation (rand, srand)
//   - Nested Loops
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

int main()
{
	// بناءً على الوقت الحالي، عشان الأرقام تتغير كل مرة تشغل
	srand((unsigned)time(NULL)); 
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);
}