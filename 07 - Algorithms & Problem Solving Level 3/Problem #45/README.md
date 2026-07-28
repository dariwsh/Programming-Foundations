# 🧮 Problem #45: Convert Record to Line

A C++ solution for **serializing a struct record into a single formatted line**.

---

## 📋 Problem Description

Define a `sClient` struct. Write a function `ConvertRecordToLine` that takes a client record struct and serializes it into a single string line using a separator like `#//#`.

---

## 💡 Key Concepts

- **Structs in C++**
- **Data Serialization**
- **Type Conversion (`std::to_string`)**

---

## 💻 C++ Code

```cpp
#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
    getline(cin, Client.AccountNumber);
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

string ConvertRecordToLine(sClient Client, string Seperator = "#/#")
{
    string stClientRecord = "";
    stClientRecord += Client.AccountNumber + Seperator;
    stClientRecord += Client.PinCode + Seperator;
    stClientRecord += Client.Name + Seperator;
    stClientRecord += Client.Phone + Seperator;
    stClientRecord += to_string(Client.AccountBalance);
    
    return stClientRecord;
}

int main()
{
    cout << "\nPlease Enter client Data: \n\n";
    sClient Client;
    Client = ReadNewClient();
    cout << "\n\nClient Record for Saving is: \n";
    cout << ConvertRecordToLine(Client);
    system("pause>0");
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #45.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #45.cpp` file.
