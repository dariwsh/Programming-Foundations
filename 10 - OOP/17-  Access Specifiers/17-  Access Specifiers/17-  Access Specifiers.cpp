#include <iostream>
using namespace std;

class clsA
{
private:

    int Var1 = 10;

    void Fun1()
    {
        cout << "Function 1\n";
    }

protected:

    int Var2 = 20;

    void Fun2()
    {
        cout << "Function 2\n";
    }

public:

    int Var3 = 30;

    void Fun3()
    {
        cout << "Function 3\n";
    }
};


class clsB : private clsA
{
public:

    void Func1()
    {
        cout << Var3 << endl;
        cout << Var2 << endl;

        Fun2();
        Fun3();
    }
};


class clsC : protected clsB
{
public:

    void Test()
    {
        // Var2; ❌
        // Var3; ❌
        // Fun2(); ❌
        // Fun3(); ❌

        // لأنهم أصبحوا Private داخل clsB
    }
};


int main()
{
    clsB B;

    B.Func1();  // ✅

    // B.Var3;  ❌
    // B.Var2;  ❌
    // B.Fun3(); ❌

    system("pause>0");

    return 0;
}

//clsA
//│
//├── Private
//│   └── لا يصل إلى clsB ❌
//│
//├── Protected
//│   └── مع private inheritance يصبح Private في clsB 🔒
//│
//└── Public
//└── مع private inheritance يصبح Private في clsB 🔒
//
//
//clsB
//│
//└── Private members الموروثة
//└── لا تصل إلى clsC ❌