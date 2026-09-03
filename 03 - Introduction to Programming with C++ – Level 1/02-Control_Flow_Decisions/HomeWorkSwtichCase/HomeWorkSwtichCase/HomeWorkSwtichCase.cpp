
#include <iostream>
#include <cmath> // مهمة جداً عشان دالة pow
using namespace std;
// problem 45
enum enMonth { January = 1, February, March, April, May, June, July, August, September, October, November, December };
//problem 44
void ShowDayMenu() {
    cout << "****************************\n";
    cout << "Choose a Day of the Week:\n";
    cout << "1: Saturday\n";
    cout << "2: Sunday\n";
    cout << "3: Monday\n";
    cout << "4: Tuesday\n";
    cout << "5: Wednesday\n";
    cout << "6: Thursday\n";
    cout << "7: Friday\n";
    cout << "****************************\n";
}
// problem 36
void ShowOperationMenu() {
    cout << "****************************\n";
    cout << "Choose Your Operation:\n";
    cout << "1: + (Addition)\n";
    cout << "2: * (Multiplication)\n";
    cout << "3: / (Division)\n";
    cout << "4: % (Remainder)\n";
    cout << "5: ^ (Power)\n";
    cout << "****************************\n";
}

int main() {
    // problem 36
    int num1, num2, operation;

    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    ShowOperationMenu();
    cin >> operation;

    cout << "****************************\n";

    switch (operation) {
    case 1:
        cout << num1 + num2;
        break;
    case 2:
        cout << num1 * num2;
        break;
    case 3:
        if (num2 != 0) // حماية من القسمة على صفر
            cout << (float)num1 / num2;
        else
            cout << "Error! Division by zero";
        break;
    case 4:
        cout << num1 % num2;
        break;
    case 5:
        cout << pow(num1, num2); // دالة الأس من مكتبة cmath
        break;
    default:
        cout << "Invalid Operation Number!";
    }
    cout << "\n****************************\n";
	// problem 44
    int day;
    ShowDayMenu();
    cout << "Enter a number for the day of the week (1-7): ";
	cin >> day;
    switch (day) {
    case 1:
        cout << "Saturday";
        break;
    case 2:
        cout << "Sunday";
        break;
    case 3:
        cout << "Monday";
        break;
    case 4:
        cout << "Tuesday";
        break;
    case 5:
        cout << "Wednesday";
        break;
    case 6:
        cout << "Thursday";
        break;

    case 7:
        cout << "Friday";
        break;
    default:
        cout << "Invalid Day Number!";


    }
	cout << "\n****************************\n";
    cout << "\n****************************\n";
    cout << "\nMonth\n";

	// problem 45
    int month;
	cout << "Enter a number for the month (1-12): ";
	cin >> month;
	enMonth m = (enMonth)month; // تحويل الرقم إلى نوع enum
    switch (m) {
    case January:
        cout << "January";
        break;
    case February:
        cout << "February";
        break;
    case March:
        cout << "March";
        break;
    case April:
        cout << "April";
        break;
    case May:
        cout << "May";
        break;
    case June:
        cout << "June";
        break;
    case July:
        cout << "July";
        break;
    case August:
        cout << "August";
        break;
    case September:
        cout << "September";
        break;
    case October:
        cout << "October";
        break;
    case November:
        cout << "November";
        break;
    case December:
        cout << "December";
        break;
    }
    
    return 0;
}