#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.
enum enPrimNotPrime { Prime = 1 , NotPrime = 2};

enPrimNotPrime CheckPrime(int Number)
{
    int M = sqrt(Number );
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
        {
            return enPrimNotPrime::NotPrime;
        }
    }
    return enPrimNotPrime::Prime;
}

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
        arr[i]  = RandomNumber(1, 100);
    }
}


void CopyOnlyPrimaryNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Lenght)

{
    int counter = 0;
    for (int i = 0; i < arrLength; i++)
    {
        if (CheckPrime(arrSource[i]) == enPrimNotPrime::Prime)
        {
            arrDestination[counter] = arrSource[i];
            counter ++;
        }
    }
    arr2Lenght = counter;
}


void PrintArray(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";  
}

int main() {
    srand((unsigned)time(NULL));

    int arr[100];      // Declare the source array.
    int arrLength;     // Will hold the number of elements in the source array.

    // Fill the source array with random numbers.
    FillArray(arr, arrLength);

    int arr2[100];     // Declare the destination array for prime numbers.
    int arr2Length = 0;  // Initialize the length of the destination array.

    // Copy only the prime numbers from the source array to the destination array.
    CopyOnlyPrimaryNumbers(arr, arr2, arrLength, arr2Length);

    // Print the source array.
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLength);

    // Print the destination array containing only prime numbers.
    cout << "\nPrime Numbers in Array2:\n";
    PrintArray(arr2, arr2Length);

    return 0;  // Return 0 to indicate successful program execution.
}
