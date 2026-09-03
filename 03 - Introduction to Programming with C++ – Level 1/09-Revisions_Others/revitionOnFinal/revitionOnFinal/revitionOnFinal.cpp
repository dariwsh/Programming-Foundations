/*
#include <iostream>
using namespace std;

// forward declaration
int factorial(int);

int main()
{
	int n, result;

	cout << "Enter a non-negative numbrer: ";
	cin >> n;

	result = factorial(n);
	cout << "Factorial of " << n << " = " << result;
	return 0;
}
// Ïí ÇÓãåÇ Recursion (ÇÓÊÏÚÇÁ ÐÇÊí)
int factorial(int n)
{

	if (n > 1)
	{
		return n * factorial(n - 1);

	}
	else
	{

		return 1;
	}
}
// áæ ÏÎá 4
// factorial(1) = 1
//factorial(2) = 2 × 1 = 2
//factorial(3) = 3 × 2 = 6
//factorial(4) = 4 × 6 = 24
-----------------------------------------------------------------------
// Sheet 10 Tutorial 10
Q 2
void hello() {
	cout << '"' << "Hello funcitons!." << '"' << endl;
}

int main() {
	hello();
	}
------------------------------------------------------
	// Demand 2D Array from the user

	int a[3][3];
	// cin
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> a[i][j];
		}
	}
	// cout
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout <<"index " << i<< " , "<< j << "=" << a[i][j] << endl;

		}
	}
	------------------
	int num1, num2;
	cout << "Enter a anumber intreger one : ";
	cin >> num1;
	cout << "Enter anumbr two : ";
	cin >> num2;

	if (num1 > num2) {
		cout << num1 << "\n";
	}
	else if (num2 > num1) {
		cout << num2 << "\n";
	}
	else {
		cout << "Both numbers are equal." << endl;
}
-----------------
int sumArray(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];

	}
	return sum;
}
-------------------------------

	int i = 0;
	while (i <= 20) {
		cout << i << " ";
		i++;
	}
	cout << endl;-


*/


#include <iostream>

using namespace std;
int arraySum(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	return sum;
}
int main() {
	int numbers[5] = { 1, 2, 3, 4, 5 };
	cout << arraySum(numbers, 5);
	
	
	return 0;
}
