// loop for N to 1
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
	int Counter = N;
	cout << "Range using While statemnt: \n";
	while (Counter  >1)
	{
		Counter--;
		cout << Counter << endl;

		
	}
}

void PrintRangeFor(int N)
{
	int Counter = N+1;
	cout << "Range using for statemnt: \n";
	cout << "******************\n";
	for (Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;

	}
}

void PrintRangeDo(int N)
{
	int Counter = N;
	cout << "Range using do statemnt: \n";
	do
	{
		cout << Counter << endl;

		Counter--;
	} while (Counter >= 1);
}

int main()
{
	int N = ReadNumber();
	PrintRangeWhile(N);
	PrintRangeFor(N);
	PrintRangeDo(N);
}

