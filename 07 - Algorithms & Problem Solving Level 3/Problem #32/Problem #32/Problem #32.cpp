#include <string>
#include <iostream>
using namespace std;

char ReadChar()
{
	char Ch1;
	cout << "\nPlease Enter a Character?\n";
	cin >> Ch1;
	return Ch1;
}

bool IsVowels(char Letter)
{
	Letter = tolower(Letter);
	return  (Letter == 'a' ||
		Letter == 'e' ||
		Letter == 'i' ||
		Letter == 'o' ||
		Letter == 'u');
   
}


int main()
{
	char Ch1 = ReadChar();
	if (IsVowels(Ch1))
	{
		cout << "Yes Letter " << Ch1 << " is Vowel\n";
	}
	else
	{
		cout << "No Letter " << Ch1 << " is not Vowel\n";
	}
	system("pause>0");
}