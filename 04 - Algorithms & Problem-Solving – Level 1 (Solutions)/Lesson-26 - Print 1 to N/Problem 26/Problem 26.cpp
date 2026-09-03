// loop for N
#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter number ?" << endl;
	cin >> Number;
	return Number;
}
void PrintRangeWhile(int N)
{
	int Counter = 0;
	cout << "Range using While statemnt: \n";
	while (Counter <= N)
	{
		cout << Counter << endl;

		Counter++;
	}
}

void PrintRangeFor(int N)
{
	int Counter = 0;
	cout << "Range using for statemnt: \n";
	cout << "******************\n";
	for (Counter = 0; Counter <= N; Counter++)
	{
		cout << Counter << endl;

	}
}

void PrintRangeDo(int N)
{
	int Counter = 0;
	cout << "Range using do statemnt: \n";
	do
	{
		cout << Counter << endl;

		Counter++;
	} while (Counter <= N);
}

int main()
{
	int N = ReadNumber();
	PrintRangeWhile(N);
	PrintRangeFor(N);
	PrintRangeDo(N);
}

