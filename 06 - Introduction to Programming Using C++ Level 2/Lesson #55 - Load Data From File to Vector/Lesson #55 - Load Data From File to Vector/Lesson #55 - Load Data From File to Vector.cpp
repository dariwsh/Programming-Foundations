#include <string>
#include <fstream>
#include <vector>
#include <iostream>
using namespace std;

/* step 3 read 
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
*/

// step 4 storg on vector 

void PrintFileContent(string FileName, vector<string> & vFileContent)
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



int main()
{
	/* step 1 create one file write 
	fstream MyFile;
	MyFile.open("MyFile.txt", ios::out);
	if (MyFile.is_open())
	{
		MyFile << "Hi, this is the first line\n";
		MyFile << "Hi, this is the second line\n";
		MyFile << "Hi, this is the third line\n";
		MyFile.close();
	}
	*/
	/*	step 2 
		fstream MyFile;
	MyFile.open("MyFile.txt", ios::out| ios:: app);
	if (MyFile.is_open())
	{
		MyFile << "Ahmed darwish\n";
		MyFile << "HOmar\n";
		MyFile << "H4 dvn\n";
		MyFile.close();
	}
	*/
	// step 3 read on text
	 // PrintFileContent("MyFile.txt"); 
	// step 4 
	vector <string> vFileContent;
	PrintFileContent("MyFile.txt", vFileContent);
	for (string& Line : vFileContent)
	{
		cout << Line << endl;
	}

	return 0;
}


