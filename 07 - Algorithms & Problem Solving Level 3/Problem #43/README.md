# 🧮 Problem #43: Replace Words (Custom Case-Sensitivity)

A C++ solution for **replacing words with an option for case sensitivity**.

---

## 📋 Problem Description

Write a function `ReplaceWordsUsingSplit` that replaces occurrences of a word in a string, allowing the caller to decide whether the match should be case-sensitive or case-insensitive.

---

## 💡 Key Concepts

- **String Splitting**
- **Case Conversion (`std::tolower`)**
- **Conditional Logic & Function Arguments**
- **Vector Joining**

---

## 💻 C++ Code

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

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

string LowerAllString(string S1)
{
    for (char& Ch : S1)
        Ch = tolower(Ch);

    return S1;
}

string JoinString(vector<string> vString, string Delim)
{
    string S1;

    for (string& Word : vString)
        S1 += Word + Delim;

    return S1.substr(0, S1.length() - Delim.length());
}

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
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #43.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #43.cpp` file.
