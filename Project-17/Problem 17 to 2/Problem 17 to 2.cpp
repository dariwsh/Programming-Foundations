#include <iostream>
using namespace std;

string ReadPassword()
{
	string Password ;
	cout << " Enter Your Password Captall Wirte? "<< endl;
	cin >> Password;
	return Password;
}

bool GuessPassword(string OriginalPassword)
{
int counter = 0;
string Word = "";
for (int i = 65 ; i <= 90 ; i ++)
{
	for (int j = 65; j <= 90; j++)
	{
		for (int k = 65; k <= 90; k++)
		{
		Word = Word + char(i);
		Word = Word + char(j);
		Word = Word + char(k);
		counter ++;
		cout << "Trial [ " << counter << " ] :" << Word << endl; 
		if (OriginalPassword == Word)
		{
			cout << "Password is " << Word << "\n";
			cout << "Found after " << counter << "Trial (s)";
			return true;
		}
		Word = "";
		}
	}
}
return false;
}





int main()
{
	GuessPassword(ReadPassword());
	return 0;
}