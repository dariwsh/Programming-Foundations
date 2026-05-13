#include <iostream>
using namespace std;
int main()
{
	int arr[4] = { 10,20,30,40 };
	//cout << arr;
	//cout << "\n)))))\n";
	int* ptr;
	ptr = arr;
	//ptr is equivalent to &arr[0];
	//ptr + 1 is equivalent to &arr[1];
	//ptr + 2 is equivalent to &arr[2];
	//ptr + 3 is equivalent to &arr[3];
	//cout << "Addresses are:\n";
	//cout << ptr << endl;
	//cout << ptr + 1 << endl;
	//cout << ptr + 2 << endl;
	//cout << ptr + 3 << endl;
	//cout << "\nValues are: \n";
	//cout << *(ptr) << endl;
	//cout << *(ptr + 1) << endl;
	//cout << *(ptr + 2) << endl;
	//cout << *(ptr + 3) << endl;
	cout << "\n *********** value ************ \n";

	for (int i = 0; i < 4; i++)
	{
		cout << "Array " << i << ": " << *(ptr + i) << endl;
	}
	cout << "\n *********** Address ************ \n";
	for (int i = 0; i < 4; i++)
	{
		cout << "Array " << i << ": " << (ptr + i) << endl;
	}
	return 0;
}