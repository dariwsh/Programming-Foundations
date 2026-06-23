#include <fstream>
#include <iostream>
using namespace std;
int main() {
	fstream MyFile;
	MyFile.open("MyFile.text" , ios::out) ;
	if(MyFile.is_open())
	{
	MyFile << "Ahmed Darwish\n";
	MyFile << "Darwish\n";
	
	MyFile.close();
	}
	return 0;
	}