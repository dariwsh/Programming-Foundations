#include <iostream>
using namespace std;
void Gad()
{
	for (int i = 1; i <= 3; i++)
	{
		cout << "i = " << i << endl;
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << " =  " << i * j << endl;
		}
		cout << "********************\n";
	}
}
void PrintNeam()
{
	for (int v = 1; v <= 10; v++)
	{
		for (int l = 1; l <= v; l++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
int main()
{
	Gad();
	PrintNeam();

	return 0;
}

