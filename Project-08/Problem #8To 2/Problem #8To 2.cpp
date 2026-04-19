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



int main()
{
	int Number = ReadPositiveNumber("Please enter Number Main\n");
	short DigitFrequency = ReadPositiveNumber("Please enter Digit Frequency \n");

	cout << "\nThe Frequency " << DigitFrequency << "The Number is Freuency "
		<< countDigitFrequency(DigitFrequency, Number) << "Time" << endl;

	return 0;
}

