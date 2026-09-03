/* Write a program to calculate circle area Inscribed in an Isosceles Triangle,
then print it on the screen */
#include <iostream>
#include <string>
#include <cMath>
using namespace std;

void ReadAreaInscribed(float &a , float &b )
{
	cout << "********21**********\n";
	cout << "Please Enter A? \n";
	cin >> a;
	cout << "Please Enter A? \n";
	cin >> b;
	cout << "********21**********\n";
}

float CalculatecircleAreaInscribed(float a, float b)
{
	const float pi = 3.14159265359;
	float Area = pi * (pow(b,2) / 4)  * ((2 * a - b) / (2 * a + b));
	return Area;
}

void PrintResult(float Area)
{
	cout << "The circle area =  " << Area << endl;
}

int main()
{
	float a, b;
	ReadAreaInscribed(a, b);
	PrintResult(CalculatecircleAreaInscribed(a, b));
	return 0;
}