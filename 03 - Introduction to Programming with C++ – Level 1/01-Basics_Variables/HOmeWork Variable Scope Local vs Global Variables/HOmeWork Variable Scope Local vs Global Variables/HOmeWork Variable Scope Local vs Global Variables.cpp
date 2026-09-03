#include<iostream>
using namespace std;

int x = 20; // Global 

int main() {
	int x = 20000;
	x++;
	cout << x << endl;
	cout << ::x << endl;
	::x++;
	cout << ::x << endl;
	return 0;
}