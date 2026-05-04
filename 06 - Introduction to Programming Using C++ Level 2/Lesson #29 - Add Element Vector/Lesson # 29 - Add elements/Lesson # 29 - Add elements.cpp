#include <vector>
#include <iostream>
using namespace std;
void ReadVector(vector <int> &Vnumber)
{
	int Number;
	char Check = 'Y';
	do
	{
		cout << "Pleas Enter A Number: ";
		cin >> Number;
		Vnumber.push_back(Number);

		cout << "Do You hava Add Number Y | N ";
		cin >> Check;
	}while(Check == 'Y' || Check == 'y');
}

void PrintVector(vector <int>& Vnumber)
{
	cout << "The Vector: ";
	for (int &i : Vnumber)
	{
		cout << i ;
	}
	cout<< endl;
}
int main()
{
	vector <int> Vnumber;
	ReadVector(Vnumber);
	PrintVector(Vnumber);
	return 0;

}

 