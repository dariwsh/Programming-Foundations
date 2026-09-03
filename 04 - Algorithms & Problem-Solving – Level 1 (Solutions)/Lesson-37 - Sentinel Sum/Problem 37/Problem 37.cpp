                  
#include <iostream>
#include <string>
using namespace std;
float ReadNumber(string Message)
{
    float Number = 0; 
    cout << Message;
    cin >> Number;
    return Number;

}

float SumNumbers()
{
    int sum = 0, Number = 0, counter = 1;
    do
    {
        Number = ReadNumber("Please entre Number " + to_string(counter));
        if (Number == -99)
        {
            break;
        }
        sum = Number + sum;
        counter++;
    } while (Number != -99);
    return sum;
}

int main()
{
    cout << endl << "Result = " << SumNumbers() << endl;
}
