#include <iostream>
using namespace std;

void problem1() {
		cout << "Mohamed " << endl;

}

void problem2() {
	string name;
	cin >> name;
	cout <<"Enter your Name: " << name << endl;
}

void problem14( int num1, int num2) {
	int temp;
	temp = num1;
	num1 = num2;
	num2 = temp;


	cout << num1 << " " << num2 << endl;
}

int problem15(int num1, int num2) {
	return num1 * num2;
}

double problem16(double num1, double num2) {
	return num1 * sqrt(pow(num2, 2) - pow(num1, 2));
}
float problem18(float num) {
	return 3.14 * pow(num, 2);
}

double problem19(double d) {
	return 3.14 * pow(d,2) /4;
}

double problem20(double a) {
	return (3.14 * (pow(a, 2) / 4));
}

double problem21(double l) {
	return pow(l, 2) / (4 * 3.14);
}
double problem22(double a, double b) {
	return ((3.14 * pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b)));
}
double problem23(double a, double b , double c ) {
	double p = (a + b + c) / 2;
	double pi = 3.14;
	return pi * pow((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))), 2);
}

void problem31(int num) {
	cout << pow(num, 2) << endl;
	cout << pow(num, 3) << endl;
	cout << pow(num, 4) << endl;
}
int problem32(int num) {
	return pow(num, 4);
}
void problem42(int day ,int hour, int min , int sec ) {
	double totalSeconds = day * 24 * 60 * 60 + hour * 60 * 60 + min * 60 + sec;
	cout << totalSeconds << endl;
}

void problem43(long sec) {
	// الثوابت (المربعات الزرقاء في المخطط)
	long secondsPerDay = 24 * 60 * 60;
	long secondsPerHour = 60 * 60;
	long secondsPerMinute = 60;

	// الحسابات (العمليات المتسلسلة)
	long d = sec / secondsPerDay;          // NumberOfDays
	long remainder = sec % secondsPerDay;  // Remainder

	long h = remainder / secondsPerHour;   // NumberOfHours
	remainder %= secondsPerHour;           // Remainder الجديد

	long m = remainder / secondsPerMinute; // NumberOfMinutes
	long s = remainder % secondsPerMinute; // NumberOfSeconds

	// الطباعة (الشكل المتوازي الأضلاع في أسفل المخطط)
	cout << d << ":" << h << ":" << m << ":" << s << endl;
}
int main()
{
	problem1();
	problem2();
	problem14(5, 10);
	cout << problem15(10, 20) << endl;
	cout << problem16(5.0, 40.0) << endl;
	cout << problem18(5) << endl;
	cout << problem19(10) << endl;
	cout << problem20(10) << endl;
	cout << problem21(20.0) << endl;
	cout << problem22(20.0, 10.0) << endl;
	cout << problem23(5,6,7) << endl;
	problem31(3);
	cout << problem32(2) << endl;
	problem42(2,5,45,35);
	problem43(193.535);
	return 0;
}
