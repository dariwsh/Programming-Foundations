#include <fstream>
#include <iostream>
#include <string>

using namespace std;

void PrintFileContent(string FileName)
{
	fstream MyFile;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open())
	{
		string line;
		while (getline(MyFile, line))
		{
			cout << line << endl;
		}
		MyFile.close();

	}

}

int main() {
	PrintFileContent("MyFile");

	//fstream MyFile;
	//MyFile.open("MyFile.text", ios::out | ios::app);
	//if (MyFile.is_open())
	//{
	//	MyFile << "Ahmed Darwish\n";
	//	MyFile << "ِاحمد\n";

	//	MyFile.close();
	//}


	return 0;
}