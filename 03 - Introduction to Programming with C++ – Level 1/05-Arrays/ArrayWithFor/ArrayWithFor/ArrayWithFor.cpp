#include <iostream>
using namespace std;
void ReadArrayData(int Arr1[100], int& Length)
{
	cout << "****************************\n";
	cout << "How Many Numbers  do want enter ? 1 to 100 ? \n";
	cin >> Length;

	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Pleas Enter Number: " << i + 1 << endl;
		cin >> Arr1[i];
	}
}
void PrintArrayData(int Arr1[100], int Length)
{
	cout << "\n Array Data...\n";
	for (int i = 0; i <= Length - 1; i++)
	{
		cout << "Number [" << i + 1 << "] : " << Arr1[i] << endl;
	}
}
int CalaucalteArraySum(int Arr1[100], int Length)
{
	int sum = 0;
	for (int i = 0; i <= Length - 1; i++)
	{
		sum += Arr1[i];
	}
	return sum;
}


int main()
{
	int Arr1[100], Length;
	ReadArrayData( Arr1,  Length);
	PrintArrayData(Arr1, Length);
	cout << "\n*************************\n";
	cout << "Sum  = " << CalaucalteArraySum(Arr1, Length) << endl;
	cout << "Average = " << (float)CalaucalteArraySum(Arr1, Length) / Length << endl;

	return 0;
}