
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
void printFile(string FileName)
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
    printFile("MyFile.txt");
	return 0;
}








