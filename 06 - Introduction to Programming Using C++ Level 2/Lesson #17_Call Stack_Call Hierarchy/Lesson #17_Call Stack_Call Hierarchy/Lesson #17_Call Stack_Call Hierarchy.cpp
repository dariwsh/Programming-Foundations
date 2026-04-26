#include <iostream>
using namespace std;
void Function4()
{
	cout << "Hi I'm function4 " << endl;
}
void Function3()
{
	Function4();
}
void Function2()
{
	Function3();
}
void Function1()
{
	Function2();
}


// ex 2
void C() {
	cout << "C running\n";
}

void B() {
	C();
	cout << "B running\n";
}

void A() {
	B();
	cout << "A running\n";
}

int main() {
	Function1();
	A();
	return 0;
}