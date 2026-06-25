#include <fstream>
#include <iostream>
using namespace std;
int main() {


	fstream MyFile;
	MyFile.open("MyFile.text", ios::out | ios::app);
	if (MyFile.is_open())
	{
		MyFile << "Ahmed Darwish\n";
		MyFile << "ِاحمد\n";

		MyFile.close();
	}
	return 0;
}