#include <iostream>
using namespace std;

void SayHello();
int Sum(int , int);
int main()
{
    SayHello();
    cout << endl;
    cout << Sum(10,22);
}

void SayHello()
{
    cout << "Hello";
}

int Sum(int a, int b)
{
    return a + b;
}