#include <iostream>
#include <string>
#include "clsString.h"
using namespace std;

int main()
{
	clsString String1;
	String1.Value = "Ahmed Darwish";

	clsString String2("Mohamed");

	cout << "Number of Length: " << clsString::Length(String1.Value) << endl;
	cout << "Number of Length: " << String2.Length() << endl;

	cout << "Number of Words: " << String1.CountWords("Ahmed Mustafa") << endl;
	cout << "Number of Words: " << clsString::CountWords("Ahmed Mohamed Darwihs") << endl;
	clsString String3("hi how are you?");
	cout << "String 3 " << String3.Value << endl;
	cout << "String Length = " << String3.Length() << endl;

	String3.UpperFirstLetterOfEachWord();
	cout << String3.Value << endl;


	String3.LowerFirstLetterOfEachWord();
	cout << String3.Value << endl;

	String3.UpperAllString();
	cout << String3.Value << endl;

	String3.LowerAllString();
	cout << String3.Value << endl;

	cout << "After Inverting a : " << clsString::InvertLetterCase('a') << endl;
	String3.Value = "Ahmed MOhamed  muistaffafds ad";
	cout << String3.Value << endl;
	String3.InvertAllLettersCase();
	cout << String3.Value << endl;

	cout << "Capital Letters count : "
		<< clsString::CountLetters("Mohammed Abu-Hadhoud", clsString::All)
		<< endl << endl;

	cout << "Capital Letters count :" << String3.CountCapitalLetters() << endl;

	//----------------

	cout << "Small Letters count :" << String3.CountSmallLetters() << endl;


	cout << "vowels count :" << String3.CountVowels() << endl;

	cout << "letter E count :" << String3.CountSpecificLetter('E', false) << endl;
	

	cout << "is letter u vowel? " << clsString::IsVowel('a')
		<< endl;

	vector<string> vString;
	vString = String3.Split(" ");

	cout << "\nTokens = " << vString.size() << endl;
	for (string& s : vString)
	{
		cout << s << endl;
	}

	String3.Value = "             Mohammed Abu-Hahdoud     ";
	cout << "\nString     = " << String3.Value; 
	String3.TrimLeft();
	cout << "\n\nTrim Left  = " << String3.Value;

	String3.TrimRight();
	cout << "\n\nTrim Right  = " << String3.Value;


	String3.Value = "    Mohammed Abu-Hahdoud     ";
	String3.Trim();
	cout << "\nTrim       = " << String3.Value;

	vector<string> vString1 = { "Mohammed","Faid","Ali","Maher" };
	cout << "\n\nJoin String From Vector: \n";
	cout << clsString::JoinString(vString1 , " ");

	string arrString[] = { "Mohammed","Faid","Ali","Maher" };

	cout << "\n\nJoin String From array: \n";
	cout << clsString::JoinString(arrString, 4, " ");

	String3.Value = "Mohammed Saqer Abu-Hahdoud";
	cout << "\n\nString     = " << String3.Value;
	String3.ReverseWordsInString();
	cout << "\nReverse Words : " << String3.Value
		<< endl;

	String3.Value = "Mohammed Saqer Abu-Hahdoud";
	cout << "\nReplace : " << String3.ReplaceWord("Mohammed", "Ahmed");


	String3.Value = "This is: a sample text, with punctuations.";
	cout << "\n\nString     = " << String3.Value;


	String3.RemovePunctuations();
	cout << "\nRemove Punctuations : " << String3.Value
		<< endl;

	cout << "\n\n|-----------------------------------|";
	cout << "\n            Ahmed Darwish              ";
	cout << "\n|-----------------------------------|";

	system("pause>0");
	return 0;
}