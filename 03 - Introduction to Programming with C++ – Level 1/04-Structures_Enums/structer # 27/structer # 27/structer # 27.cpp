
#include <iostream>
using namespace std;
struct staddress
{
	string street;
	string POBOX;
};
struct person
	{
	string name;
	string phone;
	staddress Address;
};


struct car
{
	string brand;
	string model;
	int year;
	string color;
	int price;
	person owner;
}; 


int main()
{
	car MyCar, Mycar2;
	MyCar.brand = "Toyota";
	MyCar.model = "Corolla";
	MyCar.year = 2020;
	MyCar.color = "Red";
	MyCar.price = 20000;
	cout << "Brand: " << MyCar.brand << endl;
	cout << "Model: " << MyCar.model << endl;
	cout << "Year: " << MyCar.year << endl;
	cout << "Color: " << MyCar.color << endl;
	cout << "Price: $" << MyCar.price << endl;
	cout << "------------------------" << endl;
	


	cout << "Car Details:" << endl;
	cin >> Mycar2.brand;
	cout << "Enter model: "<< endl;
	cin >> Mycar2.model;
	cout << "Enter year: " << endl;
	cin >> Mycar2.year;
	cout << "Brand: " << Mycar2.brand << endl;
	cout << "Model: " << Mycar2.model << endl;
	cout << "Year: " << Mycar2.year << endl; 

	cout << "------------------------" << endl;	

	Mycar2.owner.name = "Ahmed";
	Mycar2.owner.phone = "123-456-7890";
	cout << "Owner Name: " << Mycar2.owner.name << endl;
	cout << "Owner Phone: " << Mycar2.owner.phone << endl;

	cout << "------------------------" << endl;
	Mycar2.owner.Address.POBOX = "45678";
	return 0;
}

