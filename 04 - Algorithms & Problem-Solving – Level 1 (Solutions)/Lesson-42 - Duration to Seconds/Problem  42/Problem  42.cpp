/*
* Write a program to calculate the task duration in seconds and print it on screen

Given the time duration of a task in the number of days, hours, minutes, and seconds
*/

#include <iostream>
using namespace std;

struct strTaskDuration
{
	int NumberOfDays, NumberOfHours, NumberOfMinutes, NumberOfSeconds;
};

int ReadPositiveNumber(string Message)
{
	int Number = 0;
	do
	{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}


strTaskDuration ReadTaskDuration()
{
	strTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter Number of Days ? ");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter Number of Hours ? ");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Enter Number of Minutes ? ");

	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter Number of Seconds ? ");

	return TaskDuration;

}
 
int TaskDurationSeconds(strTaskDuration TaskDuration)
{
	int DurationsInSeconds = 0;
	
	DurationsInSeconds = TaskDuration.NumberOfDays * 24 * 60 * 60;
	DurationsInSeconds += TaskDuration.NumberOfHours *  60 * 60;
	DurationsInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationsInSeconds += TaskDuration.NumberOfSeconds ;

	return DurationsInSeconds;
}

int main()
{

	cout << "\n Task Duration In Seconds : " << TaskDurationSeconds(ReadTaskDuration());
	cout << endl;
	return 0;
}

