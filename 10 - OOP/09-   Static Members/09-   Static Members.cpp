#include <iostream>
using namespace std;

class clsA
{
public:

    // Normal member
    // كل Object عنده نسخة خاصة منه
    int var;

    // Static member
    // متغير واحد مشترك بين كل الـ Objects
    static int counter;

    clsA()
    {
        // كل مرة نعمل Object
        // counter يزيد 1
        counter++;
    }

    void Print()
    {
        cout << "\nvar = " << var << endl;
        cout << "counter = " << counter << endl;
    }
};

// Initialization للـ Static Member
int clsA::counter = 0;


int main()
{
    // إنشاء 3 Objects
    clsA A1, A2, A3;

    // كل Object له var مختلف
    A1.var = 10;
    A2.var = 20;
    A3.var = 30;

    // الـ counter مشترك بينهم
    A1.Print();
    A2.Print();
    A3.Print();


    // تغيير الـ static member
    A1.counter = 500;

    cout << "\nAfter changing the static member:\n";

    A1.Print();
    A2.Print();
    A3.Print();

    return 0;
}