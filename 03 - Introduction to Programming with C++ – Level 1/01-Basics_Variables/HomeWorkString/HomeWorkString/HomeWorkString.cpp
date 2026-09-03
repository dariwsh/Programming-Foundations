#include <iostream>
#include <string>
using namespace  std;
int main() 
{
	
	
	string name , s1, s2 ;
	cout << "Enter your name: ";
	getline(cin, name);
	cout << name << "\n";
	
	cout << "Please Enter string? " << endl;
	cin >> s1;
	cout << "Please Enter string? " << endl;
	cin >> s2;
	cout << "******************************" << endl;
	cout << "The Length of String is: " << name.length() << endl;
	cout  << name[0] << endl;
	cout << name[2] << endl;
	cout << name[4] << endl;
	cout << name[7] << endl;

	cout << s1 + s2 << endl;
	int result = stoi(s1) * stoi(s2);
	cout << result << endl;
}