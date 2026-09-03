// Write a program to calculate circle area through diameter, then print it on the screen.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadNumber()
{
	float D;
	cout << "Pleas Enter Area" << endl;
	cin >> D;
	return D;

}
float CircleArea(float D)
{
	float pi = 3.14;
	float Area = (pow(D, 2) *pi ) / 4;
	return Area;
}
void PrintResults(float Area)
{
	cout << "The Area is : " << Area << endl;
}
int main()
{
	PrintResults(CircleArea(ReadNumber()));
	return 0;
}
