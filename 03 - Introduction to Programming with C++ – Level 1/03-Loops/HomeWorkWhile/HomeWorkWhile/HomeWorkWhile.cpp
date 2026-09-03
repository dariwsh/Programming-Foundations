#include <iostream>
#include <string>
using namespace std;

// --- [Problem 26: Print Numbers from 1 to N] ---
void Problem26() {
    int n , i=0;
    cout << "\n[Problem 26] Enter a number to count UP to: ";
    cin >> n;
    

    while (i <= n)
    {
        cout << i << " \n";
        i++;
    }
    cout << endl;
}

// --- [Problem 27: Print Numbers from N to 1] ---
void Problem27() {
    int n;
    cout << "\n[Problem 27] Enter a number to count DOWN from: ";
    cin >> n;
   
    int i = n;
    while (i >= 1) {
        cout << i << " \n";
        i--;
    }
    cout << endl;
}

// --- [Problem 28: Sum Odd Numbers from 1 to N] ---
void Problem28() {
    int n, sum = 0;
    cout << "\n[Problem 28] Enter number to sum ODD numbers: ";
    cin >> n;
    
    int i = 1;
    while (i <= n)
    {
        if (i % 2 != 0) { // شرط الرقم الفردي
            sum += i;    // الجمع التراكمي (تعديل الخطأ السابق)
        }
        i++;
    }
    cout << "Sum of Odd Numbers = " << sum << endl;
}

// --- [Problem 29: Sum Even Numbers from 1 to N] ---
void Problem29() {
    int n, sum = 0;
    cout << "\n[Problem 29] Enter number to sum EVEN numbers: ";
    cin >> n;
   
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0) { // شرط الرقم الزوجي
            sum += i;
        }
        i++;
    }
    cout << "Sum of Even Numbers = " << sum << endl;
}



void Problem30()
{
    int n;
    double fac = 1;
    cout << "Enter Your Number : \n";
    cin >> n;
    
    while (n >= 1)  
    {

        fac *= n;
        n--;
    }
    cout << fac;

}


void Problem46()
{
   
    char i = 65;
    while (i <= 90)
    {
        cout << i << endl;
        i++;
    }
}
 
void Problem32()
{
    int num, m, result = 1;
    cout << "Enter two number: ";
    cin >> num >> m;
    if (m == 0) {
        cout << "Result = 1" << endl;
        return;
    }
    
    int i = 1;
   
    while (i <= m) {
        result = num * result;
        i++;
    }
    cout << result;
}

void Problem34()
{
    int sum = 0;
    int num;
    cout << "Enter number: " << endl;
    cin >> num;
    int i = 0;
   
    while (num != -99)
    {
            sum = sum + num;
            cout << "Enter next Number: " << endl;
            cin >> num;
    }
    cout << "sum : " << sum;
   
}

void Problem50()
{
    int count=0 ,  read, pin;
    int blance = 7500;

    while (count < 4) {
        cout << "Enter Pin: \n";
        cin >> pin;
        if (pin == 1234)
        {
            cout << "Your Blance is : " << blance << endl;
            return;
        }
        else
        {
            count++;
            cout << "Wrong Pin " << (3-count ) << " Traials left" <<  endl;
        }

    }
    cout << "\nYour card is locked! Please contact the bank." << endl;
}

int main()
{
    //Problem26();
    //Problem27();
    //Problem28();
    //Problem29();
    //Problem30();
    //Problem46();
    //Problem32();
    //Problem34();
    Problem50();
}

