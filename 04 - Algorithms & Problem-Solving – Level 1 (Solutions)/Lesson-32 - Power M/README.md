[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Power M (N raised to the M-th power)

This program generalizes the power concept — instead of computing fixed powers (2, 3, 4), it asks the user for both the base (Number) and the exponent (M), then computes Number^M using a loop. It handles the special case of M = 0 where any number to the power of 0 equals 1. This introduces loop-based exponentiation with a variable exponent.

```cpp
/*
* Write a program to ask the user to enter:
•
Number
•
M
Then Print the Number^M
*/
#include <iostream>
#include <string >
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter nember?\n";
	cin >> Number;
	return Number;
 }
int ReadPower()
{
	int Number;
	cout << "Please enter Power?\n";
	cin >> Number;
	return Number;
}
int PowerOfM(int Number, int M)
{
	if (M == 0)
	{
		return 1;
	}

	int P = 1;
	for (int i = 1; i <= M; i++)
	{
		P = P * Number;
	}
	return P;


}

int main()
{
	cout << endl << "Result = " << PowerOfM(ReadNumber(), ReadPower());
}
```

### How It Works

`ReadNumber()` gets the base and `ReadPower()` gets the exponent. The `PowerOfM` function first checks if the exponent M is 0 — if so, it immediately returns 1 (mathematical rule: any nonzero number to the power of 0 is 1). Otherwise, it uses a `for` loop that runs M times, each time multiplying the accumulator `P` by the base `Number`. This generalizes the manual multiplication from Lesson 31 into a loop-driven approach that works for any exponent.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Generalized exponentiation** | Computing N^M for any M using a loop |
| **Special case handling** | Early return when M = 0 |
| **Loop-based multiplication** | Multiplying the base M times in a `for` loop |
| **Two inputs** | Reading both base and exponent separately |
| **Accumulator pattern** | `P = P * Number` builds the product iteratively |

### Quiz

<details>
<summary>1. What is 5⁰ (any number to the power of 0)?</summary>

5⁰ = 1. The special case in the code handles this by returning 1 immediately.
</details>

<details>
<summary>2. How many times does the <code>for</code> loop execute when M = 3?</summary>

The loop runs 3 times (i = 1, 2, 3), multiplying the base three times.
</details>

<details>
<summary>3. What would happen if M is negative?</summary>

The loop condition `i <= M` would be immediately false (since 1 is not ≤ a negative number), so it returns 1. Mathematically, negative exponents require division.
</details>

<details>
<summary>4. What is 2¹⁰ using this method?</summary>

2 multiplied by itself 10 times = 1024.
</details>

### Concept Map

```mermaid
mindmap
  root((Power M))
    Input
      ReadNumber() → Base
      ReadPower() → Exponent M
    Calculation
      PowerOfM(Number, M)
      Special case: M == 0 → return 1
      Loop: multiply Number M times
      for (i = 1 to M) → P *= Number
    Output
      Result = P
    Concepts
      Generalized exponentiation
      Loop-based multiplication
      Special case handling
      Two-parameter function
```
