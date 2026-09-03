#include <iostream>
#include <array>
using namespace std;

void ReadDate(float num[3])
{
	cout << "Please Enter  Numbers: \n";
	cin >> num[0];
	cout << "Please Enter  Numbers: \n";
	cin >> num[1];
	cout << "Please Enter  Numbers: \n";
	cin >> num[2];

}
float av(float num[3])
{
	return (num[0] + num[1] + num[2]) / 3;
}























int main()
{
	//// Homework
	//float arr[3];
	//float av;
	//cout << "Please Enter Garde1?\n";
	//cin >> arr[0];
	//cout << "Please Enter Garde2?\n";
	//cin >> arr[1];
	//cout << "Please Enter Garde13?\n";
	//cin >> arr[2];
	//av = (arr[0] + arr[1] + arr[2]) / 3;
	//cout << "The Average of grade is " << av << endl;




	// Example 1
	float num[3];
	ReadDate(num);
	cout << "The Average of grade is " << av(num) << endl;

}