#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.


int ReadNumberPostiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

int RandomNumber(int Form, int To)
{
	return rand() % (To - Form + 1) + Form;
}

void FillArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, arrLength) - 1;
	}
}

void FillArrayCopy(int arrSource[100] ,int arrDestination[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arrDestination[i] = arrSource[arrLength - 1 -i];
	}
}


void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}



int main()
{
	srand((unsigned)time(NULL));

	int arr[100]  ;
	int arrLength = ReadNumberPostiveNumber("How many elemnets?\n");
	
	FillArray(arr, arrLength);

	int arr2[100];
	FillArrayCopy(arr, arr2, arrLength);

	cout << "\nArray 1 elements :\n";
	PrintArray(arr, arrLength);
	
	cout << "\nArray 2 elements :\n";
	PrintArray(arr2, arrLength);

	return 0;
}