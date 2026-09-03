// Write a program to calculate circle area along the circumference, then print it on the screen.
#include <iostream>
#include <string>
#include <cMath>
using namespace std;

float ReadAreaLong()
{
	float L;
	cout << "Please Enter circle area along the circumference ? \n";
	cin >> L;
	return L;
}
 
float CalculateCircleAreaAlong( float L)
{
	const float pi = 3.14159265359;
	float Area = pow(L, 2) / (4 * pi);
	return Area;
}

void PrintResult(float Area)
{
	cout << "The circle area along the circumference is  " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleAreaAlong(ReadAreaLong()));
	return 0;
}