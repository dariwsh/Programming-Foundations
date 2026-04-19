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
	cout << "Array Elements : ";
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int SumOfArray(int arr[100], int arrLength)
{

	int Sum = 0;
	for (int i = 0; i < arrLength; i++)
	{
		Sum += arr[i];
	}
	return Sum;
}
int main()
{
	srand((unsigned)time(NULL));
	int arr[100];
	int arrLength;
	FillArrayWithRandomNumbers(arr, arrLength);
	PrintArray(arr, arrLength);
	cout << "\n__________________________________________\n";
	cout << "The sum is : ";
	cout << SumOfArray(arr, arrLength);
	return 0;
}

