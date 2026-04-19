#include <iostream>  
#include <cmath>
using namespace std;
float GetFractionPart(float Number)
{
	return Number - int(Number);
}
int Myceil(float Number)
{
	if (abs(GetFractionPart(Number)) > 0)

	{
		if (Number > 0)
		{
			return int(Number)+1;
		
		}
		else
		{
			return int(Number);
		}
	}
	else
	{
		return Number ; 
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
	cout << "The My ceil Number  : " << Myceil(Number) << endl;
	cout << "C++ My ceil Number  : " << ceil(Number) << endl;
	return 0;
}