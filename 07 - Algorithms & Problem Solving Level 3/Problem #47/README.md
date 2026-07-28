# 🧮 Problem #47: Save Clients to File

A C++ solution for **writing and appending structured client data to a text file**.

---

## 📋 Problem Description

Write a program to add multiple client records and save them to a file named `Clients.txt`. Each client's records should be converted to a single line with a custom separator (e.g., `||`).

---

## 💡 Key Concepts

- **File Streams (`std::fstream` with `ios::app`)**
- **Data Serialization**
- **Structured Inputs**

---

## 💻 C++ Code

```cpp
#include<iostream>
#include<string>
#include<vector>
#include <fstream>
#include <limits>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

sClient ReadNewClient()
{
	sClient Client;
	cout << "Enter Account Number? ";
	getline(cin >> ws, Client.AccountNumber);
	cout << "Enter PinCode? ";
	getline(cin, Client.PinCode);
	cout << "Enter Name? ";
	getline(cin, Client.Name);
	cout << "Enter Phone? ";
	getline(cin, Client.Phone);
	cout << "Enter AccountBalance? ";
	cin >> Client.AccountBalance;
	return Client;
}

string CovertRecordToLine(sClient Client, string Separator)
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Separator;
	stClientRecord += Client.PinCode + Separator;
	stClientRecord += Client.Name + Separator;
	stClientRecord += Client.Phone + Separator;
	stClientRecord += to_string(Client.AccountBalance);
	return stClientRecord;
}
 
void AddClientsToFile(string FileName, string stDataLine)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << stDataLine << endl;

	}
	MyFile.close();
}

void AddClient() {
	sClient Client = ReadNewClient();
	AddClientsToFile(ClientsFileName, CovertRecordToLine(Client, "||"));
}

void AddClients()
{
	char AddMore = 'Y';
	do
	{
		system("cls");
		cout << "Adding new Client: " << endl;
		AddClient();
		cout << "Client Added Sucessfuly , do you want to add more Clients? ";
		cin >> AddMore;

	} while (toupper(AddMore) == 'Y');
}

int main()
{
	AddClients();

	system("pause>0");
	return 0;
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #47.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #47.cpp` file.
