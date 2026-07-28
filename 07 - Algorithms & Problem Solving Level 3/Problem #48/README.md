# 🧮 Problem #48: Show All Clients

A C++ solution for **loading client records from a file and displaying them in a formatted table**.

---

## 📋 Problem Description

Write a program that reads the client list from `Clients.txt`, parses the formatted lines back into a vector of client records, and prints them in a beautiful, formatted ASCII table using `std::setw`.

---

## 💡 Key Concepts

- **File Input Streams (`std::fstream` with `ios::in`)**
- **Formatted Console Output (`std::setw` and `std::left`)**
- **String Split & Parsing**

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

void PrintClientRecord(sClient Client)
{
	cout << "| " << setw(15) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;
}

void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")Client(s).";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	for (sClient Client : vClients)
	{
		PrintClientRecord(Client);
		cout << endl;
	}
	cout << "\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
}

int main()
{
	vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);
	PrintAllClientsData(vClients);
	return 0;
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #48.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #48.cpp` file.
