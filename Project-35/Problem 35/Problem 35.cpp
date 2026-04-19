#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

int RandomNumber(int Form, int To)
{
	return rand() % (To - Form + 1) + Form;
}

void FillArray(int arr[100], int& arrLength)
{
	cout << "\nEnter number of elements:\n";
	cin >> arrLength;
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = RandomNumber(1, 100);
	}
}

void PrintArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
		cout << arr[i] << " ";

	cout << "\n";
}

short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		if (arr[i] == Number)
		{
			return i;
		}
	}
	return -1;
}

int ReadNumber()
{
	int Number;
	cout << "\nPlease enter a number to search for?\n";
	cin >> Number;
	return Number;
}

bool IsNumberAnArray(int Number, int arr[100], int arrLength)
{
	return FindNumberPositionInArray( Number,  arr,  arrLength) != -1; // false 
}
int main()
{
	srand((unsigned)time(NULL));

	int arr[100];
	int arrLength;
	FillArray(arr, arrLength);

	cout << "\nArray 1 elements :\n";
	PrintArray(arr, arrLength);

	int Number = ReadNumber();
	cout << "\nNumber you are looking for is: " << Number << endl;

	if (!IsNumberAnArray(Number, arr, arrLength))
	{
		cout << "No , the number is not found :)-\n";
	}
	else
	{
		cout << "yes , the number is  found :)-\n";

	}

	return 0;
}