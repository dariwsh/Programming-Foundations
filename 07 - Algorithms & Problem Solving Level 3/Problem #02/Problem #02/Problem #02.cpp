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

int SumMatrixRows(int arr[3][3], short Rows, short Cols)
{
	int sum = 0;
	for (int i = 0; i < Cols; i++)
	{
		sum += arr[Rows][i];
	}
	return sum;
}
void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
{
	for (int i = 0; i < Rows; i++)
	{
		cout << " Row " << i + 1 << " Sum = " << SumMatrixRows(arr, i, Cols) << endl;
	}
}


int main()
{
	// بناءً على الوقت الحالي، عشان الأرقام تتغير كل مرة تشغل
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	PrintMatrix(arr, 3, 3);

	PrintEachRowSum(arr, 3, 3);
}