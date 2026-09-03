[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Circle Area Inscribed in a Square

This program computes the area of a circle that fits perfectly inside a square (inscribed circle). When a circle is inscribed in a square, the diameter of the circle equals the side length of the square. The program uses a more precise value of Pi (3.14159265359) and the formula `Area = (side² × π) / 4`.

```cpp
//Write a program to calculate Circle area inscribed in a square, then print it on the screen.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadNumber()
{
	float A;
	cout << "Pleas Enter Area" << endl;
	cin >> A;
	return A;

}
float AreaInscribedInaSquare(float A)
{
	float pi = 3.14159265359;
	float Area = (pow(A,2) * pi) / 4;
	return Area;
}
void PrintResults(float Area)
{
	cout << "\nThe Area is : " << Area << endl;
}
int main()
{
	PrintResults(AreaInscribedInaSquare(ReadNumber()));
	return 0;
}
```

### How It Works

The program reads the side length of the square from the user. Since the inscribed circle's diameter equals the square's side, the area is calculated with the same geometric formula as the previous lesson: `(side² × π) / 4`. Note the use of a high-precision Pi constant (3.14159265359) instead of the approximate 3.14 — this produces more accurate results. The functional pipeline pattern (`PrintResults(AreaInscribedInaSquare(ReadNumber()))`) is used again to keep each function focused on a single task.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Inscribed shapes** | A circle inscribed in a square touches all four sides; diameter = side length |
| **Precision constants** | Using a more precise Pi value for better accuracy |
| **Functional design** | Each function handles one responsibility (input, calculation, output) |
| **pow() revisited** | Applying exponentiation to square the side length |
| **Nested function calls** | Passing the result of one function directly into another |

### Quiz

<details>
<summary>1. Why does the area formula for an inscribed circle use the same math as the diameter-based formula?</summary>

Because the side of the square equals the circle's diameter, so `(side² × π) / 4` is mathematically identical to `(diameter² × π) / 4`.
</details>

<details>
<summary>2. What is the difference between this program and Lesson 19's program?</summary>

This program uses a more precise Pi constant (3.14159265359) and conceptually deals with an inscribed circle in a square rather than a standalone diameter input.
</details>

<details>
<summary>3. What would happen if the user enters <code>0</code> as the side length?</summary>

The area would be 0, since `(0² × π) / 4 = 0`.
</details>

<details>
<summary>4. What does the nested call <code>PrintResults(AreaInscribedInaSquare(ReadNumber()))</code> accomplish in one line?</summary>

It reads input, computes the area, and passes the result directly to the print function — all without intermediate variables.
</details>

### Concept Map

```mermaid
mindmap
  root((Circle Inscribed in Square))
    Geometry Concept
      Circle touches square sides
      Diameter = Square side
    User Input
      ReadNumber()
      Side length A
    Calculation
      AreaInscribedInaSquare
      pow(A, 2)
      High-precision Pi
      Formula: A² × π / 4
    Output
      PrintResults
    Key Ideas
      Inscribed shapes
      Precision constants
      Functional composition
```
