#include <iostream>  
#include <cmath>
using namespace std;

int MySqrt(int Number)
{
	return pow(Number,0.5);  // قاعدة
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
	int Number = read();
	cout << "The My MySqrt Number  : " << MySqrt(Number) << endl;
	cout << "C++ My MySqrt Number  : " << sqrt(Number) << endl;
	return 0;
}