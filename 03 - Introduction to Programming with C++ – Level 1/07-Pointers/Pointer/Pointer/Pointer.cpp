/*
// Pointer example in C++
#include <iostream>
int main() {
	int var = 42;               // Declare an integer variable
	int* ptr = &var;           // Declare a pointer and assign it the address of var
	std::cout << "Value of var: " << var << std::endl;          // Output the value of var
	std::cout << "Address of var: " << &var << std::endl;       // Output the address of var
	std::cout << "Value of ptr: " << ptr << std::endl;          // Output the value of ptr (address of var)
	std::cout << "Value pointed to by ptr: " << *ptr << std::endl; // Output the value pointed to by ptr
	return 0;
}
// Assigment 4 
#include <iostream>
using namespace std;

int main() {
	int array[3][3];
   int sum = 0;
   cout << "Enter 9 integers to fill a 3x3 array:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> array[i][j];
			sum += array[i][j];
		}
	}
	cout << sum << endl;
	int x = 10;
	int* potr = &x;

	cout << "Value of x: " << x << endl;
	cout << "Address of x: " << &x << endl;
	*potr = 20;
	cout << "New value of x: " << x << endl;
	cout << "Value pointed to by potr: " << *potr << endl;
	cout << "Address stored in potr: " << potr << endl;
	return 0;
}
\*/
