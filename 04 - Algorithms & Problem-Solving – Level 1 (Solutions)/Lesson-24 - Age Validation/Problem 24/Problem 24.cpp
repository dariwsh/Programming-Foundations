/*
* •Write a program to ask the user to enter :

Age
If age is
between 18 and 45
print “Valid Age” otherwise print
“Invalid Age”
*/
#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
	int Age;
	cout << "Please enter your Age ? \n";
	cin >> Age;
	return Age;
}

bool validateNumberinRange(int Number , int from , int To)
{
	return (Number >= from && Number <= To);

}

void PrintResult(int Age)
{
	if (validateNumberinRange(Age, 18, 45))
	{
		cout << Age << "is A Valid Age " << endl;;

	}
	else
	{
		cout << Age << "is A Invalid Age " << endl;;

	}
}
int main()
{
	PrintResult(ReadAge());
}
