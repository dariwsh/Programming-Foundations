// =============================================
// Problem #30: Count Specific Letter in String
// =============================================
// Description:
//   Count how many times a specific character
//   appears in a given string.
//
// Key Concepts:
//   - String Traversal
//   - Character Comparison
//   - Counting with Loops
// =============================================

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



char ReadChar()
{
	char C1;
	cout << "Please Enter Your Character?\n";
	cin >> C1;
	return C1;
}


short CountLetter(string S1, char C1)
{
	short count = 0;
	for (short i = 0; i < S1.length(); i++)
	{
		if (S1[i] == C1)
		{
			count++;
		}
	}
	return count;
}

int main()
{
	string S1 = ReadString();
	char Ch1 = ReadChar();
	cout << "\nLetter \'" << Ch1 << "\' Count = " <<
		CountLetter(S1, Ch1);
	system("pause>0");
}