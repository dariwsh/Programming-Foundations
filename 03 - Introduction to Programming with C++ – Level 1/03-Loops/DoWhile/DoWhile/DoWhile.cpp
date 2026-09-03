#include <iostream>
#include <string>
using namespace std;
int ReadNumberIntRange(int From, int To)
{
    int number;
    do
    {
        cout << "Please Enter a number between " << From << "and " << To << endl;
        cin >> number;
    } while (number < From || number > To);
    return number;
}

void WhileLoop()
{
    int i = 6; 
    while (i <= 5)
    {
        cout << "Mohamed" << endl;
        i++;
    }
}

void DOWhileLoop()
{
    int i = 6;
    do
    {
        cout << "Mohamed" << endl;
        i++;
    } while (i <= 5);
}

int ReadNumberWhil(int From, int To)
{
    int number;
    cout << "Please Enter A Number Between " << From << "and " << To << endl;
    cin >> number;
    while (number < From || number > To)
    {
        cout << "Wrong \n";
        cout << "Please Enter A Number Between " << From << "and " << To << endl;
        cin >> number;

    }
    return number;
}
int main()
{
   //cout << ReadNumberIntRange(10, 100);
    //WhileLoop();
    //DOWhileLoop();
   // cout << ReadNumberWhil(10, 60);
    return 0;
}
