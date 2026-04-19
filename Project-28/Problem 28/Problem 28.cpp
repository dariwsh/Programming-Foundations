#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


int RandNumber(int Form, int To)
{
	return rand() % (To - Form + 1) + Form;
}



void FillArrayWithRandomNumbers(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements: \n";
	cin >> arrLength;

	for (int i = 0; i <= arrLength; i++)
	{
		arr[i] = RandNumber(1, 100);
	}
}




void PrintArray(int arr[100], int arrLength)
{

	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void CopyArray(int ArrayCopy[100], int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		ArrayCopy[i] = arr[i];
	}
}



int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	cout << "Array One ";

	PrintArray(arr, arrLength);
	cout << "\n__________________________________________\n";
	int arrCopy[100];
	CopyArray(arrCopy, arr, arrLength);
	cout << "Array Two ";
	PrintArray(arrCopy, arrLength);
	return 0;
}

