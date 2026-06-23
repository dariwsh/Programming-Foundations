#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int numberOfUser;

    cout << "Enter Number Of Elements: ";
    cin >> numberOfUser;

    vector<int> num(numberOfUser );
    for (int i = 0; i < numberOfUser; i++)
    {
        cout << "Elemtent  " << i + i << ": ";
        cin >> num.at(i);
    }
    cout << "\nFirst Element  : " << num.at(0) << endl;
    cout << "Last Element   : " << num.at(numberOfUser - 1) << endl;
    cout << "Middle Element : " << num.at(numberOfUser / 2) << endl;
}

