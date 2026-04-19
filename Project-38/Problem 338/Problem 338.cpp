#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.
enum enOddNotOdd { Odd = 1, NotOdd = 2 };

enOddNotOdd CheckOdd(int Number)
{
    int M = sqrt(Number);
    for (int Counter = 2; Counter <= M; Counter++)
    {
        if (Number % Counter == 0)
        {
            return enOddNotOdd::NotOdd;
        }
    }
    return enOddNotOdd::Odd;
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
        arr[i] = RandomNumber(1, 100);
    }
}
void AddArayElemnt(int Number, int arr[100], int& arrLength)
{
    arrLength++;
    arr[arrLength -1] = Number;
    
}

void CopyOnlyOddNumbers(int arrSource[100], int arrDestination[100], int arrLength, int& arr2Lenght)

{
    
    for (int i = 0; i < arrLength; i++)
    {
        if (arrSource[i] % 2 != 0)
        {
            AddArayElemnt(arrSource[i] , arrDestination , arr2Lenght);
        }
    }
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
    int arrLengt =0;    

    FillArray(arr, arrLengt);

    int arr2[100];     
    int arr2Length = 0; 

    CopyOnlyOddNumbers(arr, arr2, arrLengt, arr2Length);
    cout << "\nArray 1 elements:\n";
    PrintArray(arr, arrLengt);

    cout << "\nOdd Numbers in Array2:\n";
    PrintArray(arr2, arr2Length);

    return 0;  
}
