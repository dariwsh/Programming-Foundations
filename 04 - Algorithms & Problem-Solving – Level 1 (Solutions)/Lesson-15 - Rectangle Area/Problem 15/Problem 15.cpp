#include <iostream>
#include <cmath>

using namespace std;
void ReadNubmers(float& a, float& b)
{
	cout << "Pleas enter num 1" << endl;
	cin >> a;
	cout << "Please enter num 2" << endl; 
	cin >> b;
}
float CalculateRectangleArea(float a, float b)
{
	return a * b;
}
void PrintResults(float ARea)
{
	cout << "The Area is : " << ARea << endl;
}
int main()
{
	float a, b;
	ReadNubmers(a, b);
	PrintResults(CalculateRectangleArea(a, b));
	return 0;
}
