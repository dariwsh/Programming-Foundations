#include <iostream>
#include <cmath>
using namespace std;

float MySqrt(float Number)
{
	return pow(Number, 0.5);
}

float read()
{
	float Number;
	cout << "Enter the number ";
	cin >> Number;
	return Number;
}

int main()
{
	float Number = read();
	cout << "The My MySqrt Number  : " << MySqrt(Number) << endl;
	cout << "C++ My MySqrt Number  : " << sqrt(Number) << endl;
	return 0;
}
