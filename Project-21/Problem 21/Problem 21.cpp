#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

enum enGetRand {
	SomalLatter = 1, CaptileLetter = 2, Digta = 3, SpeacialChar = 4
};

int RandNumber(int Form, int To)
{
	int result;
	result = rand() % (To - Form + 1) + Form;
	return result;
}

char GetRandomCharacter(enGetRand CharTyep)
{

	switch (CharTyep)
	{
	case enGetRand::SomalLatter:
	{
		return char(RandNumber(97, 122));
	}
	case enGetRand::CaptileLetter:
	{
		return char(RandNumber(65, 90));
	}
	case enGetRand::Digta:
	{
		return char(RandNumber(48, 57));
	}
	case enGetRand::SpeacialChar:
	{
		return char(RandNumber(33, 47));
	}

	}
	return 0;
}


int ReadNumberPostiveNumber(string Message)
{
	short Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}




string GenrateWord(enGetRand CharType, short Length)
{
	string Word;
	for (int i = 1; i <= Length;i++)
	{
		Word = Word + GetRandomCharacter(CharType);
	}
	return Word;

}

string GenerateKey()
{
	string Key = "";
	Key = GenrateWord(enGetRand::CaptileLetter , 4) + "-";
	Key =Key +  GenrateWord(enGetRand::CaptileLetter, 4) + "-";
	Key = Key + GenrateWord(enGetRand::CaptileLetter, 4) + "-";
	Key = Key + GenrateWord(enGetRand::CaptileLetter, 4) ;
	return Key;

}

void  GenerateKeys(short NumberOfKeys)
{
	for (int i = 1; i <= NumberOfKeys; i++)
	{
		cout << "Key [ " << i << " ] : ";
		cout << GenerateKey() <<endl;
	}
}







int main()
{
	srand((unsigned)time(NULL));
	GenerateKeys(ReadNumberPostiveNumber("Pleaes enter how many keys to generate? \n "));
	return 0;
}