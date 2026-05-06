#include <iostream>
using namespace std;

int main()
{
    /*int a = 10;
    int& x = a;

    x = 50;

    cout << a << endl;*/


  /*  int a = 5;
    int b = 10;

    int& x = a;

    x = x + b;

    cout << a << " " << x;*/


    int a = 10;
    int b = 20;

    int& x = a;
    int& y = x;

    y = 50;

    cout << a << " " << x << " " << y;
}