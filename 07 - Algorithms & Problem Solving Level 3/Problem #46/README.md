# 🧮 Problem #46: Convert Line to Record

A C++ solution for **parsing (deserializing) a delimited string line into a struct record**.

---

## 📋 Problem Description

Write a function `ConvertLinetoRecord` that takes a formatted string line (with records separated by `#//#`) and parses it back into a `sClient` struct, then prints the struct details.

---

## 💡 Key Concepts

- **String Parsing**
- **Vector Tokenization**
- **Type Conversion (`std::stod` to convert string to double)**

---

## 💻 C++ Code

```cpp
#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct sClient 
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance;
};

vector<string>SplitString(string S1, string Delim)
{
	vector<string>vString;
	short pos = 0;
	string sWord;
	while ((pos = S1.find(Delim)) != std::string::npos)
	{
		sWord = S1.substr(0, pos);
		if (sWord != "")
		{
			vString.push_back(sWord);
		}
		S1.erase(0, pos + Delim.length());
	}
	if (S1 != "")
	{
		vString.push_back(S1);
	}
	return vString;

}

sClient ConvertLinetoRecord(string Line, string Seperator = "#//#")
{
	vector<string> vClientData = SplitString(Line, Seperator);
	sClient Client;
	Client.AccountNumber = vClientData[0];
	Client.PinCode = vClientData[1];
	Client.Name = vClientData[2];
	Client.Phone = vClientData[3];
	Client.AccountBalance = stod(vClientData[4]);

	return Client;
}

void PrintClientRecord(sClient Client)
{
	cout << "The Following is the extracted client record:\n";
	cout << "Account Number : " << Client.AccountNumber << endl;
	cout << "Pine Code      : " << Client.PinCode		<< endl;
	cout << "Name           : " << Client.Name			<< endl;
	cout << "Phone			: " << Client.Phone			<< endl;
	cout << "Account Balance: " << Client.AccountBalance<< endl;
}

int main()
{
	string stLine = "A150#//#1234#//#Mohammed Abu-Hadhoud#//#079999#//#5270.000000";
	cout << "Line Record is :" << endl;
	cout << stLine << endl;
	cout << endl << endl;
	PrintClientRecord(ConvertLinetoRecord(stLine));
	system("pause>0");
	return 0;
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #46.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #46.cpp` file.
