#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

int ReadNumber()
{
	int Number ;
	cout << "\nPlease enter a number? ";
	cin >> Number;
	return Number;
}

void addArrayElments(int Number,int arr[100] , int &arrLength)
{
	arrLength++;
	arr[arrLength - 1 ] = Number;
}

void InputUserNumbersInArray(int arr[100], int& arrLength)
{
	bool AddMore = true;
	do
	{
		addArrayElments(ReadNumber(),arr, arrLength);
		cout <<"Do Y0ou Want to add more numbers? [0]: No , [1] : yes? ";
		cin >> AddMore;
	}while(AddMore);
}

void PrintArray(int arr[100], int& arrLength)
{
	for (int i = 0; i < arrLength; i++)
	{
		cout << arr[i] << " " ;
	} 
}

int main()
{
	int arr[100], arrLength=0;
	InputUserNumbersInArray(arr, arrLength);
	cout << "Array Length: " << arrLength << endl;
	cout << "Array Elements : " ;
	PrintArray(arr, arrLength);

	return 0;
}