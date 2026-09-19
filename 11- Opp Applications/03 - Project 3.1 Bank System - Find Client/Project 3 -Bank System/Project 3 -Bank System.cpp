#include <iostream>

#include "clsBankClien.h"

int main()
{
	clsBankClient Client1 = clsBankClient::Find("A101");
	Client1.Print();

	clsBankClient Client2 = clsBankClient::Find("A101" , "123423");
	Client2.Print();

	cout << clsBankClient::IsClientExist("A101") << endl;
	cout << clsBankClient::IsClientExist("A1032") << endl;

}
