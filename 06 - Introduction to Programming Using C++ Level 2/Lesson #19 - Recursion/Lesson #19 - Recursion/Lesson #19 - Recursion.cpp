#include <iostream>
using namespace std;
void PrintNumberFromMtoN(int M , int N)
{
    if ( M >= 1){
    cout << M << endl;
     PrintNumberFromMtoN(M - 1, N);
    };
}

int Power(int Base, int power)
{
    if(power == 0) return 1;
    return Base * Power(Base  , power-1);
}
//
////void Test(int n)
//{
//    if (n == 0) return;
//    Test(n - 1);
//    cout << n << " ";
//}

int Sum(int n)
{
    if (n == 0) return 0;
    return n + Sum(n - 1);
}


//void Test(int n)
//{
//    if (n == 5) return;
//    cout << n << " ";
//    Test(n + 1);
//}
void Test(int n)
{
    if (n == 0) return;
    cout << n << " ";
    Test(n - 1);
    cout << n << " ";
}
int main()
{
  /*  PrintNumberFromMtoN(20,1);
    cout << "Quession 2" << endl;
    cout << Power(4,2) << endl;
    cout << "Test\n";
    Test(3);*/
    //cout << "Test2\n";
    //cout << Sum(4);

     Test(3);
}