# 🧮 Problem #51: Update Client by Account Number

A C++ solution for **updating an existing client record in a file**.

---

## 📋 Problem Description

Write a function `UpdateClientByAccountNumber` that searches for a client by their account number in the file, displays their information, asks for confirmation, reads new details (PinCode, Name, Phone, AccountBalance), and updates the record in `Clients.txt`.

---

## 💡 Key Concepts

- **File Rewriting / Overwriting (`ios::out`)**
- **Record Modification in a Vector**
- **User Inputs and References**

---

## 💻 C++ Code

```cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include <cctype>
using namespace std;

const string ClientsFileName = "Clients.txt";


struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance = 0;
    bool MarkForUpdate = false;
};


vector<string> SplitString(string S1, string Delim)
{
    vector<string> vString;

    size_t Pos = 0;
    string Word;

    while ((Pos = S1.find(Delim)) != string::npos)
    {
        Word = S1.substr(0, Pos);

        if (Word != "")
            vString.push_back(Word);

        S1.erase(0, Pos + Delim.length());
    }

    if (S1 != "")
        vString.push_back(S1);

    return vString;
}


sClient ConvertLineToRecord(string Line, string Separator = "#//#")
{
    sClient Client;

    vector<string> vData = SplitString(Line, Separator);

    if (vData.size() == 5)
    {
        Client.AccountNumber = vData[0];
        Client.PinCode = vData[1];
        Client.Name = vData[2];
        Client.Phone = vData[3];
        Client.AccountBalance = stod(vData[4]);
    }

    return Client;
}


string ConvertRecordToLine(sClient Client, string Separator = "#//#")
{
    string Line = "";

    Line += Client.AccountNumber + Separator;
    Line += Client.PinCode + Separator;
    Line += Client.Name + Separator;
    Line += Client.Phone + Separator;
    Line += to_string(Client.AccountBalance);

    return Line;
}


vector<sClient> LoadClientsDataFromFile(string FileName)
{
    vector<sClient> vClients;

    fstream MyFile(FileName, ios::in);

    if (MyFile.is_open())
    {
        string Line;

        while (getline(MyFile, Line))
        {
            sClient Client = ConvertLineToRecord(Line);

            if (Client.AccountNumber != "")
                vClients.push_back(Client);
        }

        MyFile.close();
    }

    return vClients;
}


void PrintClientCard(sClient Client)
{
    cout << "\nThe following are the client details:\n";
    cout << "\nAccount Number: " << Client.AccountNumber;
    cout << "\nPin Code      : " << Client.PinCode;
    cout << "\nName          : " << Client.Name;
    cout << "\nPhone         : " << Client.Phone;
    cout << "\nBalance       : " << Client.AccountBalance;
}



bool FindClientByAccountNumber(string AccountNumber,
    vector<sClient> vClients,
    sClient& Client)
{
    for (sClient C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            Client = C;
            return true;
        }
    }

    return false;
}


sClient ChangeClientRecord(string AccountNumber)
{
    sClient Client;
    Client.AccountNumber = AccountNumber;
    cout << "\n\nEnter PinCode? ";
    getline(cin >> ws, Client.PinCode);
    cout << "Enter Name? ";
    getline(cin, Client.Name);
    cout << "Enter Phone? ";
    getline(cin, Client.Phone);
    cout << "Enter AccountBalance? ";
    cin >> Client.AccountBalance;
    return Client;

}


vector <sClient> SaveCleintsDataToFile(string FileName, vector
    <sClient> vClients)
{
    fstream MyFile;
    MyFile.open(FileName, ios::out);//overwrite
    string DataLine;
    if (MyFile.is_open())
    {
        for (sClient C : vClients)
        {
            if (C.MarkForUpdate == false)
            {
                //we only write records that are not marked for
                
                    DataLine = ConvertRecordToLine(C);
                MyFile << DataLine << endl;
            }
        }
        MyFile.close();
    }
    return vClients;
}


bool UpdateClientByAccountNumber(string AccountNumber, vector
    <sClient>& vClients)
{

sClient Client;
char Answer = 'n';
if (FindClientByAccountNumber(AccountNumber, vClients,
    Client))
{
    PrintClientCard(Client);
    cout << "\n\nAre you sure you want update this client? y/n? ";
        cin >> Answer;
    if (Answer == 'y' || Answer == 'Y')
    {
        for (sClient& C : vClients)
        {
            if (C.AccountNumber == AccountNumber)
            {
                C = ChangeClientRecord(AccountNumber);
                break;
            }
        }
        SaveCleintsDataToFile(ClientsFileName, vClients);
        cout << "\n\nClient Updated Successfully.";
        return true;
    }
}
else
{
    cout << "\nClient with Account Number (" << AccountNumber
        << ") is Not Found!";
    return false;
}
}


int main()
{
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    string AccountNumber;

    cout << "Enter Account Number: ";
    cin >> AccountNumber;

    UpdateClientByAccountNumber(AccountNumber, vClients);

    system("pause>0");
    return 0;
}
```

---

## 🚀 How to Run

1. Open the project solution file (`Problem #51.slnx` or `.vcxproj`) in Visual Studio.
2. Compile and run the `Problem #51.cpp` file.
