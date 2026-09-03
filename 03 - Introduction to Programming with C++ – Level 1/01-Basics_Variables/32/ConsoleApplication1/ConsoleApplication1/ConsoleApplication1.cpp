// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
// ------------- 32nested if example--------------
int age = 33; // user's age
    int poitns = 1200;
    if (age >= 18) {
        cout << "You are age is ok." << endl;
        if (poitns >= 1000) {
             cout << "You are poitns is ok." << endl;
        }
        else{
            cout << "You need more points." << endl;
        }

    }
    else {
        cout << "You are too young." << endl;
    }
    -----------------------------33--------------
    // # 33 ternary operator
    int age = 33; // user's age
    if (age >= 18) {
        cout << "You are age is ok." << endl;
    }
    else {
        cout << "You are too young." << endl;
    }

    // ternary operator
    // syntax =>  (condition is true ) ? True : false;
    cout << (age >= 18 ? "You are age is ok. \n" : "You are age is not ok. \n");

    string msg = age >= 18 ? "You are age is ok. \n" : "You are age is not ok. \n";
    cout << msg;

    int age ;
    cout << "Enter your age: ";
    cin >> age;

    cout << (age >= 18 ? "You are age is ok. \n" : "You are age is not ok. \n");
	-----------------------------34--------------
    int age = 18; // user's age
    int poitns = 1200;
      if (age >= 18) {
      cout << "You are age is ok." << endl;
        if (poitns >= 1000)
        {
            cout << "You are poitns is ok." << endl;
        }
        else
        {
            cout << "You need more points." << endl;
        } 
    }
    else {
        cout << "You are too young." << endl;
    }
    cout << (age >= 18 ? (poitns >= 800 ? "You are points is ok. \n" : "You  no point ok. \n") : "You are too young.");
*/

#include <iostream>
using namespace std;
int main()
{
    
	return 0;
}

