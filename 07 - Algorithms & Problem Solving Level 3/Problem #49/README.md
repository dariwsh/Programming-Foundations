# 🧮 Problem #49: Find Client by Account Number

A C++ solution for **searching a client record in a file by account number**.

---

## 📋 Problem Description

Write a function `FindClientByAccountNumber` (spelled `FindClientByAcco0untNumbe` in the codebase) that reads client records from `Clients.txt` and searches for a specific account number. If found, it prints the client's information card.

---

## 💡 Key Concepts

- **File Reading**
- **Linear Search in Vectors**
- **Passing parameters by Reference**

---

## 💻 C++ Code

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0.0;
};

vector<string> SplitString(string S1, string Delim)
{
	vector<string> vString;
	size_t pos = 0;
	string sWord;
	while ((pos = S1.find(Delim)) != string::npos)
	{
		sWord = S1.substr(0, pos);
		if (!sWord.empty())
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (!S1.empty())
	{
		vString.push_back(S1);
	}
	return vString;
}

sClient ConvertLinetoRecord(string Line, string Seperator = "||")
{
	sClient Client;
	vector<string> vClientData = SplitString(Line, Seperator);
	if (vClientData.size() >= 5)
	{
		Client.AccountNumber = vClientData[0];
		Client.PinCode = vClientData[1];
		Client.Name = vClientData[2];
		Client.Phone = vClientData[3];
		try
		{
			Client.AccountBalance = stod(vClientData[4]);
		}
		catch (...) {
			Client.AccountBalance = 0.0;
		}
	}
	return Client;
}

vector<sClient> LoadClientsDataFromFile(string FileName)
{
	vector<sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		sClient Client;
		string Line;
		while (getline(MyFile, Line))
		{
			Client = ConvertLinetoRecord(Line);
			vClients.push_back(Client);
		}
		MyFile.close();
	}
	return vClients;
}

void PrintClientCard(sClient Client)
{
	cout << "\nThe following are the client details:\n";
	cout << "\nAccout Number: " << Client.AccountNumber;
	cout << "\nPin Code : " << Client.PinCode;
	cout << "\nName : " << Client.Name;
	cout << "\nPhone : " << Client.Phone;
	cout << "\nAccount Balance: " << Client.AccountBalance;
}

string AccountNumber()
{
	string AccountNumber;
	cout << "Enter Account Number : ";
	cin >> AccountNumber;
	return AccountNumber;
}

bool FindClientByAcco0untNumbe(string AccountNumber , sClient & Client)
{
	vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
	
	for (sClient  C : vClients)
	{
		if (C.AccountNumber == AccountNumber)
		{
			Client = C;
			return true;
		}

	}
	return false;
 }

int main()
{
	string Account = AccountNumber();
	sClient Client;
	if (FindClientByAcco0untNumbe(Account, Client))
	{
		PrintClientCard(Client);
	}
	else
	{
		cout << "Not found " << Account;
	}
	system("pause>0");
	return 0;
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #49.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #49.cpp` file.
