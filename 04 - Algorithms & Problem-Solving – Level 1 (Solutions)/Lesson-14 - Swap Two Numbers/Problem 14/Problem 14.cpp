#include <iostream>
#include <string>
using namespace std;
void ReadNumbers(int &Num1, int &Num2)
{
	cout << "Please enter number 1 \n";
	cin >> Num1;
	cout << "Please enter number 2 \n";
	cin >> Num2;

}
void Swap(int &a , int&b)
{ 
	int team;
	team = a; 
	a = b;
	b = team;
}
void PrintNumbers(int Num1, int Num2)
{
	cout << "The Number 1 = " << Num1 << endl;
	cout << "The Number 2 = " << Num2 << endl;
}
int main()
{
	int Num1, Num2;
	ReadNumbers(Num1, Num2);
	PrintNumbers(Num1, Num2);
	Swap(Num1, Num2);
	PrintNumbers(Num1, Num2);
	return 0;
}
