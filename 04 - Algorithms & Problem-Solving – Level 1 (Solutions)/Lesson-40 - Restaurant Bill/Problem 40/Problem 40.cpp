/*
A restaurant charges 10% services fee and 16% sales tax.
Write a program to read a BillValue and add service fee and sales tax to it, and print the TotalBill on the
screen
*/



#include <iostream>
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

float TotalBillAfterServiceAndTax(float TotalBill)
{
	TotalBill = TotalBill * 1.1;
	TotalBill = TotalBill * 1.16;
	return TotalBill;
}
int main()
{
	float TotalBill = ReadPositiveNumber("Please enter total bill?");
	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After Servie Fee and Sales Tax = "
		<< TotalBillAfterServiceAndTax(TotalBill) << endl;
	return 0;
}

