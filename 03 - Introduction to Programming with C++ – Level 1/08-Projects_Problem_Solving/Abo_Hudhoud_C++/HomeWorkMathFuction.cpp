#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float p = 3.141592653589793;
	/*
	 Homework Lessons MathFuctions
	cout << "********Problem 16 ***********\n";
	double a, b, area;
	cout << "Enter the number one: ";
	cin >> a;
	cout << "Enter the number two: ";
	cin >> b;
	area = a * sqrt(pow(b, 2) - pow(a, 2));
	cout << "The area is: " << area << endl;
	cout << "******************************\n";

	cout << "********Problem 18 **************\n";
	double p = 3.14, r;
	cout << "Enter a number ";
	cin >> r;
	double area = p * pow(r, 2);
	cout << "Area is a : " << area << "\n";
	cout << "Area is a : " << ceil(area)<< "\n";
	cout << "******************************\n";

	cout << "********Problem 19 **************\n";
	double d, area;
	cout << "Enter a Number : ";
	cin >> d;
	area = p * pow(d, 2) / 4;
	cout << "Area is : " << area << "\n";
	cout << "Area after ceil  is : " << ceil( area)<< "\n";
	cout << "******************************\n";

	cout << "********Problem 20 **************\n";
	double d, area;
	cout << "Enter a Number : ";
	cin >> d;
	area =p*pow(d,2)/ 4;
	cout << "Area is : " << area << "\n";
	cout << "Area after ceil  is : " << ceil(area) << "\n";
	cout << "******************************\n";

	cout << "********Problem 21 **************\n";
	float d, area;
	cout << "Enter a Number : ";
	cin >> d;
	area = pow(d,2)/( 4* 3.14);
	cout << "Area is : " << area << "\n";
	cout << "Area after floor  is : " << floor(area) << "\n";
	cout << "******************************\n";

	cout << "********Problem 22 **************\n";
	float a , b, area;
	cout << "Enter a Number : ";
	cin >> a;
	cout << "Enter a Number : ";
	cin >> b;
	area = (p * pow(b,2) / 4) *( (2 * a -b )/ (2 *a +b)) ;
	cout << "Area is : " << area << "\n";
	cout << "Area after floor  is : " << floor(area) << "\n";
	cout << "******************************\n";

	cout << "********Problem 22 **************\n";
	float a , b, area;
	cout << "Enter a Number : ";
	cin >> a;
	cout << "Enter a Number : ";
	cin >> b;
	area = (p * pow(b,2) / 4) *( (2 * a -b )/ (2 *a +b)) ;
	cout << "Area is : " << area << "\n";
	cout << "Area after floor  is : " << floor(area) << "\n";
	cout << "******************************\n";
	cout << "********Problem 23 **************\n";
	float a, b,c, area;
	cout << "Enter a Number : ";
	cin >> a;
	cout << "Enter a Number : ";
	cin >> b;
	cout << "Enter a Number : ";
	cin >> c;
	double sent = (a + b + c) / 2;
	double bottom = 4 *sqrt(sent * (sent - a) * (sent - b) * (sent - c));

	area = p * pow(a*b*c/ bottom,2);
	cout << "Area is : " << area << "\n";
	cout << "Area after round  is : " << round(area) << "\n";
	cout << "******************************\n";

	cout << "********Problem 31 **************\n";
	float a;
	cout << "Enter a Number : ";
	cin >> a;


	cout << pow(a, 2) << endl;
	cout << pow(a, 3) << endl;
	cout << pow(a, 4) << endl;

	cout << "After Round: " << pow(a, 2) << endl;
	cout << "After Round: " << pow(a, 3) << endl;
	cout << "After Round: " << pow(a, 4) << endl;

	cout << "******************************\n";

	cout << "********Problem 32 **************\n";
	float a, d , total;
	cout << "Enter a Number : ";
	cin >> a;
	cout << "Enter a Number : ";
	cin >> d;
	total = pow(a,d);
	cout << "Area is : " << total << "\n";
	cout << "Area after floor  is : " << round(total) << "\n";
	cout << "******************************\n";


	*/

	float day, hour, minuet, second, total;
	cout << "Enter A Day: \n";
	cin >> day;
	cout << "Enter A hour: \n";
	cin >> hour;
	cout << "Enter A minuet: \n";
	cin >> minuet;
	cout << "Enter A second: \n";
	cin >> second;

	total = (day * 24 * 60 * 60) + (hour * 60 * 60) + (minuet * 60) + (second);
	cout << "The Total Second: " << total << "\n";
	cout << "The Total Second: " << round (total) << "\n";


}