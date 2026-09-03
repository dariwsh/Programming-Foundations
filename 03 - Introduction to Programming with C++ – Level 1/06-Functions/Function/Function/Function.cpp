/*
// Function With Parameters 
void sayHello(string msg, string name, int age ) {
	cout << msg <<" " << name <<" " << "." << endl;
	cout << "Your Age Is " << age << endl;
}


int main() {
	sayHello("HI", "Ahmed" , 22);
	sayHello("HI", "Mohamed", 50);
	sayHello("HI", "Mostafa", 83);
	sayHello("HI", "darwish", 100);
	sayHello("HI", "Eskily", 180);
	-------------------------------------------------------------------------------
	app 2, 3 ﬂ· œÂ Œ«—Ã main
	// prcits of function with parameters and conditional statements
void iceBox(string item , string msg) {
	if (item == "Apple") {
		cout <<item << msg  << endl;
	}
	else if (item == "Orange" || item == "lemon") {
		cout << item << msg << endl;
	}
	else if (item == "Grapes") {
		cout << item << msg << endl;
	}
	else {
		cout << "Not found"<< endl;
	}
}

// clac tow number + opertor
void calc(int numOne, int numTwo, string opretor) {
	//cout << numOne << " + " << numTwo << " = ";
	//cout << numOne + numTwo << endl;

	if (opretor == "+") {
		cout << numOne << " + " << numTwo << " = ";
		cout << numOne + numTwo << endl;
	}
	else if (opretor == "-") {
		cout << numOne << " - " << numTwo << " = ";
		cout << numOne - numTwo << endl;
	}
	else if (opretor == "*") {
		cout << numOne << " * " << numTwo << " = ";
		cout << numOne * numTwo << endl;
	}
	else if (opretor == "/") {
		cout << numOne << " / " << numTwo << " = ";
		cout << numOne / numTwo << endl;
	}
	else if (opretor == "%") {
		cout << numOne << " % " << numTwo << " = ";
		cout << numOne % numTwo << endl;
	}
	else { cout << "not found";}

}
	// main function
	// Function Calls // Arguments // Actual Parameters
	iceBox("Apple" ," You Selected Apple ");
	iceBox("Orange"," You Selected Orange");
	iceBox("lemon" ," You Selected Orange");
	iceBox("Grapes"," You Selected Grapes");
	iceBox("Banana", "not found");
	cout << "=========== clac ================"<<endl;
	// clac
	calc(10, 90,"+");
	calc(5, 9, "-");
	calc(10, 9, "*");
	calc(10, 90, "/");
	calc(10, 90, "%");
	-----------------------------------------------------
	// Function With Parameters default values
void details(string msg = "Hi" ,string name = " Unkown ", int age = 0, string country = " Unknown " ) {
	cout << msg << " " << name << " " << age << " " << country << " " << endl;

}
// main function
details("Hello" , "Ahmed" , 22 , "Alex");

-------------------------------------------------------
// Function to calculate the sum of array elements

// Passing Arrayt As Parameter

void calc(int nums[], int count)
{
	int result = 0;
	for (int i = 0; i < count; i++) {
		result += nums[i];
	}
	cout << "Result: "<< result << endl;
	}
	-------------------
	int main() {

	int array[] = { 10,20,30,40,50 };  // result = 10 + 0 =10   20 +10=30   30 +30 =60  60+40 =100 100+50 = 150
	int numSize = size(array);
	cout << "size is: " <<  numSize << endl;
	calc(array, numSize);
	return 0;
}
---------------------------------------------------------------------------------------
//
int calc(int n1, int n2)
{
	cout << "Operation Done" << endl;
	return  n1 + n2 ;//   „„ﬂ‰  ﬁÊ„ »⁄„· break ··ÊŸÌ›Â
	cout << "This Line After Return " << endl; // „‘ Â ‰›–

 }

//void calc(int n1, int n2)
//{
//	cout << "Operation Done" << endl;
//	cout <<   n1 + n2 ;
// return ; // „„ﬂ‰  ﬁÊ„ »⁄„· break ··ÊŸÌ›Â
//}

int main() {
//	calc(10, 20);
	cout << calc(10, 20) + 10 << endl; // 30 + 10 = 40
//	int result = calc(10, 20);
	//cout << result + 10 << endl; // 30 + 10 = 40
	//cout << result << endl; // 30
	//cout << result + 2 << endl; // 30 + 2 = 32
	//cout << result << endl; // 30
	// int result = calc(10, 20); // Error: void function 'calc' should not return a value ·“„ „‘ ÂÌ—Ã⁄ Õ«ÃÂ
	return 0;
}
---------------------------------------------------------------------------------------
// forward declaration Ì⁄‰Ì Â”»«ﬁ «· ⁄—Ì› » «⁄Â« »⁄œ «·„Ì‰
int calc(int n1, int n2);
//{
//	return  n1 + n2;
//}  // ﬂœÂ €·ÿ ·«‰Ì „⁄—›Â „— Ì‰ Ê«‰« ⁄«„· Â« forward declaration ==>int calc(int n1, int n2);
int main()
{
	// call the function
	cout << calc(10, 20);
	return 0;
}


// // Declaraton
int calc(int n1, int n2)
{
	return  n1 + n2;
}

---------------------------------------------------------------------------------------
	«” ⁄„«· „ﬂ »… «· cmath
	// https://cplusplus.com/reference/cmath/
	// method function
	cout << "pow" << endl; // » ÃÌ» «·«”
	cout << pow(2, 4 )<< endl; // 2^4 = 16)
	cout << "sqrt" << endl;// » ÃÌ» «·Ã–— «· —»Ì⁄Ì
	cout << sqrt(16) << endl; // 4
	cout << "fmod" << endl; // » ÃÌ» «·»«ﬁÌ „‰ «·ﬁ”„…
	cout << fmod(11.5, 2) << endl; // 1.5
	cout << fmod(11, 2) << endl; // 1
	cout << "ceil" << endl;   //Ì⁄‰Ì » ÃÌ» «ﬂ»— —ﬁ„ ’ÕÌÕ Ì⁄‰Ì ”ﬁ›
	cout << ceil(4.2) << endl;// 5
	cout << ceil(4.7) << endl;// 5
	cout << "floor" << endl; // » ÃÌ» «ﬁ· —ﬁ„ ’ÕÌÕ Ì⁄‰Ì «—÷
	cout << floor(4.2) << endl; // 4
	cout << floor(4.7) << endl; // 4
	cout << "round" << endl;  // » ﬁ—» ··—ﬁ„ «·’ÕÌÕ «·«ﬁ—»
	cout << round(4.2) << endl; // 4
	cout << round(4.7) << endl; // 5
	cout << "trunc" << endl; // » ÃÌ» «·Ã“¡ «·’ÕÌÕ „‰ «·—ﬁ„
	cout << trunc(4.7) << endl; // 4
	cout << trunc(4.2) << endl; // 4
	cout << trunc(-2.5) ;
	cout << floor(-2.5) ;
	---------------------------------------------------------------------------------------
	Create  Two Appications


#include <iostream>
#include <cctype>
using namespace std;
int main()
{
	cout << "A\n"; // A
	cout << tolower('A') << endl; // a
	cout << char(toupper('A')) << endl; // B
	cout << char(97) << endl; // a
	cout << "===============" << endl;

	cout << "b\n"; // A
	cout << toupper('b') << endl; // a
	cout << char(toupper('b')) << endl; // B
	cout << char(66) << endl; // a
	cout << "===============" << endl;

	cout << "---------------------------------" << endl;

	string nameone = "ElZEro"; // eLzeRO
	int nameoneSize = size(nameone);
	for (int i = 0; i < nameoneSize; i++)
	{
		if (isupper(nameone[i])) {
			cout << char(tolower(nameone[i])) ;

		}
		else if (islower(nameone[i])) {
			cout << char(toupper(nameone[i])) << endl;

		}
	}
	cout << "---------------------------------" << endl;
	string nametwo = " E \n     z\n   \nero\t ";
	int nametwoSize = size(nametwo);
	for (int i = 0; i < nametwoSize; i++)
	{
		//if (nametwo[i] == ' '|| nametwo[i] == '\n' || nametwo[i] == '\t' ) {
		//	continue; // » ⁄œÌ ⁄·Ì «·„”«›«  Ê «· new line Ê «· tab
		//}
		//else {
		//	cout << nametwo[i];
		//}
	// Â” Œœ„ function
		if (isspace(nametwo[i]))
		{
			continue; // » ⁄œÌ ⁄·Ì «·„”«›«  Ê «· new line Ê «· tab
		}

			cout << nametwo[i];

	}

	cout << "---------------------------------" << endl;



	return 0;
}
---------------------------------------------------------------------------------------
cout << "=== min ==============" << endl;
	cout << min(10, 20) << endl; // 10
	cout << min('A', 'b') << endl; // A
	cout << min('a', 'b') << endl; // a
	cout << int('a') << endl; // 97
	cout << int('b') << endl; // 98
	cout << min(10.5, 9.5) << endl; // 9.5
	cout << min({ 10,20,5,30,40,-10,-50 }) << endl; //-50
	cout << endl;
	cout << "=== max ==============" << endl;
	cout << max(10, 20) << endl; // 20
	cout << max('A', 'b') << endl; // b
	cout << max('a', 'b') << endl; //b
	cout << int('a') << endl; // 97
	cout << int('b') << endl; // 98
	cout << max(10.5, 9.5) << endl; // 10.5
	cout << max({ 10,20,5,30,40,-10,-50 }) << endl; // 40
	cout << endl;
	cout << "=======================" << endl;
	// first App  Min Num In Array
	int nums[] = { 10,20,5,30,40,-10,-50 };
	int numsSize = size(nums);
	int checkMinNum = 0;

	for (int i = 0; i < numsSize; i++) {
		if (nums[i] < 0) {
			checkMinNum = nums[i];
		}


	}
	// first App  Max Num In Array
	cout << "Min Num is: " << checkMinNum << endl;
	cout << "=======================" << endl;
	// first App  Min Num In Array
	int nums2[] = { 10,20,5,30,40,-10,-50 };
	int numsSize2 = size(nums2);
	int checkMaxNum2= 0;

	for (int d = 0; d < numsSize2;d++) {
		if (nums2[d] > checkMaxNum2) {
			checkMaxNum2 = nums[d];
		}
	}
	cout << "Max Num is: " << checkMaxNum2 << endl;
	cout << "=======================" << endl;
	// Second App  Count Occurrences of a Specific Number in an Array
	int arr[] = { 10,20,5,30,40,-10,-50 ,10,10,10,10};
	int sizeArr = size(arr);
	int counter = 0;
	int check = 10;

	for (int i = 0; i < sizeArr; i++) {
		if (arr[i] == check) {
			counter++;
		}
	}
	cout << "The Num " << check << " Appear " << counter << " Times in The Array" << endl;
	---------------------------------------------------------------------------------------
	// funciton overloading

	void print(int a, int b) {
	cout << "Number one is : " << a << endl;
	cout << "Number two is : " << b << endl;
}

	void print(int a, int b , int c ) {
		cout << "Number one is : " << a << endl;
		cout << "Number two is : " << b << endl;
		cout << "Number two is : " << c << endl;

	}

	void print(string a , string w, int b, int c) {
		cout << "Number one is : " << a << endl;
		cout << "Number two is : " << w << endl;

		cout << "Number two is : " << b << endl;
		cout << "Number two is : " << c << endl;

	}
int  main()
{
	cout << "fuction 21 overloadign " << endl;
	print(10, 20);
	cout << "fuction 2 overloadign " << endl;
	print(10, 20, 30);
	cout << "fuction 3 overloadign " << endl;
	print("Hello", "World", 100, 200);
	return 0;
}
---------------------------------------------------------------------------------------
int add(int num) {
	if (num == 0) {
		return 0;

	}
	cout << num << endl;
	return num + add(num - 1);
}

int main() {
	cout << "Sum is: " << add(5) << endl;
return 0;
}
---------------------------------------------------------------------------------------
#include <iostream>
using namespace std;
Application 1: Special Calculation Function
// [Function Definition] - ‘—Õ «·œ«·…
// ÊŸÌ› Â«: „ﬁ«—‰… —ﬁ„Ì‰ Ê≈Ã—«¡ ⁄„·Ì… Õ”«»Ì… »‰«¡ ⁄·Ï Õ«· Â„«
int calcspecial(int num1, int num2) {

	// «·Õ«·… «·√Ê·Ï: ≈–« ﬂ«‰ «·—ﬁ„«‰ „ ”«ÊÌÌ‰° ‰ﬁÊ„ »«·Ã„⁄
	if (num1 == num2) {
		return num1 + num2;
	}

	// «·Õ«·… «·À«‰Ì…: ≈–« ﬂ«‰ «·—ﬁ„ «·√Ê· √ﬂ»—° ‰ÿ—Õ «·À«‰Ì „‰ «·√Ê·
	else if (num1 > num2) {
		return num1 - num2;
	}

	// «·Õ«·… «·À«·À…: "»œÌÂÌ«" «·—ﬁ„ «·À«‰Ì √ﬂ»—° ›‰ÿ—Õ «·√Ê· „‰ «·À«‰Ì
	else {
		return num2 - num1;
	}
}

int main()
{
	// «Œ »«— «·Õ«·«  «·„Œ ·›…
	cout << calcspecial(40, 40) << "\n";    // Outputs: 80
	cout << calcspecial(200, 50) << "\n";   // Outputs: 150
	cout << calcspecial(100, 300) << "\n";  // Outputs: 200

	return 0;

}
	-----------------------------------------------------------------------
	the 2 Applications
#include <iostream>
using namespace std;

// Write Your Function Here
float  money(float salary, int days)
{
	int weeks = days / 7;

	int holidays = weeks * 2;

	int actualDays = days - holidays;
	return salary / actualDays;
}






int main()
{
	
	  Hints
	  21 Days Has 3 "Weeks"
	  Every "Week" You Have 2 Holidays.
	  Total = 3 * 2 = 6 Holidays From 21 Days
	
cout << money(2015, 21) << "\n"; // 134.333
cout << money(4500, 40) << "\n"; // 150
return 0;
}
-----------------------------------------------------------------------
#include <iostream>
using namespace std;

// [Function Prototypes]
// ‰÷⁄Â« ›Ì «·»œ«Ì… ·Ì „ﬂ‰ «·‹ main „‰ —ƒÌ Â« ﬁ»· ﬂ «»… „Õ Ê«Â« »«· ›’Ì·
int plusnums(int numone, int numtwo);
int minusnums(int numone, int numtwo);
int divnums(int numone, int numtwo);

int main()
{
	cout << plusnums(50, 60) << "\n";   // «” œ⁄«¡ œ«·… «·Ã„⁄
	cout << minusnums(150, 50) << "\n"; // «” œ⁄«¡ œ«·… «·ÿ—Õ
	cout << divnums(100, 5) << "\n";    // «” œ⁄«¡ œ«·… «·ﬁ”„…
	return 0;
}

// [Function Definitions]
// Â‰« ‰ﬂ » «·‹ Logic «·Œ«’ »ﬂ· œ«·…

int plusnums(int numone, int numtwo) {
	return numone + numtwo; //  —Ã⁄ ‰« Ã «·Ã„⁄
}

int minusnums(int numone, int numtwo) {
	return numone - numtwo; //  —Ã⁄ ‰« Ã «·ÿ—Õ
}

int divnums(int numone, int numtwo) {
	return numone / numtwo; //  —Ã⁄ ‰« Ã «·ﬁ”„…
}

-----------------------------------------------------------------------
#include <iostream>
using namespace std;

// [Function Overloading]

// «·Õ«·… «·√Ê·Ï: ≈–« «” ﬁ»·  3 √—ﬁ«„° ﬁ„ »Ã„⁄Â„ ›ﬁÿ
int calculation(int n1, int n2 , int n3) {
	return n1 + n2 + n3;
}

// «·Õ«·… «·À«‰Ì…: ≈–« «” ﬁ»·  —ﬁ„Ì‰° «Ã„⁄Â„ Ê«÷—» «·‰« Ã ›Ì 2
int calculation(int n1, int n2 ) {
	return (n1 + n2) * 2 ;
}

// «·Õ«·… «·À«·À…: ≈–« «” ﬁ»·  —ﬁ„ Ê«Õœ° «÷—»Â ›Ì 3
int calculation(int n1) {
	return n1 * 3;
}

int main()
{
	cout << calculation(50, 100, 150) << "\n"; // «” œ⁄«¡ «·‰”Œ… «·√Ê·Ï -> 300
	cout << calculation(100, 50) << "\n";      // «” œ⁄«¡ «·‰”Œ… «·À«‰Ì… -> 300
	cout << calculation(100) << "\n";          // «” œ⁄«¡ «·‰”Œ… «·À«·À… -> 300
	return 0;
}
-----------------------------------------------------------------------
#include <iostream>
using namespace std;

void thepower(int num, int p) {
	// 1. ‰»œ√ »„ €Ì— ﬁÌ„ Â 1 (·√‰ «·„Õ«Ìœ «·÷—»Ì ÂÊ 1)
	long long result = 1;

	// 2. ‰ﬁÊ„ »⁄„· Õ·ﬁ…  ﬂ—«— »⁄œœ „—«  «·√” (p)
	for (int i = 0; i < p; i++) {
		result *= num; // ›Ì ﬂ· „—… «÷—» «·‰ ÌÃ… ›Ì «·—ﬁ„ «·√”«”Ì
	}

	// 3. ÿ»«⁄… «·‰« Ã «·‰Â«∆Ì
	cout << result << endl;
}

int main() {
	thepower(2, 5); // 2 * 2 * 2 * 2 * 2 = 32
	return 0;
}
-----------------------------------------------------------------------
#include <iostream>
#include <string>
using namespace std;

string swapping(string msg)
{
	string result = "";
	for (int i = 0; i < msg.length(); i++) {
		// √÷›‰« ›Õ’ «·‹ h «·’€Ì—… √Ì÷« ·ÌﬂÊ‰ «·ﬂÊœ √‘„·
		if (msg[i] == 'H' || msg[i] == 'h') {
			result += msg[i];
		}
		else if (isupper(msg[i])) {
			result += (tolower(msg[i]));
		}
		else if (islower(msg[i])) {
			result += (toupper(msg[i]));
		}
		else {
			result += msg[i];
		}
	}
	return result;
}

int main()
{
	// «·¬‰ ”Ìÿ»⁄: hERO oF tHE proGRAMMING
	cout << swapping("hero Of THe PROgramming") << "\n";
	return 0;
}
*/








#include <string>

std::string reverseString(const std::string& str)
{
	string reversed = " ";
	for (int i = str.length() - 1; i >= 0; i--)
	{
		reversed += str[i];
	}
	return reversed;
}