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


string JoinString(vector<string>vString, string Delim)
{
	string S1 ="";
	for (string& S : vString)
	{
		S1 = S1 + S + Delim;
	}
	return S1.substr(0, S1.length() - Delim.length());
}

int main()
{
	vector<string>vString = { "Ahmed","Mohamed" };

	//vString = SplitString(ReadString() , " ");
	string Result = JoinString(vString, " , ");
	cout << Result;

	system("pause>0");
}