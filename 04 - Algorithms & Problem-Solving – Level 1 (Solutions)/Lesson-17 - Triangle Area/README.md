[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Lesson 17: Triangle Area

This program calculates the area of a triangle using the formula `Area = (base / 2) * height` or equivalently `Area = 0.5 * base * height`. The user enters the base (`a`) and height (`h`), and the program computes and displays the area.

The formula uses floating-point arithmetic to ensure precision. If integer division were used without care, `(a/2)` could truncate for integer types, but since `a` is `float`, the division produces a correct decimal result. This is a straightforward geometric application that reinforces modular programming with floats.

```cpp
//Write a program to calculate triangle area then print it on the screen.

#include <iostream>
#include <cmath>

using namespace std;
void ReadNubmers(float& a, float& h)
{ 
	cout << "Pleas enter num 1" << endl;
	cin >> a;
	cout << "Please enter num 2" << endl;
	cin >> h;
}
float calculateTriangleArea(float a, float h)
{
	float Area = (a/ 2) * h;
	return Area;
}
void PrintResults(float ARea)
{
	cout << "The Area is : " << ARea << endl;
}
int main()
{
	float a, h;
	ReadNubmers(a, h);
	PrintResults(calculateTriangleArea(a, h));
	return 0;
}
```

<details>
<summary>Interactive Quiz</summary>

**Q1:** What is the formula for triangle area in this program?
- [ ] a * h
- [x] (a / 2) * h
- [ ] a + h
- [ ] a * a * h

**Q2:** If base = 10 and height = 4, what is the area?
- [ ] 40
- [ ] 14
- [x] 20
- [ ] 10

**Q3:** Why is `a` declared as `float`?
- [ ] To save memory
- [x] To allow decimal base values
- [ ] To make the code faster
- [ ] To avoid the `cmath` library

</details>

```mermaid
mindmap
  root((Triangle Area))
    Input
      Base (a)
      Height (h)
      Float type
    Formula
      Area = (base / 2) * height
      Half-base times height
    Output
      Printed area
    Concepts
      Geometry formulas
      Float arithmetic
      Modular design
      Read-calculate-print pattern
```
