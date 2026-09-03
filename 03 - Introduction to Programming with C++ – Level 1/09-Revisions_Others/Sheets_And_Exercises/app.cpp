// test your 20
// cout << "Hello, World!" << endl;
// cout << "=============" << endl;
// // print ASCII value of characters
// char name = 'Z';
// cout << int(name) << endl;
// cout << int ('a') << endl;
// cout << int ('A') << endl;
// cout << int ('0') << endl;
// cout << int ('@') << endl;
// // print characters from ASCII values
// cout << char(65) << endl;
// cout << char(97) << endl;
// cout << char(48) << endl;
// cout << char(64) << endl;

// // input character and print its ASCII value
// char ch;
// cout << "Enter a character: ";
// cin >> ch;
// cout << "ASCII value of " << ch << "is " << int(ch) <<"\n";

/*
#include <iostream>
using namespace std;
void printValue()
{
  cout << "The value is: " << endl;
}
int main()
{
  cout << "Hello, World!" << endl;
  cout<< "==============" << endl;
printValue();
  bool num_one =   100;
  bool num_two  =  -100;
  bool three =    0;
  cout << num_one << endl;
  cout << num_two << endl;
  cout << three << endl;

return 0;
}
assignment 1
// Example
false // bool => Boolean

'a' flase
'9' true
9 flase
true boolen
100 true

-10 true
0 boolen
false boolen
10.9 true

assignment 2
  cout << "==============" << endl;
  double salary = 5000.98;
  cout << sizeof(salary) << " biytes" << endl;
  // 8 Bytes
  cout << salary * 8 << " biytes" << endl;
  cout << salary * 128 << " biytes" << endl;
  // 64 Bits

  // cout << sizeof(long long int(salary)) << endl;
  // assignment 3

  // maximum and minimum value of integer
  cout << "Maximum Long Long Integer Number Is => " << LONG_MAX << "\n";
  cout << "Maximum Long Long Integer Number Is => " << LONG_MIN << "\n";
  cout << "Maximu Short INteger Number Is = > " << SHRT_MAX << "\n";
  cout << "Maximu Short INteger Number Is = > " << SHRT_MIN << "\n";
 // assignment 4
  // Edit Line To Make 8 Become 4
cout << sizeof(int(10.5 + 5 + 20.5 + 10)) << "\n"; // 8
  return 0;
التكليف 05
لديك 4 متغيرات نوعهم char ونريد طباعة ال ASCII Value الخاصة بهم
نحتاج لأن تكون الرسالة كما في المثال ولا تكتب القيمة بيدك وإستخدم المتغيرات
 char a = '~';
char b = '&';
char c = '%';
char d = 'A';

cout << "ASCII Value of" <<a << " IS " << int(a) <<endl;
cout << "ASCII Value of" <<b << " IS " << int(b) <<endl;
cout << "ASCII Value of" <<c << " IS " << int(c) <<endl;
cout << "ASCII Value of" <<d << " IS " << int(d) <<endl;

التكليف 06
int a = 69;
int b = 108;
int c = 122;
int d = 101;
int e = 114;
int f = 111;

// Output Needed
cout << "Character Of This ASCII Value " << a << " Is " << char(a) << endl;
cout << "Character Of This ASCII Value " << b << " Is " << char(b) << endl;
cout << "Character Of This ASCII Value " << c << " Is " << char(c) << endl;
cout << "Character Of This ASCII Value " << d << " Is " << char(d) << endl;
cout << "Character Of This ASCII Value " << e << " Is " << char(e) << endl;
cout << "Character Of This ASCII Value " << f << " Is " << char(f)
  << endl;

// Output Needed In Last Line
cout << char(a);
cout << char(b) ;
cout << char(c) ;
cout << char(d) ;
cout << char(e) ;
cout << char(f) ;
  return 0;
  assignment 07
  int a = 1;
int b = 13;
int c = 17;
int d = 70;

// Output Needed
cout <<char (d-a) ;
cout <<char (d+c) ;
cout <<char (d+b) ;
// EWS

// assiment 8
  int a = 100;
  int b = 15001500;
  // double c = 100.54565746;
  long double x = 100.54565746;
  cout << sizeof(short(a)) << " Bytes" << endl;
  cout << sizeof(double(b)) << " Bytes" << endl;
  cout << sizeof(x) << " Bytes" << endl;
  // output
  2 Bytes
   8 Bytes
  
   16 Bytes

التكليف 09
لديك بعض المتغيرات التي تحتوي على أرقام
نريد التعديل على الأخطاء لتظهر قيم المتغيرات كما في المثال
إذا كان هناك شيء لا نحتاج لكتابته قم بحذف

 // Edit Anything Except Values
  unsigned int a = 100;
  signed int b = -100;
  short c = 100;
  float d = 500.55;

  // Do Not Edit
  cout << a << "\n"; // 100
  cout << b << "\n"; // -100
  cout << c << "\n"; // 100
  cout << d << "\n"; // 500.55

  التكليف 10
لدينا إسم مستعار لل Type ونوعه long long int
نريد أن نقوم بإنشاء الإسم المستعار بطريقتين
إذا أردت بعض التحديات هناك طريقة ثالثة يمكنك البحث عنها :)
 // Add Type Alias Here

// Do Not Edit
long long int num = 150050005; // This Is Long Long Int
cout << num << "\n"; // 150050005
التكليف 11
لديك مجموعة من المتغيرات يجب عدم التعديل عليهم
نريد أن تخرج لنا النتيجة رقم 200 ونوعه Integer
يجب عليك إستخدام ال Type Casting لتقوم بعمل اللازم
  // Do Not Edit Here
short int a = 100;
float b = 98.5f;
double c = 1.7;

// Edit This Line And Use Type Casting To Get The Output
cout <<(int(a + b + c )) << "\n"; // 200
cout <<(short(a + b + c )) << "\n"; // 200
   */
#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
  // Do Not Edit Here
short a = 1000;
int b = 10000;
long double c = 5.560000505012;

// Change ??? To Something Else To Get The Output
cout << (short(a)) - (short(b)) << "\n"; // 12
// cout << ??? + ??? << "\n"; // 20
// cout << ??? * ??? << "\n"; // 32
// cout << ??? * ??? << "\n"; // 5000
// cout << char(??? * ???) << "\n"; // P
  return 0;
}
