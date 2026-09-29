
#include <iostream>
#include <stack>
using namespace std;
int main()
{

	stack <int> stkNum;
	stkNum.push(200);
	stkNum.push(300);
	stkNum.push(400);
	stkNum.push(500);
	stkNum.push(600);


	cout << "Stack Name" << endl;
	stack <string> stkNames;
	stkNames.push("Ahmed");
	stkNames.push("MOhamed");
	stkNames.push("Darwish");

	

	cout << "count = " << stkNum.size() << endl;
	cout << "Numbers are \n";
	while (!stkNum.empty())
	{
		cout << stkNum.top() << endl;
		stkNum.pop();

	}


	cout << "count = " << stkNames.size() << endl;
	cout << "Names is  \n";
	while (!stkNames.empty())
	{
		cout << stkNames.top() << endl;
		stkNames.pop();

	}
	system("pause>0");
	return 0;
}

