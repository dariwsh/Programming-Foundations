#include <iostream>
using namespace std;
class clsPerson
{
public:
	string FullName;
	//This is Instructor will be called when object is built.
	clsPerson()
	{
		FullName = "Mohammed Abu-Hadhoud";
		cout << "\nHi, I'm Constructor";
	}
	//This is destructor will be called when object is destroyed.
	
	~clsPerson() {
		cout << "\nI am Destructor";
	}
};

void Function1() {
	clsPerson Person1;
}

void Function2() {
	clsPerson* Person2 = new clsPerson;
	delete Person2; // لزم ده علشان البرنامج ميبقش بطي جدا 
}
int main()
{
	//Destructor بعد ميخلص بناء الكود بعد يعرض وبعده اضغط اي زر يظهر الهدم هو 
	//clsPerson Person1;
	// دي هتثبت انا لزم تحط delete لو استخدامات new 
	Function2();

	system("pause>0");
	return 0;
}