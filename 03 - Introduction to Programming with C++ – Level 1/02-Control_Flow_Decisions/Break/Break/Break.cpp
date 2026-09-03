
#include <iostream>
using namespace std;
void forbreak()
{
	int arr[10] = { 10,20,30,40,50 ,33, 555,33,22,22 };
	int search = 20;

	for (int i = 0; i <= 10; i++)
	{
		cout << "We ARe at iteration " << i + 1 << endl;

		if (search == arr[i])
		{
			cout << endl << search << "and " << arr[i] << endl;
			break;
		}
	}

}

void forcont()
{
	for (int i = 1; i <= 5; i++)
	{
		if (i == 3)
		{
			continue;
		}
		cout << i << endl;
	}
}

void homeWork()
{
	int number, sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cout << "Pleas enter number " << endl;
		cin >> number;
		
		if (sum > 50)
		{
			cout << "The number is greater than 50 and wont be \n";
			continue;
		}
		sum = sum + number;
	}
	cout << sum;
}
int main()
{
	//forcont();
	homeWork();
}
