#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions. 

void FillArray(int arr[100], int &arrLength)
{
arrLength = 10;
    arr[0] = 10;
    arr[1] = 10;
    arr[2] = 10;
    arr[3] = 50;
    arr[4] = 50;
    arr[5] = 70;
    arr[6] = 70;
    arr[7] = 70;
    arr[8] = 70;
    arr[9] = 90;
}
// هو عايز يعرف مكان الرقم جوه array ويرجع مكانه
short FindNumberPositionInArray(int Number, int arr[100], int arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        if (arr[i] == Number)
            return i;  
    }
    return -1;
}

void PrintArray(int arr[100], int& arrLength)
{
    for (int i = 0; i < arrLength; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

bool IsNumberInArray(int Number, int arr[100], int arrLength)
{
    return FindNumberPositionInArray(Number, arr, arrLength) != -1;
}

void AddArrayElement(int Number, int arr[100], int& arrLength)
{
    arrLength++;            
    arr[arrLength - 1] = Number;  
}
void CopyDistinctNumbersToArray(int arrSource[100], int arrDestination[100], int SourceLength, int& DestinationLength)
{

    for (int i = 0; i < SourceLength; i++)
    {
        if (!IsNumberInArray(arrSource[i], arrDestination, DestinationLength))
        {
            AddArrayElement(arrSource[i], arrDestination, DestinationLength);
        }
    }
}
int main()
{
    int arrSources[100] ;
    int arrDestination[100];
    int SourceLength = 0 , DestinaionLength = 0;
    FillArray(arrSources, SourceLength);
    cout << "\n Array 1 lements: \n";

    PrintArray(arrSources, SourceLength);
    CopyDistinctNumbersToArray(arrSources, arrDestination, SourceLength, DestinaionLength);
    cout << "\n Array 2 lements: \n";
    PrintArray(arrDestination, DestinaionLength);



}