
#include <iostream>
using namespace std;
int main()
{
	void *ptr;
	float f1 = 10.5;
	int x = 1000;
	ptr = &f1;

	cout << ptr << endl;
	cout << *(static_cast<float*>(ptr));

	cout << endl;
	ptr = &x;
	cout << *(static_cast<int*>(ptr));

	return 0;
}
