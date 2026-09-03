#include <iostream>
using namespace std;

enum color
{
    red,
    green,
    yellow,
    blue
};
enum Direction
{
    North,
    south,
    East,
    West
};
enum week
{
    Sat,
    Sun,
    Tue,
    Wed,
    Thu,
    Fri
};
enum Gender
{
    male,
    Famale
};
enum Status
{
    Single,
    Married
};

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
}