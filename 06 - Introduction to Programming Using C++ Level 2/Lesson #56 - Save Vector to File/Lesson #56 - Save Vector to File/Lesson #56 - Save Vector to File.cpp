#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void SaveVectorToFile(string FileName, vector<string>& vFileContent)
{
	fstream MyFile;
	MyFile.open(FileName, ios::out); // Overwrite mode
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

int main()
{
	vector<string> vFileContent;
	vFileContent.push_back("Ahmed");
	vFileContent.push_back("Mohamed");
	vFileContent.push_back("Darwish");

	SaveVectorToFile("MyFile.txt", vFileContent);
	return 0;
}
