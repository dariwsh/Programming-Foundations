#include <iostream>
#include "clsInputValidate.h"
#include "clsBankClien.h"
#include "clsPerson.h"


void ReadClientInfo(clsBankClient& Client)
{
	cout << "\nEnter  First Name : ";
	Client.FirstName = clsInputValidate::ReadString();
	cout << "\nEnter  Last Name : ";
	Client.LastName = clsInputValidate::ReadString();
	cout << "\nEnter  Email : ";
	Client.Email= clsInputValidate::ReadString();
	cout << "\nEnter  Phone : ";
	Client.Phone = clsInputValidate::ReadString();
	cout << "\nEnter  PinCode : ";
	Client.PinCode = clsInputValidate::ReadString();
	cout << "\nEnter  Account Balance : ";
	Client.AccountBalance = clsInputValidate::ReadFloatNumber();
}

void AddNewClient()
{
	string AccountNumber = "";
	cout << "\nPlease Enter client Account Number: ";
	AccountNumber = clsInputValidate::ReadString();
	while (clsBankClient::IsClientExist(AccountNumber))
	{
		cout << "\nAccount number is Already used , chose another one:";
		AccountNumber = clsInputValidate::ReadString();
	}

	clsBankClient NewClient = clsBankClient::GetAddNewClientObject(AccountNumber);
	
	ReadClientInfo(NewClient);

	// save Result 
	clsBankClient::enSaveResults SaveResult;
	SaveResult = NewClient.Save();

	switch (SaveResult)
	{
	case  clsBankClient::enSaveResults::svSucceeded:
	{
		cout << "\nAccount Addeded Successfully :-)\n";
		NewClient.Print();
		break;
	}
	case  clsBankClient::enSaveResults::svFaildEmptyObject:
	{
		cout << "\nError account was not saved because it's Empty";
		break;
	}

	case clsBankClient::enSaveResults::svFaildAccountNumberExists:
	{
		cout << "\nError account was not saved because account number is used!\n";
		break;

	}

	}
}


int main()
{
	AddNewClient();
	system("pause>0");
	return 0;
}
