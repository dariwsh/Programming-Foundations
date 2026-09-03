// Write a program to Sum odd numbers from 1 to N.
#include <iostream>
#include <string >
using namespace std;
enum enOddOrEven {Odd = 1, Even=2};

int ReadNumber()
{
    int Number;
    cout << "Please enter a nuber? \n";
    cin >> Number;
    return Number;
}

enOddOrEven CheckOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumOddNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using For Statement:\n";
    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }
    return Sum;

}

int SumOddNumbersFrom1toN_UsingWhile(int N)
{
    int Sum = 0;
    int Counter = 1;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using While Statement:\n";
        while ( Counter <= N )
        {

        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
        Counter++;
    }
    return Sum;

}

int SumOddNumbersFrom1toN_UsingDoWhile(int N)
{
    int Sum = 0;
    int Counter = 1;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using Do While Statement:\n";
    do
    {

        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
        Counter++;
    } while (Counter <= N);
    return Sum;

}
int main()
{
    int N = ReadNumber();
    cout << SumOddNumbersFrom1toN_UsingFor(N) << endl;
    cout << SumOddNumbersFrom1toN_UsingWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_UsingDoWhile(N) << endl;
}
