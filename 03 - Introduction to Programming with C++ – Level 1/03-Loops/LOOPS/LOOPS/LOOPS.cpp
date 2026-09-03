/*
 	// example 1 for loop
	for (int i = 0; i < 100; i++) {
		cout << i << endl;
	}
	// example 2 for  loop  in array
	int nums[5] = { 10, 20, 30, 40, 50 };
	for (int j = 0; j <= 4; j++) {
		cout << "Index " << j << ":  " << nums[j] << endl;
	}

	// example 3 for Advanced loop
	int numbers[] = { 100, 200, 300, 400, 500 ,600};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	cout << size << endl;
	int v = 2;
	for (;;) {
		cout << "index "<< v<< ": "  << numbers[v] << endl ;
		v++;
		if (v == 5) {
			break;
		}}
*/

/*
* // app 
	int numbers[] = { 100, 200, 300, 400, 500 ,600 };
	int size = sizeof(numbers) / sizeof(numbers[0]);	*
	// Method 1
	for (int v = 0; v < size; v++) {
		cout << numbers[v] << endl;

	}
	// Method 2
	for (int v = 0; v < size; v++ ) {
		cout << numbers[v] << endl;
		v += 1;
	}
	// Method 3
		int numbers[] = { 100, 200, 300, 400, 500 ,600 , 700 };
	int size = sizeof(numbers) / sizeof(numbers[0]);
	int v = size - 1;
	for ( ; ; ) {
		cout << numbers[v] << endl;
		v--;
		if( v == 1) {
			break;
		}
	}

	string productss[] = { "item 1 " , "item 2", "item 3" };
	string size[] = { "small" , "medium", "large" };
	int prodSize = sizeof(productss) / sizeof(productss[0]);
	for (int i = 0; i < 3; i++) {
		cout << "Product Name: \n " << productss[i] << endl;
		cout << "Size Options: \n ";

		for (int j = 0; j < 3; j++) {
			cout  << size[j] ;
			if (j < 2) {
				cout << " , ";

			}
		}
		cout << "\n===================\n";
	}
	cout << endl;
	// while loop example
	int i = 0;
	while (i < 6) {
		cout << i << endl;
		i+=2;
		if(i == 1) {
			break;
		}
	}
	// do while loop example
	int i = 4;
	do {
		cout << i << endl;
		i++;
	} while (i < 6);

	// continue of break
	int nums[] = { 10, 20, 30, 40, 50 };
	int size = sizeof(nums) / sizeof(nums[0]);



	for (int i = 0; i < size; i++) {
		if (nums[i] == 20) {
			continue;
		}
		cout << nums[i]  << endl;
		cout << " after" << endl;


	} 


	// Count Positvge & Even Numbers only
	int result = 0;
	int nums[] = { 10,20,-20,13,30,-30,40 };
	int numsSize = size(nums);// 7
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] > 0 && nums[i] % 2==0) {
			result += nums[i];
		}
	}
	cout << "Result Is: " << result << endl;

	// Guess The Number
	int guessNumber = 7;
	int guessTriies = 0;
	int choose;
	cout << "Pleade Guess The Numbre Between 1& 10\n";
	while(true) {
		cin >> choose;
		if (choose == guessNumber) {
			cout << "Great , Correct Guess\n";
			break;
		}
		else {
			cout << "Bad, form guess\n";
			guessTriies++;

		}
		if (guessTriies == 3) {
			cout << "Sorry, you failed The numbre is " << guessNumber << endl;
			break;
		}
	}

	// reversed Element frm user

	int vals[5];
	int inp;
	cout << "Typ 5 Number t5o revers\n";
	for (int f = 4; f > -1 ; f--) {
		cin >> inp;
		vals[f] = inp;
	}
	cout << "================" << endl;

	for (int f = 0; f < 5; f++) {
		cout << vals[f] <<endl;
	}
	*/

	/*
	* // Assignment Loops Zero Web School
	// app 1
	cout << "App 1: For  Numbers from 0 to 10\n";
	for (int i = 0; i <= 10; i++) {
		cout << i << endl;
	}
	cout << "=========================\n";
	cout << "App 1: While  Numbers from 0 to 10\n";
	int e = 0;
	while (e <= 10) {
		cout << e << endl;
		e++;
	}
	cout << "=========================\n";
	cout << "App 1: do while  Numbers from 0 to 10\n";

	int d = 0;
	do {
		cout << d << endl;
		d++;
	} while (d <= 10);

	// app 2
	int index = 2;
	for (;;) // <= Do Not Edit This Line
	{
		cout << index << "\n"; // From 2 To 10
		index++;
		if (index == 9) {
			break;

		}
	}


















	// app 4
		// for loop
	cout << "For Loop Output:" << endl;
	for (int i = 0; i < 20; i += 2) {
		cout << i << endl;
		if (i == 8) {
			i += 4;
		}
	}
	cout << "===================" << endl;
	cout << "While Loop Output:" << endl;
	// whie loop
	int v = 0;
	while (v < 20) {
		cout << v << endl;
		v+=2;
		if (v == 10) {
			v += 4;
		}
	}	// for loop
	cout << "For Loop Output:" << endl;
	for (int i = 0; i < 20; i += 2) {
		cout << i << endl;
		if (i == 8) {
			i += 4;
		}
	}
	cout << "===================" << endl;
	cout << "While Loop Output:" << endl;
	// whie loop 
	int v = 0;
	while (v < 20) {
		cout << v << endl;
		v+=2;
		if (v == 10) {
			v += 4;
		}
	}
	// app 5 loop 
		cout << "For Loop Output:" << endl;
	for (int i = 0; i <= 27; i += 3) {
		cout << i << endl;
	}
	cout << "===================" << endl;
	cout << "While Loop Output:" << endl;
	// whie loop
	int v = 0;
	while (v <= 27) {
		cout << v << endl;
		v += 3;
	}

	// app 6 loop
	// 1. ÇáãÊÛíÑ result
	int result = 10;
	// 2. ÍáÞÉ ÇáÊßÑÇÑ (áÏíäÇ 4 ÃÑÞÇã¡ áÐÇ äßÑÑ 4 ãÑÇÊ)
	for (int i = 0; i < 4; i++) {

		// 1. ØÈÇÚÉ ÇáÞíãÉ ÇáÍÇáíÉ
		cout << result;

  // 3. ÊÍÏíË ÇáÞíãÉ ááæÕæá ááÑÞã ÇáÊÇáí
        // åÐÇ ÇáÔÑØ áÖãÇä ÚÏã æÌæÏ ãÓÇÝÉ ÈÚÏ ÇáÑÞã ÇáÃÎíÑ (100 ãáíæä)
        if (i < 3) {
            cout << "\n"; 
            result *= result; // result = result * result (ÊÑÈíÚ ÇáÞíãÉ)
        }
    }
    cout << "\n";
}

// 1. ãÊÛíÑ ÇáÞíãÉ æãÊÛíÑ ÇáÚÏÇÏ
	 int counter = 0;
	 int result = 10;
	while (counter < 4) {

		// 1. ØÈÇÚÉ ÇáÞíãÉ ÇáÍÇáíÉ
		cout << result;

		// 2. ÊÍÏíË ÇáÞíãÉ æÇáÚÏÇÏ
		if (counter < 3) {
			cout << "\n";
			result *= result; // result = result * result
		}

		counter++;
	}
	cout << "\n";
	// app 7 loop
	cout << "For Loop Output:" << endl;
	int result = 2;
	int count = 7;

	for (int i = 0; i < count; i++) {
		// 1. ØÈÇÚÉ ÇáÞíãÉ ÇáÍÇáíÉ
		cout << result << endl;

		// 2. ÊÍÏíË ÇáÞíãÉ ááæÕæá ááÑÞã ÇáÊÇáí (ÇáÖÑÈ Ýí 2)
		if (i < count - 1) { // äÖíÝ ãÓÇÝÉ ãÇ áã íßä ÇáÑÞã ÇáÃÎíÑ

			result *= 2; // result = result * 2
		}
	}

		cout << "whlie Loop Output:" << endl;
	int result = 2;
	int count = 7;
	int i = 0;
	while (i < count) {
		cout << result << endl;

		if (i < count - 1) { // äÖíÝ ãÓÇÝÉ ãÇ áã íßä ÇáÑÞã ÇáÃÎíÑ

			result *= 2; // result = result * 2
		}
		i++;
	}

	// app 8 loop
	int value = 2; //Ïå Ãæá ÑÞã åäØÈÚå.
	int diff = 4; //Ïå ÇáÝÑÞ Çááí åíÊÖÇÝ Úáì ÇáÑÞã. Ýí ÇáÃæá ÇáÝÑÞ = 4.
	 // åÊÔÊÛá 6 ãÑÇÊ (ÚÔÇä äØÈÚ 6 ÃÑÞÇã).
	for ( int i = 0; i<6; i++ ){
		cout << value << endl;
		value += diff; // äÖíÝ ÇáÝÑÞ Úáì ÇáÑÞã ÇáÍÇáí.
		diff = diff * 2;  // ãÖÇÚÝÉ ÇáÝÑÞ Ýí ßá ãÑÉ.

	}
	int i = 0;
	while (i < 6) {
		cout << value << endl;
		value += diff; // äÖíÝ ÇáÝÑÞ Úáì ÇáÑÞã ÇáÍÇáí.
		diff = diff * 2;  // ãÖÇÚÝÉ ÇáÝÑÞ Ýí ßá ãÑÉ.
		i++;
	}
	// app 9 loop
		// Friends Array
	string friends[] = { "Ahmed", "Mohamed", "Sayed", "Gamal" };

	for(int i = 1; i < 3; i++) {

		cout << "Friend Name: " << friends[i] << endl;
	}
	int v = 1;
	while (v < 3) {
			cout << "Friend Name: " << friends[v] << endl;
		v++;

	}
	----------------------------------------
	// app 10 loop
		// Friends Array
			// Friends Array
	string friends[] = { "Ahmed", "Mohamed", "ameer", "Ashraf", "Amany" };

	// Output Needed  "Ahmed" "Ashraf"    "Amany"

	for (int i = 0; i < 5; i++) {
		if (i == 0 || i == 3 || i == 4) {
			cout << "Friend Name: " << friends[i] << endl;
		}
	}

		----------------------------------------
		app 11 loop
		string friends[] = { "Ahmed", "Osama", "Ameer" };
	int size = sizeof(friends) / sizeof(friends[0]); // äÚÑÝ ÚÏÏ ÇáÚäÇÕÑ ÏíäÇãíßíÇð

	for (int i = 0; i < size; i++) {
		cout << "=========" << endl;
		cout << "= " << friends[i] << " =" << endl;
		cout << "==================" << endl;
		cout << "== ";

		for (int j = 0; j < friends[i].length(); j++) {
			cout << friends[i][j];
			if (j < friends[i].length() - 1) {
				cout << ", ";
			}
			else {
				cout << " =";
			}
		}

		cout << endl << "==================" << endl << endl;
	}
	----------
	app 12 loop
	int nums[] = { 10, 20, 14, 28, 40, 80, 15, 30 };
	int size = sizeof(nums) / sizeof(nums[0]);
	cout << "Size: " << size << endl;

	for (int i = 0; i < size - 1; i++) {
		if (nums[i] + nums[i] == nums[i + 1]) {
			cout << nums[i] << endl;
		}
	}
	-----------------------------------------
	// app 13 loop
	for(int i = 30; i > 0; i-=3) {

		cout << i << endl;


	}// first app 
		for(int i = 30; i > 0; i-=3) {
		if (i % 2 == 0) {
			i -= 3;
		}
		cout << i << endl;

		----------------
		app 14 loop
		int num = 2;
	int value = 1;

	while (num < 520) {
		cout << value << endl;
		value = value * 2 + 2;
		num *= 2;
	}
------------------------------------------------
	// app 15 loop
	int help_num = 4;
	int nums[] = { 2, 4, 5, 6, 10 };
	int size = sizeof(nums) / sizeof(nums[0]);
	cout << "Size: " << size << endl;
	for( int i = 0; i < size; i++) {
		int j = size - 1;
		cout << nums[i] << " + " << nums[j] << " = " << nums[i] + nums[j] << endl;;


	}
	*/ 
#include <iostream>
using namespace std;

int main() {


	return 0;
}
