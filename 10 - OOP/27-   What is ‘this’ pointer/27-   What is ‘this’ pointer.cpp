
#include "clsEmployee.h" 

#include <iostream>  
using namespace std;


int main(void)

{
    clsEmployee Employee1(101, "Ali", 5000);
    Employee1.Print();

    Employee1.Func2();

    return 0;
}
