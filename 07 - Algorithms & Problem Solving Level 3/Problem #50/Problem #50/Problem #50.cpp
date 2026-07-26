#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

const string ClientsFileName = "Clients.txt";


struct sClient
{
    string AccountNumber;
    string PinCode;
    string Name;
    string Phone;
    double AccountBalance = 0;
    bool MarkForDelete = false;
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


sClient ConvertLineToRecord(string Line, string Separator = "||")
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


string ConvertRecordToLine(sClient Client, string Separator = "||")
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


bool MarkClientForDelete(string AccountNumber,
    vector<sClient>& vClients)
{
    for (sClient& C : vClients)
    {
        if (C.AccountNumber == AccountNumber)
        {
            C.MarkForDelete = true;
            return true;
        }
    }
    return false;
}


void SaveClientsDataToFile(string FileName,
    vector<sClient> vClients)
{
    fstream MyFile(FileName, ios::out);

    if (MyFile.is_open())
    {
        for (sClient C : vClients)
        {
            if (C.MarkForDelete == false)
            {
                MyFile << ConvertRecordToLine(C) << endl;
            }
        }

        MyFile.close();
    }
}


bool DeleteClientByAccountNumber(string AccountNumber,
    vector<sClient>& vClients)
{
    sClient Client;
    char Answer;

    if (FindClientByAccountNumber(AccountNumber, vClients, Client))
    {
        PrintClientCard(Client);

        cout << "\n\nAre you sure you want delete? Y/N : ";
        cin >> Answer;

        if (tolower(Answer) == 'y')
        {
            MarkClientForDelete(AccountNumber, vClients);

            SaveClientsDataToFile(ClientsFileName, vClients);

            cout << "\nClient Deleted Successfully\n";
            return true;
        }
    }
    else
    {
        cout << "\nClient Not Found\n";
    }

    return false;
}


int main()
{
    vector<sClient> vClients = LoadClientsDataFromFile(ClientsFileName);

    string AccountNumber;

    cout << "Enter Account Number: ";
    cin >> AccountNumber;

    DeleteClientByAccountNumber(AccountNumber, vClients);

    system("pause>0");
    return 0;
}