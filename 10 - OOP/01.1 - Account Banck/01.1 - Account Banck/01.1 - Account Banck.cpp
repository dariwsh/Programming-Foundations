#include <iostream>
using namespace std;

class BankAccount
{
private:
    double Balance; // أصبحت private فعلياً (افتراضياً هي private داخل الـ class لكن الأفضل كتابتها للتوضيح)

public:
    // Constructor لتعيين قيمة ابتدائية للرصيد
    BankAccount()
    {
        Balance = 0;
    }

    void Deposit(double DepositClient)
    {
        if (DepositClient > 0)
        {
            Balance += DepositClient;
            cout << "Deposited successfully: " << DepositClient << "\n";
        }
    }

    void Withdraw(double WithdrawClient)
    {
        if (Balance >= WithdrawClient) // التأكد أن الرصيد يكفي
        {
            Balance -= WithdrawClient;
            cout << "Withdrawn successfully: " << WithdrawClient << "\n";
        }
        else
        {
            cout << "Error: Insufficient balance!\n";
        }
    }

    void Print()
    {
        cout << "Current Balance: " << Balance << "\n";
    }
};

int main()
{
    BankAccount Client1;

    Client1.Deposit(5000);
    Client1.Withdraw(2000); // تجربة السحب
    Client1.Print();

    system("pause");
    return 0;
}