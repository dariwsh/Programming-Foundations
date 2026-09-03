/* التكليف 01
#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
    int age ;
    int period ;
    cout << "Enter Your Age: ";
    cin >> age ;
    cout << "Enter Period To Subtract From Your Age: ";
    cin >> period ;
  // Do Not Edit The Next 2 Lines
  cout << "My Age Is: " << age << "\n";
  cout << period << " Years Ago My Age Was: " << age - period << "\n";
  

  // Add The Third Line Below
    cout <<  period << " Years From Now My Age Will Be: " << age + period << "\n";

  return 0;
}
-------------------
التكليف 02

#include <iostream>
using namespace std;

int main()
{
  // Write Your One Line Code Here
    int a, b, c;
  // Do Not Edit Below
  a = 10, b = 20, c = 70;
  cout << "Sum Of All Number Is: " << a + b + c;
  return 0;
}


*/
/*  التكليف 03
 Not Valid
 Good Practice
Bad Practice 

  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ not-Valid | Bad Practice ]
  __name      [ Valid | Bad Practice ]
  name@name   [ not-Valid | Bad Practice ]
  name10name  [ Valid | Good Practice ]
  name!name   [ not-Valid | Bad Practice ]
  first_NAME  [ Valid | Bad Practice ]
  first_name   [ Valid | Bad Practice ]
  firstName    [ Valid | Bad Practice ]
  first name  [ not-Valid | Bad Practice ]
  fn           [ Valid | Bad Practice ]
  public        [ not-Valid | Bad Practice ]
  Public       [ not-Valid | Bad Practice ]
  🧾 الآن التقييم لكل اسم:
الاسم	صالح؟	الممارسة
name	✅ Valid	👍 Good Practice
NAME	✅ Valid	👎 Bad Practice (الأسماء الكبيرة للحروف تُستخدم عادة للثوابت)
1name	❌ Not Valid	👎 Bad Practice (يبدأ برقم)
__name	✅ Valid	👎 Bad Practice (بدايته بـ "__" تُ reserved للنظام)
name@name	❌ Not Valid	👎 Bad Practice (فيه رمز غير مسموح "@")
name10name	✅ Valid	👍 Good Practice (فيه رقم لكن في المنتصف، عادي)
name!name	❌ Not Valid	👎 Bad Practice (رمز "!")
first_NAME	✅ Valid	👎 Bad Practice (مزج أحرف كبيرة وصغيرة مش مثالي)
first_name	✅ Valid	👍 Good Practice (أسلوب snake_case ممتاز)
firstName	✅ Valid	👍 Good Practice (أسلوب camelCase ممتاز)
first name	❌ Not Valid	👎 Bad Practice (فيه مسافة)
fn	✅ Valid	👎 Bad Practice (صالح لكن غير معبر)
public	❌ Not Valid	👎 Bad Practice (كلمة محجوزة)
Public	✅ Valid	👎 Bad Practice (صالح تقنيًا لكن يبدأ بحرف كبير وأقرب للاسم العام للكلاس)












---------------
التكليف 04
#include <iostream>
using namespace std;

int main()
{
  // Write my_text Variable Content Here
  string my_text = "ا===========\n== Elzero ==\n============\n";

  // Do Not Edit Below
  cout << my_text;
  return 0;
}

التكليف 05
#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit Below
  int a, b, c = 100;

  // Add Your Code Here
    a = b = c;

  // Do Not Edit Below
  cout << a + b + c; // 300
  return 0;
}
/* التكليف 06

#include <iostream>
using namespace std;

int main()
{
  // Do Not Edit Below
  int a = 210, b = -50, c = -40;

  // Write Your cout Code Here
    cout << a - (c +b) << "\n";
  return 0;
}


/* التكليف 07
#include <iostream>
using namespace std;

int num = 50;
int read()
{
    int num = 100;
  
  cout << num;
  return 0;
}

int play()
{
  int num = 200;
  read();
  return 0;
}

int main()
{
  play();
  return 0;
}
  test 8 
  #include <iostream>
using namespace std;
int main()
{
  // Edit Here To Fix The Error
   int current_year;
   int birth_year;

  // Do Not Edit Here
  current_year = 2022;
  birth_year = 1982;
  int age_in_years = current_year - birth_year;
  cout << age_in_years;
  return 0;
}


/* التكليف 09
#include <iostream>
using namespace std;

int main()
{
  // Write Your Code Here
    int num;
    cout << "Enter A Number: ";
    cin >> num ;
  // Num 10
  cout <<num * num;
  // Needed Output 100 [10 * 10]
  return 0;
}
/* التكليف 10
#include <iostream>
using namespace std;

int main()
{
    
  // Write Your Code Here
    int num1, num2;
    cout << "Enter Number One: ";
    cin >> num1 ;
    cout << "Enter Number Two: ";
    cin >> num2 ;

  // Number One => 10
  // Number Two => 100
    cout <<num1 * num2;

  // Needed Output 1000 [10 * 100]
  return 0;
}

/* التكليف 11
#include <iostream>
using namespace std;

int main()
{
  cout << "Hello Hello Elzero";
  cout << "Web Schooll";
  cout << "I Love Programming";
  cout << "Too Much";
  cout << "Specially C++";

  
  return 0;
}
// Needed Output
*/


// Needed Output
// "Hello Elzero Web School I Love Programming Too Much Specially C++"