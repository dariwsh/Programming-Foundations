// =============================================
// Problem #05: Store Column Sums in a Separate Array
// =============================================
// Description:
//   Generate a 3x3 random matrix, calculate the
//   sum of each column, store results in a separate
//   array, and print them.
//
// Key Concepts:
//   - 2D Arrays (Matrices)
//   - 1D Arrays for Storage
//   - Column Sum Calculation
//   - Function Decomposition
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
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
			arr[i][j] = RandomNumber(1, 100);
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


int ColSum(int arr[3][3], short ColNumber, short Rows)
{
	int Sum = 0;
	for (short j = 0; j <= Rows - 1; j++)
	{
		Sum += arr[j][ColNumber];
	}
	return Sum;
}



void fillArraySumCols(int arr[3][3], int arrSum[3], short Rows, short Cols)
{
	for (int i = 0; i < Cols; i++) {
		arrSum[i] = ColSum(arr, i, Rows);
	}
}

void printSumArrayCols( int arrSum[3] ,short Cols)
{
	for (int i = 0; i < Cols; i++)
	{
		cout << "Sum Col " << i + 1 << " Sum = " << arrSum[i] << endl;
	}
}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	int arrSum[3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	fillArraySumCols(arr, arrSum, 3, 3);
	printSumArrayCols(arrSum, 3);
	system("pause>0");
}