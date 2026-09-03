[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Circle Area via Circumference

This program calculates the area of a circle when given its circumference instead of the diameter or radius. The relationship between circumference (L) and area (A) is derived from the formulas `C = 2πr` and `A = πr²`, leading to `Area = L² / (4π)`. This is a practical application of algebraic rearrangement.

```cpp
// Write a program to calculate circle area along the circumference, then print it on the screen.
#include <iostream>
#include <string>
#include <cMath>
using namespace std;

float ReadAreaLong()
{
	float L;
	cout << "Please Enter circle area along the circumference ? \n";
	cin >> L;
	return L;
}
 
float CalculateCircleAreaAlong( float L)
{
	const float pi = 3.14159265359;
	float Area = pow(L, 2) / (4 * pi);
	return Area;
}

void PrintResult(float Area)
{
	cout << "The circle area along the circumference is  " << Area << endl;
}

int main()
{
	PrintResult(CalculateCircleAreaAlong(ReadAreaLong()));
	return 0;
}
```

### How It Works

The user enters the circumference of the circle. The program then squares it using `pow(L, 2)` and divides by `4 × π`. This formula comes from solving for `r` in `C = 2πr` (so `r = C / 2π`) and substituting into `A = πr²`, which simplifies to `A = C² / 4π`. Using a `const float` for Pi ensures the value cannot be accidentally modified. This is another example of the functional pipeline pattern: input → calculate → output.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Algebraic rearrangement** | Deriving one formula from another by solving equations |
| **const keyword** | Declaring Pi as `const float` to prevent modification |
| **Inverse relationships** | Using circumference (derived from radius) to find area |
| **pow() for squaring** | Using `pow(L, 2)` to compute L × L |
| **Formula derivation** | `A = C² / 4π` comes from combining `C = 2πr` and `A = πr²` |

### Quiz

<details>
<summary>1. How is the formula <code>Area = L² / (4π)</code> derived?</summary>

From `C = 2πr` we get `r = C / 2π`. Substituting into `A = πr²` gives `A = π × (C / 2π)² = C² / 4π`.
</details>

<details>
<summary>2. Why is Pi declared as <code>const float</code>?</summary>

Using `const` ensures the value of Pi cannot be accidentally changed elsewhere in the code, preventing bugs.
</details>

<details>
<summary>3. What does the function <code>ReadAreaLong()</code> actually read from the user?</summary>

It reads the circumference of the circle (the distance around it).
</details>

<details>
<summary>4. If the circumference is 10, what is the approximate area?</summary>

Area = 10² / (4 × 3.14159) ≈ 100 / 12.566 ≈ 7.96 square units.
</details>

### Concept Map

```mermaid
mindmap
  root((Circle Area via Circumference))
    Derivation
      C = 2πr → r = C / 2π
      A = πr²
      A = C² / 4π
    User Input
      ReadAreaLong()
      Circumference L
    Calculation
      CalculateCircleAreaAlong
      pow(L, 2)
      const float pi
      Formula: L² / 4π
    Output
      PrintResult
    Key Concepts
      Algebraic manipulation
      const qualifier
      Inverse formulas
```
