#include <iostream>

using namespace std;

void swap(int &A, int &B)
{
	int temp;
	temp = A;
	A = B;
	B = temp;
	cout << "After Swap inside function  A = " << A << ", B = " << B << endl;
}

int main()
{
	int A, B;
	cout << "Please enter the A ?\n";
	cin >> A;
	cout << "Please enter the B ?\n";
	cin >> B;
	cout << "Values BEFORE swap: A = " << A << ", B = " << B << endl;
	swap(A, B);
	cout << "Values AFTER swap in main: A = " << A << ", B = " << B << endl;
}