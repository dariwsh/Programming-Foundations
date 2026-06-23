#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string s1 = "My Name is Ahmed Darwish, I Love Programming.";
	cout << s1 << endl;
	cout << s1.length() << endl;

	cout << s1.at(0) << endl;
	cout << s1.at(3) << endl;
	cout << s1.at(8) << endl;

	s1.append(" @ProgrammingAdvices");

	cout << s1 << endl;
	s1.insert(11, " Eng.");

	cout << s1 << endl;
	cout << s1.substr(0, 7) << endl;
	cout << s1.substr(11, 10) << endl;

	s1.push_back('X');

	cout << s1 << endl;

	cout << s1.find("Ahmed") << endl;
	cout << s1.find("Programming") << endl;
	cout << s1.find("Ali") << endl;

	if (s1.find("Ali") == s1.npos)
	{
		cout << "Not found"<< endl;
	}
	// npos علشان نتاكد ان مش موجود 
	s1.clear();

	cout << s1 << endl;
	cout << s1.length() << endl;
}