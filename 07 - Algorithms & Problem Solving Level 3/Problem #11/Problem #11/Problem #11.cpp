#include <iostream>
#include <string>
#include <iomanip>
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
int SumOfMatrix(int Matrix1[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i < Rows; i++)
	{
		for (short j = 0; j < Cols; j++)
		{
			Sum += Matrix1[i][j];
		}
	}
	return Sum;
}


bool AreMatricesEqual(int Matrix1[3][3], int Matrix2[3][3] ,  short Rows, short Cols)
{
	return (SumOfMatrix(Matrix1, Rows, Cols)) == (SumOfMatrix(Matrix2, Rows, Cols));
}

void PrintCheck(int Matrix1[3][3], int Matrix2[3][3], short Rows, short Cols)
{
	if (AreMatricesEqual( Matrix1,  Matrix2,  Rows,  Cols))
	{
		cout << "The Matrix is equal\n";
	}
	else
	{
		cout << "The Matrix is not equal\n";

	}
}

int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int Matrix1[3][3]  , Matrix2[3][3];
	FillMatrixWithRandomNumbers(Matrix1, 3, 3);
	FillMatrixWithRandomNumbers(Matrix2, 3, 3);

	cout << "\n Matrix 1:\n";
	PrintMatrix(Matrix1, 3, 3);
	cout << "\n Matrix 2:\n";
	PrintMatrix(Matrix2, 3, 3);



	PrintCheck(Matrix1, Matrix2, 3, 3);
	system("pause>0");
}