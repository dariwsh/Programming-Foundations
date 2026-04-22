#include<iostream>
using namespace std;

int Multiply(int a, int b)
{
	int result = a * b;
	return result;
}

int Add(int a, int b)
{
	int sum = a + b;
	return sum;
}

int ComplexOperation(int x)
{
	int a = Multiply(x, 2);   // نقطة 1
	int b = Add(a, 5);        // نقطة 2
	int c = Multiply(b, 3);   // نقطة 3
	return c;
}

int main()
{
	int num = 4;
	int result = ComplexOperation(num); // نقطة 4
	cout << result;
	return 0;
}