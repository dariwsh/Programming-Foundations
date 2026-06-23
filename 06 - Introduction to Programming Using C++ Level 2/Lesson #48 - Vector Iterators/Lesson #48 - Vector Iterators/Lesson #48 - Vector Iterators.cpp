#include <iostream>
#include <vector>
using namespace std;
int main() {
	vector<int> num{1,2,3,45,66,7};
	vector<int>::iterator iter;

	for (iter = num.begin(); iter != num.end(); iter++)
	{
		cout << *iter <<  "  ";
	}
	
	

	vector<string> name{ "Ahmed" ,"Mohmed", "Darwish"};
	vector<string>::iterator itern;

	for (itern = name.begin(); itern != name.end(); itern++)
	{
		reverse(name.begin(), name.end());
		cout << *itern << "  ";
	}

	return 0;
}