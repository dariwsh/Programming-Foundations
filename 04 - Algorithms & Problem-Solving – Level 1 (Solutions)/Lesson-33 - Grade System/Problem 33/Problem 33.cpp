/*Write a program to ask the user to enter :
•
Grade
Then print the grade as follows :
•
90 – 100 Print A
•
80 –89 Print B
•
70 –79 Print C
•
60 –69 Print D
•
50 –59 Print E
•
Otherwise Print F*/
#include <iostream>
#include <string>

using namespace std;

int ReadNumberRange(int From, int To)
{
	int Grade;
	do
	{
		cout << "Please enter a Grade between 0 and 100?\n";
		cin >> Grade;

	} while (Grade < From || Grade > To);
	return Grade;
}

char GetGradeLetter(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C'; 
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	int Grade = ReadNumberRange(0, 100);
	cout << "Result = " <<GetGradeLetter(Grade);
	return 0;
}