#include <iostream>
using namespace std;

// abstract clss / interface / contract
class clsMobile
{
	virtual void Dial(string PhoneNumber) = 0;
	virtual void SendSMS(string PhoneNumber , string Text) = 0;
	virtual void TakePicture() = 0;

};
class clsiphone : public clsMobile
{
public:
	void Dial(string PhoneNumber)
	{
		cout << PhoneNumber << endl;
	}
	void SendSMS(string PhoneNumber, string Text) {
		cout << PhoneNumber <<   "   " << Text  << endl;

	}
	void TakePicture()
	{
		cout << "Hi" << endl;
	}


};
class clsSamsungNote10 : public clsMobile
{
	//This class signed a contract with clsMobile abstract class
	//therefore it should implement everything in the abstract class
public:
	void Dial(string PhoneNumber)
	{
	};
	void SendSMS(string PhoneNumber, string Text)
	{
	};
	void TakePicture()
	{
	};
};

// example 
class clsDevice
{
public:

	virtual void TurnOn() = 0;
	virtual void TurnOff() = 0;
};


class clsTV : public clsDevice
{
public:

	// اكتب TurnOn هنا

	void TurnOn()
	{
		cout << "Trun On" << endl;
	}
	// اكتب TurnOff هنا
		void TurnOff()
	{
			cout << "Trun Of" << endl;

	}
};


class clsPhone : public clsDevice
{
public:

	// اكتب TurnOn هنا

	void TurnOn()
	{
		cout << "Trun On" << endl;
	}
	// اكتب TurnOff هنا
	void TurnOff()
	{
		cout << "Trun Of" << endl;

	}
};



int main()
{
	clsiphone iphoneXmax;
	iphoneXmax.Dial("01550225603");
	clsSamsungNote10 Note10;

	// example
	clsTV TV1;
	clsPhone Phone1;

	TV1.TurnOn();
	TV1.TurnOff();

	Phone1.TurnOn();
	Phone1.TurnOff();

	system("pause>0");
}