#include <iostream>
using namespace std;

void functionSum () {
	int a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The sum is: " << (a + b) << endl;
}

int myfunction() {
	int x, y;
	cout << "Enter two integers: ";
	cin >> x >> y;

	return x + y;
}

int main() {
	functionSum();
	cout << myfunction() << endl;
	return 0;
}