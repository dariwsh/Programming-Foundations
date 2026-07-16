// =============================================
// Problem #23: Lower First Letter of Each Word
// =============================================
// Description:
//   Write a program to lower the first letter
//   of each word in a given string.
//
// Key Concepts:
//   - String Traversal
//   - Character Manipulation
//   - tolower() Function
// =============================================

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

string ReadString()
{
    string S1;
    cout << "Enter Your Name :\n";
    getline(cin, S1);
    return S1;
}

void LowerFirstLetterOfEachWord(string S1)
{
    cout << "\nString after conversion:\n";
    bool isFirstLetter = true;
    for (int i = 0; i < S1.length(); i++)
    {
        if (S1[i] != ' ' && isFirstLetter)
        {
            S1[i] = tolower(S1[i]);
            
        }
        isFirstLetter = (S1[i] == ' ' ? true : false);
    }

    cout << S1 << endl;
}


int main()
{
    LowerFirstLetterOfEachWord(ReadString());
    system("pause>0");

}

