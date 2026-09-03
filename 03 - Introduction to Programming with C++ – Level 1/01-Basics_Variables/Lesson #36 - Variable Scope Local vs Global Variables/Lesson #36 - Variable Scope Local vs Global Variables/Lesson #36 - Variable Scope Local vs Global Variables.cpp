#include <iostream>
using namespace std;

int global = 100; // Global variable
int x = 50; // Global variable
void function()
{
	int local = 200; // Local variable
	int x = 25; // Local variable, shadows global x
	cout << "Inside function:" <<x << endl;
	cout << "Local variable: " << local << endl;
	cout << "Global variable accessed inside function: " << global << endl;
	cout << "Global variable x accessed inside function: " << ::x << endl;
}
int main()
{

	function();
	cout << "Global variable accessed inside main: " << ::global << endl;
	int local = 300; // Local variable in main
	cout << "Local variable in main: " << local << endl;

	int x = 75; // Local variable in main, shadows global x
	cout << "Local variable x in main: " << x << endl;
	return 0;
}

