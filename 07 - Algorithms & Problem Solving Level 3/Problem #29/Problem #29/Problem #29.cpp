// =============================================
// Problem #29: Count Capital/Small/All Letters
// =============================================
// Description:
//   Count capital letters, small letters, and
//   total characters in a string using two
//   methods: individual functions and an enum-
//   based approach.
//
// Key Concepts:
//   - String Character Analysis
//   - isupper() / islower() Functions
//   - Enums for Function Overloading
//   - Default Parameters
// =============================================

#include <string>
#include <iostream>
#include <cctype>
using namespace std;

string ReadString()
{
	string S1;
	cout << "Please Enter Your string?\n";
	getline(cin, S1);
	return S1;
}

enum EnWhatToCount { SmallLeters = 0, Capitalleters = 1, All = 3 };
short CountLetters(string S1, EnWhatToCount WhatToCount = EnWhatToCount::All)
{
	if (WhatToCount == EnWhatToCount::All)
	{
		return S1.length();
	}
	short Counter = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (WhatToCount == EnWhatToCount::Capitalleters && isupper(S1[i]))
		{
			Counter++;
		}
		if (WhatToCount == EnWhatToCount::SmallLeters && islower(S1[i]))
		{
			Counter++;
		}
	}
	return Counter;
}
int CountCapitalLetters(string S)
{
	int Count = 0;
	for (int i = 0; i < S.length(); i++)
	{
		if ( isupper(S[i]))
		{
			Count++;
		}
	}
	return Count;
}

int CountSammlLetters(string S)
{
	int Count = 0;
	for (int i = 0; i < S.length(); i++)
	{
		if (islower(S[i]))
		{
			Count++;
		}
	}
	return Count;
}

int main()
{
	string S1 = ReadString();
	 //used first method
	cout << "\n String Length= " << S1.length() << endl;

	cout << "\n Capital Letters Count = " << CountCapitalLetters(S1) << endl;

	cout << "\n Small Letters Count = " << CountSammlLetters(S1) << endl;

	 //used secod method enum
	cout << "\n\nMethod Enum 2\n";
	cout << "\nString Length " << CountLetters(S1);
	cout << "\nCapital letters count = " << CountLetters(S1, EnWhatToCount::Capitalleters); 			
	cout << "\nSmall letters count = " << CountLetters(S1, EnWhatToCount::SmallLeters); 			

	system("pause>0");
}