#pragma warning(disable : 4996)
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	time_t t = time(0);
	char* dt = ctime(&t);
	cout << "Local date and time is: " << dt << "\n";
	
	tm* gmtm = gmtime(&t);
	char* UT = asctime(gmtm);
	cout << UT << endl;

	cout << "Local date and time is: " << dt << "\n";
}
