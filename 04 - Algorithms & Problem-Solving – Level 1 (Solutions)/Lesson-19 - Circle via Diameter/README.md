[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Circle Area via Diameter

This program calculates the area of a circle when the user provides the diameter. It introduces the use of functions, `pow()` for exponentiation, and the constant Pi. The program reads a diameter value from the user, plugs it into the formula `Area = (diameter² × π) / 4`, and displays the result.

```cpp
// Write a program to calculate circle area through diameter, then print it on the screen.

#include <iostream>
#include <cmath>
#include <string>
using namespace std;
float ReadNumber()
{
	float D;
	cout << "Pleas Enter Area" << endl;
	cin >> D;
	return D;

}
float CircleArea(float D)
{
	float pi = 3.14;
	float Area = (pow(D, 2) *pi ) / 4;
	return Area;
}
void PrintResults(float Area)
{
	cout << "The Area is : " << Area << endl;
}
int main()
{
	PrintResults(CircleArea(ReadNumber()));
	return 0;
}
```

### How It Works

The program is structured into three clear stages. First, `ReadNumber()` prompts the user and captures the diameter. That value is passed to `CircleArea()`, which computes the area using `pow(D, 2)` to square the diameter, multiplies by Pi (3.14), and divides by 4. Finally, `PrintResults()` takes the computed area and outputs it to the console. The `main()` function chains these calls together in a single line, demonstrating functional composition.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Functions** | Breaking code into reusable blocks (`ReadNumber`, `CircleArea`, `PrintResults`) |
| **cmath library** | Using `pow()` to raise a number to a power |
| **Mathematical constants** | Using Pi (3.14) as a literal value for circle calculations |
| **Functional composition** | Nesting function calls: `PrintResults(CircleArea(ReadNumber()))` |
| **Float data type** | Using decimals for precise area calculations |

### Quiz

<details>
<summary>1. What library must be included to use the <code>pow()</code> function?</summary>

The `<cmath>` library must be included.
</details>

<details>
<summary>2. What is the formula used to calculate circle area from the diameter?</summary>

Area = (diameter² × π) / 4
</details>

<details>
<summary>3. Why does the program use <code>float</code> instead of <code>int</code> for the area?</summary>

The area of a circle is typically a decimal value, so `float` provides the necessary precision for fractional results.
</details>

<details>
<summary>4. What does <code>pow(D, 2)</code> do?</summary>

It calculates D raised to the power of 2, which is the same as D × D.
</details>

### Concept Map

```mermaid
mindmap
  root((Circle Area via Diameter))
    User Input
      ReadNumber()
      cin >> D
    Calculation
      CircleArea(float D)
      pow(D, 2)
      Pi constant
      Formula: D² × π / 4
    Output
      PrintResults(float Area)
      cout
    Key Concepts
      Functions
      cmath library
      Float precision
      Nested calls
```
