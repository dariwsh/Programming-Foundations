#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> queNum;
	queNum.push(102);
	queNum.push(103);
	queNum.push(104);
	queNum.push(105);
	cout << "\nCount : " << queNum.size();
	cout << "\nFornt : " << queNum.front();
	cout << "\nBack  : " << queNum.back();

	cout << "\nMy Queue = ";
	while (!queNum.empty())
	{
		cout << queNum.front() << "  " ;
		queNum.pop();
	}
	system("pause>0");
}