#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <limits>
#include <cctype>
#include <iomanip>
using namespace std;

const string ClientsFileName = "Clients.txt";

struct sClient
{
	string AccountNumber;
	string PinCode;
	string Name;
	string Phone;
	double AccountBalance = 0;
	bool MarkUpdateOrDelete = false;
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
		{
			vString.push_back(Word);
		}
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
	Client.AccountNumber = vData[0];
	Client.PinCode = vData[1];
	Client.Name = vData[2];
	Client.Phone = vData[3];
	Client.AccountBalance =stod(vData[4]);
	return Client;
}

string ConvertRecordToLine(sClient Client, string Seperator =
	"#//#")
{
	string stClientRecord = "";
	stClientRecord += Client.AccountNumber + Seperator;
	stClientRecord += Client.PinCode + Seperator;
	stClientRecord += Client.Name + Seperator;
	stClientRecord += Client.Phone + Seperator;
	stClientRecord += to_string(Client.AccountBalance);
	return stClientRecord;

}

vector<sClient> LoadCleintDataFromFile(string FileName)
{
	vector<sClient> vClients;
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		sClient Client;
		while (getline(MyFile, Line))
		{
			Client = ConvertLineToRecord(Line);
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

void PrintClientRecordToAll(sClient Client)
{
	cout << "| " << setw(14) << left << Client.AccountNumber;
	cout << "| " << setw(10) << left << Client.PinCode;
	cout << "| " << setw(40) << left << Client.Name;
	cout << "| " << setw(12) << left << Client.Phone;
	cout << "| " << setw(12) << left << Client.AccountBalance;
}
void PrintAllClientsData(vector <sClient> vClients)
{
	cout << "\n\t\t\t\t\tClient List (" << vClients.size() << ")Client(s).";
		cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	cout << "| " << left << setw(15) << "Accout Number";
	cout << "| " << left << setw(10) << "Pin Code";
	cout << "| " << left << setw(40) << "Client Name";
	cout << "| " << left << setw(12) << "Phone";
	cout << "| " << left << setw(12) << "Balance";
	cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
	for (sClient Client : vClients)
	{
		PrintClientRecordToAll(Client);
		cout << endl;
	}
	cout <<
		"\n_______________________________________________________";
	cout << "_________________________________________\n" << endl;
}


void ShowMainMenuScreen()	
{
	cout << "===========================================\n";
	cout << "               Main Menue Screen           \n";
	cout << "===========================================\n";
	cout << "\t [1] Show Client List.\n";
	cout << "\t [2] Add New Client.\n";
	cout << "\t [3] Delete Client.\n";
	cout << "\t [4] Update Client.\n";
	cout << "\t [5] Find Client.\n";
	cout << "\t [6] Exit.\n";
	cout << "===========================================\n";

}

void StartProject()
{
	vector<sClient> vClients = LoadCleintDataFromFile("Clients.txt");
	short Choice;

	do
	{

		ShowMainMenuScreen();
		cout << "Choose what do you want to do? [1 to 6]?";
		cin >> Choice;
		switch (Choice)
		{
		case 1:
			PrintAllClientsData(vClients);
			cout << "\n\nPress any key to go back to Main Menu...";
			system("pause>0");

			break;
		}
	} while (Choice != 6);
}
int main()
{
	
	StartProject();
	system("pause>0");
	return 0;
}