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

void addArrayElments(int Number, int arr[100], int& arrLength)
{
	arrLength++;
	arr[arrLength -1 ] = Number;
}

void CopyArray(int arrSource[100], int arrDestination[100], int arrLength, int& arrDestinationLength)
{
	for (int i = 0; i < arrLength; i++)
		addArrayElments(arrSource[i] , arrDestination , arrDestinationLength);
}



int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrLength=0;
	FillArrayWithRandomNumbers(arr, arrLength);

	int arr2[100];        // Declare the destination array for the copied elements.
	int arr2Length = 0;
	CopyArray( arr, arr2, arrLength, arr2Length);
	

	
	cout << "\n__________________________________________\n";
	
	cout << "Array One ";
	PrintArray(arr, arrLength);
	cout << "Array Two ";
	PrintArray(arr2, arr2Length);
	return 0;
}

