
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
    int counter = 3;
    do
    {
        counter--;
        PinCode = ReadPinCode();

        if (PinCode == "1234")
        {
            return 1;

        }
        else
        {
            system("color 4f"); // red screan
            cout << "\nWrong PIN\n" << counter << "More \n";


        }



    } while (counter >= 1 && PinCode != "1234");
    return 0;
}



int main()
{
    if (Login())
    {
        system("color 2f");
        cout << "\n your account balance is " << 7500 << '\n';
    }
    else
    {
        cout << "\n Car Blocked call the bank for help\n";
    }
    return 0;


}

