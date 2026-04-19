#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;
}

void ReadArray(int arr[100], int& arrLength)
{
	cout << " \nEnter number of elements: \n";
	cin >> arrLength;
	for (int i = 1; i <= arrLength; i++)
	{
		cout << "Element [ " << i << " ] :";
		cin >> arr[i];
	}
	cout << endl;
}

void PrintArray(int arr[100], int& arrLength)
{
	for (int i = 1; i <= arrLength; i++)
	{
		cout  << arr[i] << " ";
		
	}
	cout << "\n";
}
int ArrayCheckNumber(int Number, int arr[100], int& arrLength)
{
	int counter = 0;
	for (int i = 0; i <= arrLength - 1; i++)
	{
		if (Number == arr[i])
		{
			counter ++;
		}
	}
	return counter;
}
int main()
{
	int NumberToCheck;
	int arr[100]; 
	int arrLength;

	ReadArray(arr , arrLength);
	NumberToCheck = ReadPositiveNumber("Enter the Number you want to check: ");

	cout << "\nOriginal array: " ;
	PrintArray(arr, arrLength);

	cout << "\nNumber " << NumberToCheck ;
	cout << " is Repeatted ";
	cout << ArrayCheckNumber(NumberToCheck, arr, arrLength)  << " time(s)\n";


	return 0;
}