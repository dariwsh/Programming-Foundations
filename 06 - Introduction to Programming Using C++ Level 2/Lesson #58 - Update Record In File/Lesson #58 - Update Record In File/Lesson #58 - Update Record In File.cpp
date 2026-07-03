#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string FileName, vector<string>& vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			vFileContent.push_back(Line);
		}
		MyFile.close();
	}
}

void SaveVectorToFile(string FileName, vector<string>& vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out);
	if (MyFile.is_open())
	{
		for (string& Line : vFileContent)
		{
			if (Line != "")
			{
				MyFile << Line << endl;
			}
		}
		MyFile.close();
	}
}

void UpdateRecordFromFile(string FileName, string Record, string Update)
{
	vector<string> vFileContent;
	LoadDataFromFileToVector(FileName, vFileContent);
	for (string& Line : vFileContent)
	{
		if (Line == Record)
		{
			Line = Update;
		}
	}
	SaveVectorToFile(FileName, vFileContent);
}

void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);
	if (MyFile.is_open())
	{
		string Line;
		while (getline(MyFile, Line))
		{
			cout << Line << endl;
		}
		MyFile.close();
	}
}

int main()
{
	cout << "Before Update Record" << endl;
	PrintFileContent("MyFile.txt");
	cout << "\n**********************\n";

	UpdateRecordFromFile("MyFile.txt", "Ali", "omar");
	cout << "After Update Record" << endl;
	PrintFileContent("MyFile.txt");
	return 0;
}
