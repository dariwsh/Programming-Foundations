// Write a program to calculate circle area then print it on the screen.
#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadNumber()
{
	float R;
	cout << "Pleas Enter Area" << endl;
	cin >> R;
	return R;

}
float CircleArea(float R)
{
	float pi = 3.14;
	float Area = pow(R,2) * pi;
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
