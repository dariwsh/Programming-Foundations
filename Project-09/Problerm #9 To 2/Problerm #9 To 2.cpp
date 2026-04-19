#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)



{
	int Number = 0;  // Initialize a variable to store the user's input.


	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

int countDigitFrequency(short DigitFrequency, int Number)
{
	int Remainder = 0, Frequency = 0;
	while (Number > 0)
	{
		Remainder = Number % 10;
		Number = Number / 10;

		if (DigitFrequency == Remainder)
		{
			Frequency++;
		}
	}
	return Frequency;
}

void PrintAllDigitsFrequency(int Number)
{
	cout << endl;
	for (int i = 0; i < 10; i++)
	{
		short DigitsFrequency = 0;
		DigitsFrequency = countDigitFrequency(i, Number);
		if (DigitsFrequency > 0)
		{
			cout <<  "Digit " << i << "Frequency is " << DigitsFrequency << "Time(s).\n";
		}
	}
}

int main()
{
	int Number = ReadPositiveNumber("Please enter Number Main\n");

	PrintAllDigitsFrequency(Number);



	return 0;
}

