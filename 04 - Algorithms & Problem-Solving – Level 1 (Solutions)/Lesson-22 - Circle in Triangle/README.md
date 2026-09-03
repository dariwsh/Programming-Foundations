[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Circle Area Inscribed in an Isosceles Triangle

This program calculates the area of a circle inscribed inside an isosceles triangle. This introduces a more complex geometric formula and demonstrates pass-by-reference to read multiple input values. The formula involves the two equal sides (a) and the base (b) of the triangle: `Area = π × (b² / 4) × ((2a - b) / (2a + b))`.

```cpp
/* Write a program to calculate circle area Inscribed in an Isosceles Triangle,
then print it on the screen */
#include <iostream>
#include <string>
#include <cMath>
using namespace std;

void ReadAreaInscribed(float &a , float &b )
{
	cout << "********21**********\n";
	cout << "Please Enter A? \n";
	cin >> a;
	cout << "Please Enter A? \n";
	cin >> b;
	cout << "********21**********\n";
}

float CalculatecircleAreaInscribed(float a, float b)
{
	const float pi = 3.14159265359;
	float Area = pi * (pow(b,2) / 4)  * ((2 * a - b) / (2 * a + b));
	return Area;
}

void PrintResult(float Area)
{
	cout << "The circle area =  " << Area << endl;
}

int main()
{
	float a, b;
	ReadAreaInscribed(a, b);
	PrintResult(CalculatecircleAreaInscribed(a, b));
	return 0;
}
```

### How It Works

The function `ReadAreaInscribed` uses **pass-by-reference** (`float &a, float &b`) to modify the caller's variables directly. This is necessary because the function needs to return two values — the two sides of the triangle. Inside `main`, variables `a` and `b` are declared, passed to the read function (which fills them), and then passed to the calculation function. The area formula uses geometry specific to an isosceles triangle's incircle, combining powers, multiplication, and division of algebraic expressions.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Pass-by-reference** | Using `&` in parameters to modify variables from the calling function |
| **Multiple input values** | Reading more than one value from the user in a single function |
| **Complex formulas** | Combining multiple mathematical operations in one expression |
| **Isosceles triangle incircle** | Geometric relationship between triangle sides and inscribed circle radius |
| **Expression grouping** | Using parentheses to control evaluation order in complex formulas |

### Quiz

<details>
<summary>1. What is the difference between pass-by-reference and pass-by-value?</summary>

Pass-by-reference (`float &a`) allows the function to modify the original variable, while pass-by-value (`float a`) works on a copy that is discarded when the function ends.
</details>

<details>
<summary>2. Why does <code>ReadAreaInscribed</code> use references instead of returning a value?</summary>

Because the function needs to output two values (a and b), but a function can only return one value directly.
</details>

<details>
<summary>3. In the formula <code>π × (b² / 4) × ((2a - b) / (2a + b))</code>, what does <code>((2a - b) / (2a + b))</code> represent?</summary>

It is a geometric ratio that relates the incircle radius to the triangle's side lengths for an isosceles triangle.
</details>

<details>
<summary>4. What would happen if <code>2a + b</code> equals zero?</summary>

Division by zero would occur, causing undefined behavior or a runtime error. This is not possible with positive side lengths.
</details>

### Concept Map

```mermaid
mindmap
  root((Circle Inscribed in Isosceles Triangle))
    Geometry
      Isosceles triangle
      Two equal sides a
      Base b
      Incircle
    Input
      Pass-by-reference
      ReadAreaInscribed(&a, &b)
      Two values from one function
    Formula
      pi × (b² / 4) × ((2a - b) / (2a + b))
      Expression grouping
    Output
      PrintResult
    Key Concepts
      Reference parameters
      Multiple return values via refs
      Complex arithmetic expressions
```
