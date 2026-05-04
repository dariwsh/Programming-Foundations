#include <iostream>
#include <vector>
#include <algorithm> // مكتبة ضرورية لاستخدام max_element

using namespace std;

void ReadVector(vector <int>& Vnumber)
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
	} while (Check == 'Y' || Check == 'y');



}
int CheckNumberMax(vector <int>& Vnumber)
{
	int max_num = Vnumber[0];
	for (int i = 1;i < Vnumber.size(); i++)
	{
		if (Vnumber[i] > max_num)
		{
			max_num =  Vnumber[i];
		}
	}
	return max_num;
}

void Print(vector <int>& Vnumber)
{
	cout << CheckNumberMax (Vnumber);
}
int main()
{
	vector <int>Vnumber;
	ReadVector(Vnumber);
	Print(Vnumber);
	return 0;
}