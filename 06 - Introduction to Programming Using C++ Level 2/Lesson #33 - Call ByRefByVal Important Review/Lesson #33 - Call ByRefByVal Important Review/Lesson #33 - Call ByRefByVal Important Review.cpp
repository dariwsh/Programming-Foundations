#include <iostream>
using namespace std;

// By Value 
void ByValue(int x)
{
    x ++;
    cout << x << endl;
}


// By Reference
void ByReference(int &x)
{
    x ++ ;
    cout << x << endl;
}

// Test

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    cout << "----------- By Value -----------"<<endl; 
    int a = 10;
    ByValue(a);
    cout << a << endl;

    cout << "----------- By Reference -----------"<< endl;
    int j = 10;
    ByReference(j);
    cout << j << endl;
    cout << "Test " << endl;
    int x = 5, y = 10;
    Swap(x,y);
    cout << x << " " << y << endl;
    return 0;

}