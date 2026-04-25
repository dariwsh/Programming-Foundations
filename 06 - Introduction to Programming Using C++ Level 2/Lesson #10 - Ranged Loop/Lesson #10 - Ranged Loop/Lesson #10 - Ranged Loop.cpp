#include <iostream>
using namespace std;
int main()
{
	int arr [] = {1,2,4 ,5,55,66,676,6766};
	for (int n : arr)
	{
		
		cout << n;
	}
	cout << endl;

	for (int n : { 1, 2, 4, 5, 55, 66, 676, 6766})
	{

		cout << n;
	}
	cout << endl;
	int arr2[] = { 1,2,3 };

	for (int& x : arr2)
	{
		x = 0;
	}


	int arr3[] = { 1,2,3 };

	for (int x1 : arr3)
	{
		x1 = x1 * 2;
	}

	for (int x1 : arr3)
	{
		cout << x1;
	}


	cout << endl;
	int arr5[] = { 10,20,30 };

	for (auto& x5 : arr5)
	{
		x5 -= 5;
	}

	cout << arr5[0] << " ";
	return 0;

}
