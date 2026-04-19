#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>
#include <cmath>
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
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

int CountOddNumbers(int arr[100], int arrLength) {
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] % 2 != 0)
        {
            counter++;
        }
    }
    return counter;
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];      
    int arrLength;     

    FillArray(arr, arrLength);
    cout << "\nArray elements:\n"; 
    PrintArray(arr, arrLength);


    cout << "Odd Number count is : " << CountOddNumbers(arr, arrLength);
    return 0;
}
