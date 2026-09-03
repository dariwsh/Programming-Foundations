// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



/*
* 
* int day;
cout << "Enter day number (1-7): ";
cin >> day;
if (day == 1) {
	cout << "Open from 9 to 5" << endl;
}
else if (day == 2) {
	cout << "Open from 9 to 5" << endl;
}
else if (day == 3) {
	cout << "Open from 9 to 5" << endl;
}
else if (day == 4) {
	cout << "Open from 9 to 5" << endl;
}
else if (day == 5) {
	cout << "Open from 9 to 5" << endl;
}
else if (day == 6) {
	cout << "Open from 10 to 4" << endl;
}
else if (day == 7) {
	cout << "Closed" << endl;
}
else {
	cout << "Invalid day number!" << endl;
}



switch (day) {
case 1:
case 2:
case 3:
case 4:
case 5:
	cout << "Open from 9 to 5" << endl;
	break;

case 6:
	cout << "Open from 10 to 4" << endl;
	break;
case 7:
	cout << "Closed" << endl;
default:
	cout << "Closed" << endl;
	-----------three app #37 ------------------
	app 1 
		int num;
	cout << "Enter a number : ";
	cin >> num;
	switch (num) {
	case 100:
	case 200:
	case 300:
		cout << "The win iphone " << endl;
		break;
	case 500:
		cout << "The win Ipad" << endl;
		break;
	case 600:
		cout << "The win Moble" << endl;
		break;
	default:
		cout << "no Award For This number" << endl;
		return 0;
	}

	----app 2 -----
		int price = 100;
	int discount = 10;
	int years;
	cout << "Type of a number of years in Company\n";
	cin >> years;

	switch (years) {
	case 1:
		discount = 20;
		break;

	case 2:
		discount = 40;
		break;
	case 3:
		discount = 60;
		break;

	}
	cout << "The Price of for discont " << price - discount << endl;

	---- app 3 clac advnced -----
		int n1, n2 ;
	char op;
	cout << "Type of Number One \n";
	cin >> n1;
	cout << "Type of Number Two \n";
	cin >> n2;
	cout << "Choose Operation Number\n";
	cout << " +   \n";
	cout << " -   \n";
	cout << " *   \n";
	cout << " /   \n";
	cout << " %   \n";
	cout << "Chosseo of Opertor: \n";
	cin >> op;

	switch ( op )
	{
	case '+'   :
		cout << n1 << " + " << n2 << " = " << n1 + n2 ;
		break;
	case '-':
			cout << n1 << "-" << n2 << "= " << n1 - n2 << endl;
			break;
	case '*':
			cout << n1 << "*" << n2 << "= " << n1 * n2 << endl;
			break;
	case '/':
			cout << n1 << "/" << n2 << "= " << n1 / n2 << endl;
			break;
	case '%':
		cout << n1 << "%" << n2 << "= " << n1 % n2 << endl;
		break;
	default :
		cout << "The Invaled of Number ";
	}
	''''
	assignment of zero C++ 36 to 37
	''''''
	appp 1
	Þã ÈÅÓÊÚãÇá Çá Switch áÅÙåÇÑ ÑÓÇáÉ ÊÚÈÑ Úä ÍÏË ãÚíä ÍÕá Ýí ÓäÉ ãä ÇáÓäíä
ÇáÓäíä æÇáÑÓÇáÉ ÇáÊí ÊÙåÑ ÓÊÌÏåÇ Ýí ÇáÊÚáíÞÇÊ Ýí ÇáÃÓÝá 		
ÇáÓäÉ ÚÈÇÑÉ Úä ãÏÎá ãä ÇáãÓÊÎÏã æåí ãÊÛíÑ ÈÅÓã year
ÅÐÇ ßÊÈ ÇáãÓÊÎÏã ÓäÉ ÛíÑ ÇáãæÌæÏíä ÊÙåÑ ÑÓÇáÉ “No Events in This Year”
	int year;
	cout << "Enter of Year : ";
	cin >> year;
	switch (year) {
	case 1982:
		cout << "My Birth Day" << endl;
			break;
	case 1989:
		cout << "My First Work" << endl;
		break;
	case 1995:
		cout << "Windows 95" << endl;
		break;
	case 2000:
	case 2001:
	case 2002:
		cout << "Windows Millennium" << endl;
		break;
	case 2003:
	case 2004:
	case 2005:
	case 2006:
	case 2007:
	case 2008:
	case 2009:
	case 2010:
	case 2011:
	case 2012:
	case 2013:
	case 2014:
	case 2015:
	case 2016:
	case 2017:
	case 2018:
	case 2019:
	case 2020:
	case 2021:
	case 2022:
	case 2023:
	case 2024:
	case 2025:
		cout << "This year is in range 2000 - 2025";
		break;

	default:
		cout << "No Events in This Year";
	}
	appp 2
	int day;
	cin >> day;

	switch (day)
	{
	case 1:
	case 2:
	case 3:
		cout << " Shop Is Open";
		break;
	case 4:
	case 5:
		cout << " Shop Is Closed";
		break;
	default:
		cout << "Day Is Not Valid";
	}

	app 3
	int num;
	cin >> num;
	switch (num) {
	case 10:
		cout << "Case 1" << endl;
		break;
	case 20:
		cout << "Case 2" << endl;
		break;
	case 30:
	case 31:
	case 32:
		cout << "Case 3" << endl;
		break;
	default :
		cout << "INvalid Number";

	}
*/

#include <iostream>
using namespace std;

int main()
{
	

	return 0;
}