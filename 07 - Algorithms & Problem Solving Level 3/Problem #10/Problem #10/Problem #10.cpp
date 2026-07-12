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


int SumMatrix(int arr[3][3], short Rows, short Cols)
{
	int Sum = 0;
	for (short i = 0; i <= Rows - 1; i++)
	{
		for (short j = 0; j <= Cols -1; j++)
		{
			Sum += arr[i][j];
		}
	}
	return Sum;
}

void printSumMatrix(int arr[3][3], short Rows, short Cols)
{
	
		cout <<  " Sum = " << SumMatrix(arr, Rows, Cols) << endl;

}
int main()
{
	//Seeds the random number generator in C++, called only once
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	printSumMatrix(arr, 3, 3);
	system("pause>0");
}