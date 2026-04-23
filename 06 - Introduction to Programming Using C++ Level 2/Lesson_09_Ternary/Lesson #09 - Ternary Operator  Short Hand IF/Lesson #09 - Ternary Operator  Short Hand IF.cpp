#include<iostream>
using namespace std;
int main()
{
	// Pricet 1
	int Number ;
	cout << "Enter a number : ";
	cin >> Number;
	 string Result = (Number > 0) ? "Positive" : "Negative";
	cout << "Number is " << Result << endl;
	// 2
	
	int Number2;
	cout << "Enter a number2 : ";
	cin >> Number2;

	//if (Number2 > 0)
	//{
	//	if (Number == 0)
	//	{
	//		cout << "Zero";
	//}
	//	cout << "Postive";

	//}
	//else
	//{
	//	cout << "Negative";
	//}
	//

	string res= (Number2 == 0) ? "Zero" : ((Number2 > 0) ? "Postive " : "Negative"); 
	cout << res;
	return 0;
	}