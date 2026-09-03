#include <iostream>
using namespace std;

void OneToFive()
{
	int i = 1; 
	while (i <= 10)
	{
		cout <<   i << endl ;
		i++;

	}
}

void Postive()
{
	int number;
	cout << "Please enter a number Postive?\n";
	cin >> number;

	while (number < 0)
	{
		cout << "Worng Number , PLease Enter Postive ?\n";
		cin >> number;
	}
	cout << "\n The Postive number " << number << endl;
}

int ReadIntNumberInRange(int From, int To)
{
	int Number;
	cout << "Please Enter A Number Between " << From << " And " << To << endl;
	cin >> Number;

	while (Number  < From || Number > To)
	{
		cout << "Wrong Number, ";
		cout << "Please Enter A Number Between " << From << " And " << To << endl;
		cin >> Number;
	}
	return Number;
}

int main()
{
	//OneToFive();
	//Postive();
	int FinalNumber = ReadIntNumberInRange(1, 100);
	cout   << "\n The Number is " <<FinalNumber << endl;
	return 0;
}