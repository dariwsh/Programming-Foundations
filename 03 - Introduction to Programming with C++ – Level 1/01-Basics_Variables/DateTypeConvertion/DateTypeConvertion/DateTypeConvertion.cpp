#include <iostream>
#include <string>

using namespace std;
int main() {
	// HomeWork Date Type Conversion
	string st1 = "43.22";
	double num1 = stod(st1);
	float num2 = stof(st1);
	int num3 = stoi(st1);

	cout << "Converted number double: " << num1 << endl;
	cout << "Converted number float: " << num2 << endl;
	cout << "Converted number int: " << num3 << endl;

	int n1 = 20;
	string s1 = to_string(n1);
	cout << "Converted string: " << s1 << endl;

	double n2 = 33.5;
	string s2 = to_string(n2);
	cout << "Converted string: " << s2 << endl;

	float n3 = 55.23;
	string s3 = to_string(n3);
	cout << "Converted string: " << s3 << endl;
	int num6;
	 num6 = (int)n3;
	cout << "Converted number int using C-style cast: " << num6 << endl;
	int num7;
	num7 = int(num6);
	cout << "Converted number int using functional cast: " << num7 << endl;
	int num8;
	num8 = num6;
	cout << "Converted number int using implicit conversion: " << num8 << endl;
	return 0;

 }