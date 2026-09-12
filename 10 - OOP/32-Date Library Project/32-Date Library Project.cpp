#include <iostream>
#include <string>
#include "clsDate.h"

using namespace std;

int main()
{
	clsDate Date1;
	Date1.Print();

	clsDate Date2("31/1/2022");
	Date2.Print();

	clsDate Date3(22,1,2025);
	Date3.Print();

	clsDate Date4(150, 2025);
	Date4.Print();


	system("pause>0");
}