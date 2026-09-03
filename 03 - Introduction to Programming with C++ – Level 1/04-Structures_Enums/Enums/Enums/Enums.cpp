
/*
#include <iostream>
using namespace std;

enum color { red, green, yellow, blue };
enum Direction { North, south, East, West };
enum week { Sat, Sun, Tue, Wed, Thu, Fri };
enum Gender { male, Famale };
enum Status { Single, Married };


int main()
{
    color MyColor;
    Direction MyDirection;
    week Today;
    Status MyStatus;

    MyColor = color::green;
    cout << MyColor << endl;

    MyDirection = Direction::East;
    cout << MyDirection << endl;
    Today = week::Wed;
    cout << Today << endl;
    MyStatus = Status::Married;
    cout << MyStatus << endl;
    return 0;
}

*/
#include <iostream>
using namespace std;    
enum fname {name,lastName,endName};
enum day { sunday, monday, tuesday, wednesday, thursday, friday, saturday };

enum fovertColor { red, green, yellow, blue };
enum Gender { male, Famale };
enum status { Single, Married };


int main()
{
    fovertColor MyColor;
    MyColor = fovertColor::yellow;
    Gender gnd;
    gnd = Gender::male;
    status MyStatus;
    MyStatus = status::Single;

    cout << MyColor << endl;
    cout << gnd << endl;
    cout << MyStatus;

}