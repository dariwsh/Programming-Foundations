#include <iostream>
using namespace std;
int main() {
	// declare an int pointer
	int * ptrx;
	// declare an float pointer
	float * ptry;

	// dynmamically allocate memory 
	ptrx = new int;
	ptry  = new float;

	// assigning value to the memory
	*ptrx = 45;
	*ptry = 55.25f;
	 cout << *ptrx << endl;
	 cout << *ptry << endl;

	 // deallocate the memory
	 delete ptrx;
	 delete ptry;

	 return 0;
}