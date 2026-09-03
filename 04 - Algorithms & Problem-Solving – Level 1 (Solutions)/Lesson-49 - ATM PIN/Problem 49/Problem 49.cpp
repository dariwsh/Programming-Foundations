
#include <iostream>
using namespace std;
string ReadPinCode()
{
    string PinCode;
    cout << "Please enter PIN code \n";
    cin >> PinCode;

    return PinCode;
}

bool Login()
{
    string PinCode;
    do
    {
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;

        }
        else
        {
            cout << "\nWrong PIN\n";
            system("color 4f"); // red screan
        }



    } while (PinCode != "1234");
}
int main()
{
    if (Login())
    {
        system("color 2f");
        cout << "\n your account balance is " << 7500 << '\n';

    };
    return 0;


}

