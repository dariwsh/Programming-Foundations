#include <iostream>
#include <cmath>
using namespace std;


float getFractionprat (float Number)
{
	return Number - int (Number); // 10.7 - 10 = .7
}
int MyRound(float Number)
{
	int InPart;
	InPart = int (Number);

	float FractionsPart = getFractionprat(Number); // abs return postive
	if (abs(FractionsPart) >= .5)
	{
		if(Number > 0)
		return ++InPart;
		else
		return --InPart;
	}
	else
	{
		return InPart;
	}

}

float read()
{
	float Number;
	cout << "Enter the number";
	cin >> Number;
	return Number;
}

int main()
{
	float Number = read();
	cout << "The My round Number: " << MyRound(Number);
	cout << "C++ My round Number: " << round(Number);
}
