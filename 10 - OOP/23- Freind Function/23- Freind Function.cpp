#include<iostream>
using namespace std;
class clsA
{
private:
	int _Var1;
	int _Age;
protected:
	int _Var3;
public:
	int Var2;
	clsA()
	{
		_Var1 = 10;
		Var2 = 20;
		_Var3 = 30;
		_Age = 22;
	}
	friend int MySum(clsA A1); //friend function
	friend int Age(clsA C);
};
//this function is a normal function and not a member of any class
int MySum(clsA A1)
{
	return A1._Var1 + A1.Var2 + A1._Var3;
}

// erro
//int Fun2(clsA A1)
//{
// return A1._Var1 + A1.Var2 + A1._Var3;
//}

	int Age(clsA C)
	{
		return C._Age;
	}


int main()
{
	clsA A1;
	cout << MySum(A1) << endl;

	cout << Age(A1);
	system("pause>0");
	return 0;
};