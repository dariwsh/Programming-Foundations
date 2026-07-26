#include <string>
#include <iostream>
#include <vector>

using namespace std;
string ReadString()
{
	string S1;
	cout << "\nPlease Enter Your String?\n";
	getline(cin, S1);
	return S1;
}


vector<string>SplitString(string S1, string Delim)
{
	vector<string>vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(Delim)) != string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());

	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;
}

int main()
{
	vector<string>vString;
	string S1 = "Ahmed*,,*Mohmammed*,,*Ali";
	vString = SplitString(S1, "*,,*");

	//vString = SplitString(ReadString() , " ");
	cout << "\nTokens = " << vString.size() << endl;
	for (string& S : vString)
	{
		cout << S << endl;
	}


	system("pause>0");
}