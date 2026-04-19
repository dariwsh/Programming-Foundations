#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string (though not used in this example).
#include <cstdlib>    // Include cstdlib for rand() and srand() functions.
#include <ctime>      // Include ctime for the time() function.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

int RandNumber(int Form, int To)
{
	return rand() % (To - Form + 1) + Form;
}
enum enGetRand {
	SomalLatter = 1 , CaptileLetter = 2 , Digta = 3, SpeacialChar = 4
};
char RetunChar(enGetRand get)
{

	switch (get)
	{
	case enGetRand::SomalLatter:
		{
		return char(RandNumber(97, 122));
		}
	case enGetRand::CaptileLetter:
	{
		return char(RandNumber(65, 90));
	}
	case enGetRand::Digta:
	{
		return char(RandNumber(48,57));
	}
	case enGetRand::SpeacialChar:
	{
		return char(RandNumber(33, 47));
	}

	}
return 0;
}


int main()
{
	srand((unsigned)time(NULL));
	cout << RetunChar(enGetRand::SpeacialChar) << endl;
	cout << RetunChar(enGetRand::Digta) << endl;
	cout << RetunChar(enGetRand::CaptileLetter) << endl;
	cout << RetunChar(enGetRand::SomalLatter) << endl;


	return 0;
}
