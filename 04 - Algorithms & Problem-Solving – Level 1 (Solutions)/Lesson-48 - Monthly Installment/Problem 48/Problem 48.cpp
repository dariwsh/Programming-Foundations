

#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}

float TotalMonths(float LoanAmount, float HowManyMonths)
{
	return (float)LoanAmount / HowManyMonths;
}
int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter Loan Amount?");
	float HowManyMonths = ReadPositiveNumber("How Many Months ?");

	cout << "\nTotal Months to pay = " << TotalMonths(LoanAmount, HowManyMonths) << endl;
	cout << endl;
	return 0;

}

