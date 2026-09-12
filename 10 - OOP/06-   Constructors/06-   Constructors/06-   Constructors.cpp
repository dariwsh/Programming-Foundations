#include <iostream>
using namespace std;

class clsCar {
private:
	string _Model;
	string _Color;
	string _CodeCar;
	double _Cost;

public:

	clsCar(string Model,
	string Color,
	string CodeCar,
	double Cost)
	{
		_Model = Model;
		_Color = Color;
		_CodeCar = CodeCar;
		_Cost = Cost;
	}

	void setModel(string Model){
		_Model = Model;
	}
	void setColor(string Color) {
		_Color = Color;
	}
	void setCodeCar(string CodeCar) {
		_CodeCar= CodeCar;
	}
	void setCostCar(double  Cost) {
		_Cost = Cost;
	}

	string GetModel()
	{
		return _Model;
	}
	string GetColor()
	{
		return _Color;
	}
	string GetCodeCar()
	{
		return _CodeCar;
	}
	double GetCostCar()
	{
		return _Cost;
	}
	

	void Print() {
		cout << "Model    : " << GetModel() << endl;
		cout << "Color    : " << GetColor() << endl;
		cout << "Code Car : " << GetCodeCar() << endl;
		cout << "Cost     : " << GetCostCar() << endl;

	}

};

class clsAddress
{
private:
	string _AddressLine1;
	string _AddressLine2;
	string _POBox;
	string _ZipCode;
public:
	clsAddress(string AddressLine1, string AddressLine2, string
		POBox, string ZipCode)
	{
		_AddressLine1 = AddressLine1;
		_AddressLine2 = AddressLine2;
		_POBox = POBox;
		_ZipCode = ZipCode;
	}
	void SetAddressLine1(string AddressLine1)
	{
		_AddressLine1 = AddressLine1;
	}
	string AddressLine1()
	{
		return _AddressLine1;
	}
	void SetAddressLine2(string AddressLine2)
	{
		_AddressLine2 = AddressLine2;
	}
	string AddressLine2()
	{
		return _AddressLine2;
	}

	void SetPOBox(string POBox)
	{
		_POBox = POBox;
	}
	string POBox()
	{
		return _POBox;
	}
	void SetZipCode(string ZipCode)
	{
		_ZipCode = ZipCode;
	}
	string ZipCode()
	{
		return _ZipCode;
	}
	void Print()
	{
		cout << "\nAddress Details:\n";
		cout << "------------------------";
		cout << "\nAddressLine1: " << _AddressLine1 << endl;
		cout << "AddressLine2: " << _AddressLine2 << endl;
		cout << "POBox : " << _POBox << endl;
		cout << "ZipCode : " << _ZipCode << endl;
	}
};


int main()
{
	clsCar Car1("BMW", "Black", "A24", 2000000);
	Car1.Print();


	clsAddress Address1("Queen Alia Street", "B 303","11192","5555");
		Address1.Print();
	system("pause>0");
	return 0;
}