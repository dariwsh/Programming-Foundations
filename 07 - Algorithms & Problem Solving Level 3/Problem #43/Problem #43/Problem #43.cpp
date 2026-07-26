#include <iostream>
#include <string>
#include <vector>

using namespace std;

//====================================================
// Split String
//====================================================

vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;
    short Pos = 0;
    string Word;

    while ((Pos = S1.find(Delim)) != string::npos)
    {
        Word = S1.substr(0, Pos);

        if (Word != "")
            vString.push_back(Word);

        S1.erase(0, Pos + Delim.length());
    }

    if (S1 != "")
        vString.push_back(S1);

    return vString;
}

//====================================================
// Convert String To Lower Case
//====================================================

string LowerAllString(string S1)
{
    for (char& Ch : S1)
        Ch = tolower(Ch);

    return S1;
}

//====================================================
// Join Vector To String
//====================================================

string JoinString(vector<string> vString, string Delim)
{
    string S1;

    for (string& Word : vString)
        S1 += Word + Delim;

    return S1.substr(0, S1.length() - Delim.length());
}

//====================================================
// Replace Words
//====================================================

string ReplaceWordsUsingSplit(string S1,
    string WordToReplace,
    string ReplaceTo,
    bool MatchCase = true)
{
    vector<string> vString = SplitString(S1, " ");
    for (string& s : vString)
    {
        if (MatchCase)
        {
            if (s == WordToReplace)
                s = ReplaceTo;
        }
        else
        {
            if(LowerAllString(s) == LowerAllString(WordToReplace))
                s = ReplaceTo;
        }
    }
    return JoinString(vString, " ");
}

//====================================================
// Main
//====================================================

int main()
{
    string S1 = "Welcome to jordan , jordan is a nice country";
    string StringToReplace = "Jordan";
    string ReplaceTo = "USA";

    cout << "Original String:\n";
    cout << S1 << "\n";

    cout << "\nCase Sensitive:\n";
    cout << ReplaceWordsUsingSplit(S1, StringToReplace, ReplaceTo);

    cout << "\n\nCase Insensitive:\n";
    cout << ReplaceWordsUsingSplit(S1, "jordan", ReplaceTo, false);

    system("pause>0");
}
