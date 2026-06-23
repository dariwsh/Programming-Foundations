
#include <iostream>
using namespace std;
int main()
{
	int x = 10;

	int* p = &x;

	int* q = new int;

	*q = 50;
	/*
	* STACK

	x = 10

	p -----> x

	q -----> 0x700
	HEAP

	0x700

	50
	*/	
}
