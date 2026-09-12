#include <iostream>
using namespace std;

class clsA {
public :
	static void Fun1()
	{
		cout << "\nHi\n";
	}
	void Fun2()
	{
		cout << "\nHi\n";
	}
};

int main() {
	clsA::Fun1();
	clsA A;
	A.Fun1();
	A.Fun2();
}