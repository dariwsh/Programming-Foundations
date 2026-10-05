#include <iostream>
using namespace std;

// Generic Calculator class template for operating on any numeric data type
template <class T>
class Calculator
{
private:
	T N1, N2;

public:
	Calculator(T n1, T n2)
	{
		N1 = n1;
		N2 = n2;
	}

	void PrintResults()
	{
		cout << "Numbers: " << N1 << " and " << N2 << "." << endl;
		cout << N1 << " + " << N2 << " = " << Add() << endl;
		cout << N1 << " - " << N2 << " = " << Subtract() << endl;
		cout << N1 << " * " << N2 << " = " << Multiply() << endl;
		cout << N1 << " / " << N2 << " = " << Divide() << endl;
	}

	T Add()
	{
		return N1 + N2;
	}

	T Subtract()
	{
		return N1 - N2;
	}

	T Multiply()
	{
		return N1 * N2;
	}

	T Divide()
	{
		return N1 / N2;
	}
};

int main()
{
	// Instantiate Calculator with integer type
	Calculator<int> intCalc(10, 120);
	cout << "int Results:" << endl;
	intCalc.PrintResults();

	cout << endl;

	// Instantiate Calculator with float type
	Calculator<float> floatCalc(10.5f, 12.23f);
	cout << "float Results:" << endl;
	floatCalc.PrintResults();

	return 0;
}
