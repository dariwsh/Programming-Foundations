/*
Write a program to ask the user to enter :
•
Age
If age is
between 18 and 45
print “Valid Age” otherwise print
“Invalid Age” and re-ask user to enter a valid age.
Note: You should keep asking user to enter a valid age until
s/she enters it
*/

#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
	int Age;
	cout << "Please enter your Age 18 and 45 ? \n";
	cin >> Age;
	return Age;
}

bool validateNumberinRange(int Number, int from, int To)
{
	return (Number >= from && Number <= To);

}

int ReadUntilAgeBetwen(int from, int To)
{
	int Age = 0;
	do {
		Age = ReadAge();
	} while (!validateNumberinRange(Age, from, To));

	return Age;
}

void PrintResult(int Age)
{
	cout << "Your Age is : " << Age << endl;
}

int main()
{
	PrintResult(ReadUntilAgeBetwen(18,45));
}
