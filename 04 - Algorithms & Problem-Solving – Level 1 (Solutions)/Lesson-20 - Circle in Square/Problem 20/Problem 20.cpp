//Write a program to calculate Circle area inscribed in a square, then print it on the screen.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadNumber()
{
	float A;
	cout << "Pleas Enter Area" << endl;
	cin >> A;
	return A;

}
float AreaInscribedInaSquare(float A)
{
	float pi = 3.14159265359;
	float Area = (pow(A,2) * pi) / 4;
	return Area;
}
void PrintResults(float Area)
{
	cout << "\nThe Area is : " << Area << endl;
}
int main()
{
	PrintResults(AreaInscribedInaSquare(ReadNumber()));
	return 0;
}
