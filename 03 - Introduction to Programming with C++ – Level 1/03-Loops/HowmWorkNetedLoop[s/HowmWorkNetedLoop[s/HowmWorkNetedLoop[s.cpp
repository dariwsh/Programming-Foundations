#include <iostream>
using namespace std;
void Work1() {
	for (int i = 65; i <= 90; i++)
	{
		cout << "Letter: " << char(i) << endl;
		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) << "\n";

		}
		cout << "*****************" << endl;
	}
}
void Work2()
{
	for (int i = 10; i >= 0; i--)
	{	
		for(int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void Fac()
{
	for (int i = 1; i <= 5; i++) {
		cout << "Result : " << i << endl;
		for (int j = 1; j <= 10; j++)
		{
			cout << i << "*" << j << " =  " << i * j << endl;
		}
		cout << "**************" << endl;
	}
}
void job()
{
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}

}
void Wrok()
{
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 65; j <= 90; j++)
		{
			cout << char(i) << char(j) <<endl;
		}
		cout << "--------------\n";
	}
}
void Work21()
{

	
	for (int i = 10; i >= 0; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}
void Work3()
{
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
}
void Work4()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << endl;
	}
}
void Work5()
{
	for (int i = 65; i <= 70; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(j);
		}
		cout << endl;
	}
}
void Work6()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = i; j <= 10; j++)
		{
			cout <<" " <<  j << "";
		}
		cout << endl;
	}
}
int main()
{
	//Work1();
	//Work2();
	//Fac();
	//job();
	//Wrok();
	//Work21();
	//Work3();
	//Work4();
	//Work5();
	Work6();
}

