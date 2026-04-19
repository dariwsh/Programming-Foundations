#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

int RandoNumber(int Form, int To)
{
	int randNumbre = rand() % (To - Form + 1) + Form;
	return randNumbre;
}
int main()
{
	srand((unsigned)time(NULL));
	cout << RandoNumber(1, 6) << endl;
	cout << RandoNumber(1, 6) << endl;
	cout << RandoNumber(1, 6) << endl;

	return 0;
}
