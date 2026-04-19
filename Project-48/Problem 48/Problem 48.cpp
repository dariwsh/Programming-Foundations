#include <iostream>  
#include <cmath>
using namespace std;

int MyFloor(float Number)
{
	if (Number > 0)
	{
		return int(Number);
	}
	else
	{
		return int (Number) -1;
	}

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
	cout << "The My Floor Number  : " << MyFloor(Number) << endl;
	cout << "C++ My Floor Number  : " << floor(Number) << endl;
	return 0;
} 