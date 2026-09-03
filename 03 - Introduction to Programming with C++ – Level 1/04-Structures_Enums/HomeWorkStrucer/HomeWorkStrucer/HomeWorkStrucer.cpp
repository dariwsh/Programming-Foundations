#include <iostream>
#include <string>
using namespace std;
struct MyCars
{
	string brand;
	string model;
	int year;
	string color;
};
struct person
{
	string name;
	int age;
	string city;
	string country;
	int salary;
	int yearSalary;
	char gender;
	bool married;
	MyCars car;

};

int main()
{
	person me ;
	me.name = "Ahmed Darwish";
	me.age = 22;
	me.city = "Alex";
	me.country = "Egypt";
	me.salary = 6000;
	me.yearSalary = me.salary * 12;
	me.gender = 'a';
	me.married = 1;
	cout << "Name: " << me.name << endl;
	cout << "Age: " << me.age << endl;
	cout << "City: " << me.city << endl;
	cout << "Country: " << me.country << endl;
	cout << "Salary: " << me.salary << endl;
	cout << "Year Salary: " << me.yearSalary << endl;
	cout << "gender: " << me.gender << endl;
	cout << "Married: " << me.married << endl;

	cout << "------------------------" << endl;

	me.car.brand = "BMW";
	me.car.model = "X5";
	me.car.year = 2020;
	me.car.color = "Black";
	cout << "Car Brand: " << me.car.brand << endl;
	cout << "Car Model: " << me.car.model << endl;
	cout << "Car Year: " << me.car.year << endl;
	cout << "Car Color: " << me.car.color << endl;
}