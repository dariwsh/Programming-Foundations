#include <iostream>
using namespace std;


int main()
{
/*int a = 10;
	
	cout << "The Value a  = " << a << endl;
	cout << "The Addres a = " << &a << endl;

	 Pointer
	 لزم pointer يكون نفس Data Tyep لا شي هناخد من Address 
	 احنا هنا بنسخدمه علشان نخزن address only => Array , Function , Vector , Obb ...

	int * P = &a;
	 int* P = a; erro  most be & reference so we can store Addres
	
	cout << "Pointer Value= " << P;*/


	// Test 
	int a = 5; 
	int *p = &a;

	cout << "a = " << a <<endl; // 5
	cout << "p = " << p << endl; // Addres of a
	cout << "*p = " << *p << endl; // Print value store p of a 
	


	return 0;
}
