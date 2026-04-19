#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions. 

void FillArray(int arr[100], int& arrLength)
{
    arrLength = 6;  

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
}


void PrintArray(int arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}


bool IsPalindrome(int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength / 2; i++)
    {
        if (arr[i] != arr[arrLength - 1 -i])
        {
            return false;
        }
    } 
    return true;
}
int main()
{
    int arrSources[100];
    int SourceLength = 0;
    FillArray(arrSources, SourceLength);
    cout << "\n Array Elments: \n";
    PrintArray(arrSources, SourceLength);


    if (IsPalindrome(arrSources, SourceLength) == true)
    {
        cout << "Yes array is Plaindrome" << endl;
    }
    else
    {
        cout << "No array is not Plaindrome" << endl;
    }
    return 0;
}