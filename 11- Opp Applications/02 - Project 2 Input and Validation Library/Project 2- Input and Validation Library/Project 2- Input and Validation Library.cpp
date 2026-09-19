#include <iostream>
#include "clsInputValidate.h"

using namespace std;

int main()
{
    cout << "Test IsNumberBetween (Integer): ";
    cout << clsInputValidate::IsNumberBetween(10, 1, 10) << endl;

    cout << "Test IsNumberBetween (Double): ";
    cout << clsInputValidate::IsNumberBetween(10.5, 1.2, 10.0) << endl;

    cout << "Test IsNumberBetween (Double with decimals): ";
    cout << clsInputValidate::IsNumberBetween(10.523, 1.2, 10.02341) << endl;

    cout << "Test IsDateBetween: ";
    cout << clsInputValidate::IsDateBetween(
        clsDate(),
        clsDate(8, 12, 2025),
        clsDate(31, 12, 2025)
    ) << endl;

    cout << "\nRead Integer Number\n";
    int num = clsInputValidate::ReadIntNumber();
    cout << "The Number int: " << num << endl;

    cout << "\nRead Double Number\n";
    double num2 = clsInputValidate::ReadDblNumber();
    cout << "The Number double: " << num2 << endl;

    cout << "\nRead Integer Number Between 1 and 10\n";
    int num3 = clsInputValidate::ReadIntNumberBetween(1, 10);
    cout << "The Number int between: " << num3 << endl;

    cout << "\nRead Double Number Between 1.5 and 10.2\n";
    double num4 = clsInputValidate::ReadDblNumberBetween(1.5, 10.2);
    cout << "The Number double between: " << num4 << endl;

    cout << "\nTest IsValidDate (25/2/2022): ";
    cout << clsInputValidate::IsValideDate(
        clsDate(25, 2, 2022)
    ) << endl;

    system("pause>0");

    return 0;
}
