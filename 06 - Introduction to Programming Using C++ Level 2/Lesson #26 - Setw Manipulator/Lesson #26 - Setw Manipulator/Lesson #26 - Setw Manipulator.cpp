#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "---------|--------------------------------|---------|" << endl;
	cout << endl;
	cout << "  Code   |           Name                 |   Mark  |" << endl;
	cout << endl;
	cout << "---------|--------------------------------|---------|" << endl;

	cout << setw(9) << "C++" << "|" << setw(32) << "Introductioin to programming 1 " << "|" << setw(9) << "99" << "|" << endl;
	cout << setw(9) << "C#" << "|" << setw(32) << "Introductioin to programming 1 " << "|" << setw(9) << "88" << "|" << endl;
	cout << setw(9) << "C" << "|" << setw(32) << "Introductioin to programming 1 " << "|" << setw(9) << "80" << "|" << endl;
	cout << setw(9) << "CS50" << "|" << setw(32) << "Introductioin to programming 1 " << "|" << setw(9) << "90" << "|" << endl;

	cout << "---------|--------------------------------|---------|" << endl;

	return 0;
}

