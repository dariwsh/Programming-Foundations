#include <iostream>
#include <limits>
using namespace std;

int ReadNumber()
{
    int Number = 0;

    cout << "Please Enter A Number : ";
    cin >> Number;   // محاولة قراءة أولية

    while (cin.fail())   // حالة فشل الإدخال (type mismatch)
    {
        cin.clear(); // 1) إعادة stream للحالة السليمة

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        // 2) تفريغ كل ما تبقى في الـ buffer حتى نهاية السطر
        //    للتخلّص من الإدخال غير الصالح

        cout << "Invalid Number, Enter A Valid One: " << endl;

        cin >> Number; // 3) إعادة المحاولة
    }

    return Number; // قيمة مضمونة أنها رقم صحيح
}

int main()
{
    cout << ReadNumber();
}