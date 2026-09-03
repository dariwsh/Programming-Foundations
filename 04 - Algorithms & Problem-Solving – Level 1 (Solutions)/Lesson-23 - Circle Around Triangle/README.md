[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Circle Area Around a Triangle (Circumcircle)

This program calculates the area of a circle that passes through all three vertices of any triangle (the circumcircle). It introduces Heron's formula for the area of a triangle and the formula for the circumradius. The program reads three side lengths (A, B, C) and computes the circle's area using `Area = π × T²` where `T` is the circumradius.

```cpp
/*
Write a program to calculate circle area circle described around an arbitrary triangle,
then print it on the screen.
*/
#include <iostream>
using namespace std;
void ReadCircleArea(float& A, float& B, float& C)
{
	cout << "****************************\n";
	cout << "Please enter A ?\n";
	cin >> A;
	cout << "Please enter B ?\n";
	cin >> B;
	cout << "Please enter C?\n";
	cin >> C;
	cout << "****************************\n";
}

float CalculateCircleArea(float A, float B, float C)
{
	const float pi = 3.14159265359;
	float p = (A + B + C) / 2;
	float T =   (A * B * C) / ( 4 * sqrt (p* (p - A) * (p - B) * (p - C) ) );
	float Area = pi * pow(T, 2);
	return Area;
}

void PrintResults(float Area)
{
	cout << "The Area = " << Area;
}
int main()
{
	float A, B, C;
	ReadCircleArea(A, B, C);
	PrintResults(CalculateCircleArea(A, B, C));
	return 0;
}
```

### How It Works

The program reads three side lengths using pass-by-reference. The calculation involves finding the semi-perimeter `p = (A+B+C)/2`, then computing the triangle's area using Heron's formula inside the denominator. The circumradius `T` is given by `(a·b·c) / (4 × triangle area)`. Squaring `T` and multiplying by π gives the area of the circumscribed circle. The `sqrt()` function from `<cmath>` is used for the square root.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Heron's formula** | Area of triangle = √[p(p-a)(p-b)(p-c)] where p = semi-perimeter |
| **Circumradius formula** | R = (a·b·c) / (4 × triangle area) |
| **Nested sqrt()** | Using `sqrt()` to compute square roots for Heron's formula |
| **Three inputs** | Extending pass-by-reference to three variables |
| **Intermediate variables** | Storing `p` and `T` to simplify the complex expression |

### Quiz

<details>
<summary>1. What is a circumcircle?</summary>

A circumcircle is a circle that passes through all three vertices of a triangle.
</details>

<details>
<summary>2. What does Heron's formula compute?</summary>

Heron's formula computes the area of a triangle given its three side lengths, using the semi-perimeter.
</details>

<details>
<summary>3. Why is the semi-perimeter <code>p = (A+B+C)/2</code> calculated first?</summary>

It appears multiple times in the formula (p, p-A, p-B, p-C), so computing it once improves efficiency and readability.
</details>

<details>
<summary>4. What library provides the <code>sqrt()</code> function?</summary>

The `<cmath>` library provides `sqrt()`.
</details>

### Concept Map

```mermaid
mindmap
  root((Circumcircle Area))
    Triangle Geometry
      Three side lengths A, B, C
      Semi-perimeter p
      Heron's formula for area
    Circumradius T
      T = (A×B×C) / (4 × triangle area)
      Uses sqrt()
    Circle Area
      Area = π × T²
      pow(T, 2)
    Input / Output
      ReadCircleArea(&A, &B, &C)
      PrintResults
    Key Concepts
      Heron's formula
      Circumradius
      sqrt() function
      Intermediate variables
```
