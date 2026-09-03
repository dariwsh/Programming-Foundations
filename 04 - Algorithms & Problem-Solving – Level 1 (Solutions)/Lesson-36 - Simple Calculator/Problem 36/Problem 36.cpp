/*
* Write a program to ask the user to enter:
•
Number1
•
Number 2
•
OperationType
Then perform the calculation according to the Operation Type as follows:
•
“+” : add the two numbers.
•
“-” : Subtract the two numbers.
•
“*” : Multiply the two numbers.
•
“/” : Divide the two numbers
*/
#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string for handling messages.

using namespace std;
enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

int ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}


enOperationType ReadOpType()
{
	char OT = '+';
	cout << "Please enter Operation Type ( +, - , * , / )?\n";
	cin >> OT;
	return (enOperationType)OT ;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType)
	{
	case enOperationType::Add:
		return Number1 + Number2;  // Perform addition.
	case enOperationType::Subtract:
		return Number1 - Number2;  // Perform subtraction.
	case enOperationType::Multiply:
		return Number1 * Number2;  // Perform multiplication.
	case enOperationType::Divide:
		return Number1 / Number2;  // Perform division.
	default:
		return Number1 + Number2;

	}
}
int main()
{
	float Number1 = ReadNumber("Please enter num 1?");

	float Number2 = ReadNumber("Please enter num 2?");

	enOperationType OpType = ReadOpType();
	cout << endl << "Reasult " << Calculate(Number1, Number2, OpType) << endl;
	return 0;

}

