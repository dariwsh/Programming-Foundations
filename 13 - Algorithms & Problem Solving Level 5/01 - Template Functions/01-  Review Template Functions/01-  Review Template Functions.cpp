#include <iostream>
#include <string>
using namespace std;

// Template function to find the maximum of two values of any type
template <typename T> 
T myMax(T Number1, T Number2)
{
	return (Number1 > Number2) ? Number1 : Number2;
}

// Template function to find the minimum of two values of any type
template <typename T> 
T myMin(T Number1, T Number2)
{
	return (Number1 < Number2) ? Number1 : Number2;
}

// Template function to find the maximum of three values
template <typename T> 
T myMax3(T Number1, T Number2, T Number3)
{
	return (Number1 > Number2 && Number1 > Number3) ? Number1 : 
	       (Number2 > Number1 && Number2 > Number3) ? Number2 : Number3;
}

// Template function to check equality of two values
template <typename T> 
bool isEqual(T S1, T S2)
{
	return S1 == S2;
}

int main()
{
	// Explicit type specification
	cout << "Max (int): " << myMax<int>(10, 20) << endl;
	cout << "Max (float): " << myMax<float>(10.34f, 20.2f) << endl;

	cout << "Min (int): " << myMin<int>(10, 20) << endl;
	cout << "Min (double): " << myMin<double>(10.5, 3.2) << endl;

	cout << "Max of 3 (int): " << myMax3<int>(10, 50, 20) << endl;
	cout << "Max of 3 (float): " << myMax3<float>(10.5f, 20.2f, 7.3f) << endl;

	// Implicit type deduction
	cout << "Implicit Max (int): " << myMax(10, 20) << endl;
	cout << "Implicit Max (double): " << myMax(10.5, 20.2) << endl;

	// Equality test
	cout << "isEqual (10, 10): " << (isEqual<int>(10, 10) ? "True" : "False") << endl;
	cout << "isEqual (10, 20): " << (isEqual<int>(10, 20) ? "True" : "False") << endl;

	return 0;
}
