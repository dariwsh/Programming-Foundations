#include <iostream>
#include "clsInputValidate.h"
#include "clsBankClien.h"
#include "clsPerson.h"



void DeleteClient()
{
	string AccountNumber = "";
	cout << "\nPlease Enter client Account Number: ";
	AccountNumber = clsInputValidate::ReadString();
	while (!clsBankClient::IsClientExist(AccountNumber))
	{
		cout << "\nAccount number is not found, chose another one:";
		AccountNumber = clsInputValidate::ReadString();
	}

	clsBankClient Client1 = clsBankClient::Find(AccountNumber);
	
	Client1.Print();
	cout << "\nAre you sure you want to delete this client y/n?";
	char Answer = 'n';

	cin >> Answer;
	if (Answer == 'y' || Answer == 'Y')
	{
		if (Client1.Delete())
		{
			cout << "\nClient Secced Successfully :-)\n";
			Client1.Print();
		}
		else
		{
			cout << "\nError client was not delete \n";
		}
	}
}


int main()
{
	DeleteClient();
	system("pause>0");
	return 0;
}
