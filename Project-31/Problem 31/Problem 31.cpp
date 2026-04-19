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

	}while(Number <= 0);
	return Number;
}

void Swap(int &A, int &B)
{
	int Temp ;
	Temp = A;
	A = B;
	B = Temp;
}


void FillArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		arr[i] = i + 1;
	}
}

int RandomNumber(int Form, int To)
{
	return rand() % (To - Form + 1) + Form;
}


void ShuffleArray(int arr[100], int arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		int index1  = RandomNumber(1, arrLength) - 1;
		int index2 = RandomNumber(1, arrLength) - 1;
		Swap(arr[index1], arr[index2]);
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

	int arr[100];
	int arrLength = ReadNumberPostiveNumber("How many elemnets?\n");

	FillArray(arr, arrLength);
	cout << "Array elements before shuffle:"  << endl;
	PrintArray(arr, arrLength);



	ShuffleArray(arr,arrLength);
	cout << "\nArray elements after shuffle:\n";
	PrintArray(arr, arrLength);

	return 0;
}