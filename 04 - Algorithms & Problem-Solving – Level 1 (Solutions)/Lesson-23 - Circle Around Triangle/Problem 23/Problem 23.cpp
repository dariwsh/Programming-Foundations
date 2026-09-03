/*
Write a program to calculate circle area circle described around an arbitrary triangle,
then print it on the screen.
*/
#include <iostream>
using namespace std;
void ReadCircleArea(float& A, float& B, float& C)
{
	cout << "****************************\n";
	cout << "Please enter A ?\n";
	cin >> A;
	cout << "Please enter B ?\n";
	cin >> B;
	cout << "Please enter C?\n";
	cin >> C;
	cout << "****************************\n";
}

float CalculateCircleArea(float A, float B, float C)
{
	const float pi = 3.14159265359;
	float p = (A + B + C) / 2;
	float T =   (A * B * C) / ( 4 * sqrt (p* (p - A) * (p - B) * (p - C) ) );
	float Area = pi * pow(T, 2);
	return Area;
}

void PrintResults(float Area)
{
	cout << "The Area = " << Area;
}
int main()
{
	float A, B, C;
	ReadCircleArea(A, B, C);
	PrintResults(CalculateCircleArea(A, B, C));
	return 0;
}
