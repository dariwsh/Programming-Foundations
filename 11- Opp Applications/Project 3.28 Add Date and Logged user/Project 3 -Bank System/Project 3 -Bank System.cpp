#include <iostream>
#include "clsLoginScreen.h"
int main()
{
	
	while (!clsLoginScreen::ShowLoginScreen())
	{
		break;
	}
	
	system("pause>0");
	return 0;
}
