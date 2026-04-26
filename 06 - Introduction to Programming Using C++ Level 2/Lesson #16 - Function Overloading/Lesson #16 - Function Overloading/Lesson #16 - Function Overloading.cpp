#include <iostream>
using namespace std;
int Sum(int a, int b)
{
	return a + b;
}
int Sum(int a, int b, int c)
{
	return a + b + c;
}
int Sum(int a, int b, int c, int d)
{
	return a + b + c + d;
}
double Sum(double a, double b)
{
	return a + b;
}
int main()
{
	cout << Sum(11,3) << endl;
	cout << Sum(11, 3 , 2) << endl;
	cout << Sum(11, 3 , 44 ,4) << endl;
	cout << Sum(10.1, 20.1) << endl;
	cout << Sum(11, 3) << endl;
	return 0;
}

