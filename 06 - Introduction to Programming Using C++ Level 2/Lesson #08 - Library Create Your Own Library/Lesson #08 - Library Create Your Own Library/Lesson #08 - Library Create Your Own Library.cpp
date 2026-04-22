#include <iostream>
#include "MyLib.h"
#include "Input.h"

using namespace std;
using namespace  MyLibar;
using namespace Input;
int main()
{
cout << "Hello ";
// // first library My Libar
//	MyLibar::Test();
//	MyLibar::He();
//	cout << MyLibar::Sum2Numbers(22, 33) << endl;
////  Second libary Input 
//	cout << Input::RandNumber(22,100) << endl;
//	// or 
//	int Random = Input::RandNumber(10, 100);
//	cout << Random;

	// first library My Libar باستخدام using names  
	Test();
	He();
	cout << Sum2Numbers(22, 33) << endl;
	//  Second libary Input   باستخدام using names  
	cout << RandNumber(22, 100) << endl;
	// or 
	int Random = RandNumber(10, 100);
	cout << Random;
return 0;
}