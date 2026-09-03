//Write a program to calculate triangle area then print it on the screen.

#include <iostream>
#include <cmath>

using namespace std;
void ReadNubmers(float& a, float& h)
{ 
	cout << "Pleas enter num 1" << endl;
	cin >> a;
	cout << "Please enter num 2" << endl;
	cin >> h;
}
float calculateTriangleArea(float a, float h)
{
	float Area = (a/ 2) * h;
	return Area;
}
void PrintResults(float ARea)
{
	cout << "The Area is : " << ARea << endl;
}
int main()
{
	float a, h;
	ReadNubmers(a, h);
	PrintResults(calculateTriangleArea(a, h));
	return 0;
}
