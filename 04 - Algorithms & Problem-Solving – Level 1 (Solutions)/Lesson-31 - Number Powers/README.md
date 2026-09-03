[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Number Powers (N², N³, N⁴)

This program takes a single integer from the user and computes its powers up to the fourth power: N², N³, and N⁴. It demonstrates simple exponentiation through repeated multiplication rather than using the `pow()` function. This is a straightforward example of computing powers manually.

```cpp
/*/ Write a program to ask the user to enter:
•
Number
Then Print the Number ^ 2, Number ^ 3, Number ^ 4*/
#include <iostream>
using namespace std;
int readNumber()
{
    int Number;
    cout << "Please enter number? \n";
    cin >> Number;
    return Number;
}

void PowerOf2_3_4(int Number)
{
    int a, b, c;
    a = Number * Number;
    b = Number * Number * Number;
    c = Number * Number *Number *Number;
    cout << a << " " << b << " " << c << endl;
}
int main()
{
    PowerOf2_3_4(readNumber());
    return 0;
}
```

### How It Works

The function `PowerOf2_3_4` receives a number and computes three powers via direct multiplication: `Number × Number` for N², `Number × Number × Number` for N³, and `Number × Number × Number × Number` for N⁴. The results are stored in three integer variables `a`, `b`, and `c`, then printed space-separated. This manual approach makes the concept of exponentiation explicit — powering a number means multiplying it by itself repeatedly.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Manual exponentiation** | Computing powers via repeated multiplication instead of `pow()` |
| **Multiple outputs** | Storing several computed values and displaying them together |
| **Integer overflow awareness** | Large inputs could exceed `int` range for higher powers |
| **Sequential computation** | Computing related values in a single function |
| **Inline output** | Printing multiple values in one `cout` statement separated by spaces |

### Quiz

<details>
<summary>1. How would you compute N⁵ using this approach?</summary>

`Number * Number * Number * Number * Number` — multiplying the number by itself 5 times.
</details>

<details>
<summary>2. What is 3², 3³, and 3⁴?</summary>

3² = 9, 3³ = 27, 3⁴ = 81.
</details>

<details>
<summary>3. Why might the program produce incorrect results for very large numbers?</summary>

Because `int` has a limited range. For large inputs like 1000, 1000⁴ = 10¹² which exceeds the maximum `int` value, causing integer overflow.
</details>

<details>
<summary>4. What does <code>cout << a << " " << b << " " << c << endl;</code> print?</summary>

It prints `a`, `b`, and `c` separated by spaces, followed by a newline.
</details>

### Concept Map

```mermaid
mindmap
  root((Number Powers))
    Input
      readNumber()
      User enters Number
    Computation
      PowerOf2_3_4
      a = N × N
      b = N × N × N
      c = N × N × N × N
    Output
      cout with spaces
      a b c on one line
    Concepts
      Manual multiplication
      Integer powers
      Overflow awareness
      Multiple outputs
```
