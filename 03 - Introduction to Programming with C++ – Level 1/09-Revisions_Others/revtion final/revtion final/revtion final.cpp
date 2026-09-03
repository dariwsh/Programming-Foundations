
/*
// sheet 4
// q 1
//int number;
//cout << "Hello, World!" << endl;
//cout << "Enter your number: ";
//cin >> number;

//if (number >= 0) {
//	cout << "The number is positive." << endl;
//}
//else if(number < 0) {
//	cout << "The number is negative." << endl;
//}
//else {
//	cout << "The number is zero." << endl;
//}


// q 2
//int grade;
//cout << "Enter your grade: ";
//cin >> grade;
//if (grade >= 90 && grade <= 100) {
//	cout << "Your exteited" << endl;
//}
//else if (grade >= 80 && grade < 90) {
//	cout << "Your grade very good " << endl;
//}
//else if (grade >= 70 && grade < 80) {
//	cout << "Your grade main good." << endl;
//}
//else if (grade >= 60 && grade < 70) {
//	cout << "Your grad good." << endl;
//}
//else if (grade >= 0 && grade < 60) {
//	cout <<"bad" << endl;
//}
//else {
//	cout << "Invalid grade entered." << endl;
//}
	// q 3
int m = 0;

for (int i = 5; i >= 1; i--) {
	m += i;

}
cout << m << endl;
int m = 0;
	int i = 5;
	while (i >= 1) {

		m += i;
		i--;
	}
	cout << m << endl;
	q4
	for (int i = 1; i < 11; i++) {
		cout << i << " x 5 = " << i * 5 << endl;
	}
		int number;
	int sum = 0;

	do {
		
		cout << "Enter a numbere: ";
		cin >> number;
		sum = sum + number;

	} while (number != 0);
	sum = sum + number;
	cout << sum;
	// sheet 5
		int array[5] = { 2,4,5,8,10 };
	for (int i = 0; i < 5; i++) {
		cout << array[i] << "\n";
	}

	// q 2
		int array[5] ;
	for (int i = 0; i < 5; i++) {
		cin >> array[i] ;
	}

	for (int i = 0; i < 5; i++) {
		cout << array[i] << " ";
	}
	// q 3
		int array[5];
	int sum = 0;
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
		sum += array[i];
	}
	cout << sum << " ";
	// q 4
	int array[8];
	int odd = 0;
	int even = 0;
	for (int i = 0; i < 8; i++) {
		cout << "Enter a number: ";
		cin >> array[i];
		if (array[i] % 2 == 0) {
			even += array[i];
		}
		else {
			odd += array[i];
		}
	}
	cout << even << " even ";
	cout << odd << " odd ";

	// sheet 6 2day array
	int array[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
		// q2
	int array[3][3] ;
	int sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin>> array[i][j];
			sum += array[i][j];
		}
		cout << endl;
	}
	cout << sum << endl;

*/
#include <iostream>
using namespace std;
int main() {
	int i = 3;
	do {
		cout << "hi" << endl;
		i++;
	} while (i <= 6);
}

