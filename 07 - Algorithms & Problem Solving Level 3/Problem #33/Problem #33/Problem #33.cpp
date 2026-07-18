#include <string>
#include <iostream>
using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your String?\n";
	getline(cin, S1);
	return S1;
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

short CountVowels(string S1)
{
	short count = 0;
	for (short i = 0; i < S1.length();i++)
	{
		if (IsVowels(S1[i]))
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string S1 = ReadString();


	cout << "\nNumber of vowels is: " << CountVowels(S1);
	system("pause>0");
}