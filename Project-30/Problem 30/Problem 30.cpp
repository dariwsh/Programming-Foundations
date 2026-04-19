#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;

int readNumberPositive(string message)
{
	int Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}


int RandomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void FillArray(int arr[100], int arrLength)
{
	
	for (int i = 0; i < arrLength; i++)
	
		arr[i] = RandomNumber(1, 100);
	
}


void SumOf2Arrays(int arr1[100], int arr2[100], int arrSum[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrSum[i] = arr1[i] + arr2[i];
	}
}



void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}


int main() {
	srand((unsigned)time(NULL));

	int arr[100], arr2[100],  arrSum[100];
	
	int arrLength = readNumberPositive("How many elemnets?\n");
	FillArray(arr, arrLength);
	FillArray(arr2, arrLength);


	SumOf2Arrays(arr, arr2, arrSum, arrLength);


	cout << "\nArray 1 elements:\n";
	PrintArray(arr, arrLength);

	cout << "\ Numbers in Array2:\n";
	PrintArray(arr2, arrLength);

	cout << "\nSum of array1 and array2 elements:\n";
	PrintArray(arrSum, arrLength);

	return 0;  
}
