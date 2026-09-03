/*/ Write a program to ask the user to enter:
•
Number
Then Print the Number ^ 2, Number ^ 3, Number ^ 4*/
#include <iostream>
using namespace std;
int readNumber()
{
    int Number;
    cout << "Please enter number? \n";
    cin >> Number;
    return Number;
}

void PowerOf2_3_4(int Number)
{
    int a, b, c;
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number *Number *Number;
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    PowerOf2_3_4(readNumber());
    return 0;
}
