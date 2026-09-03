[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Sum of Odd Numbers from 1 to N

This program calculates the sum of all odd numbers between 1 and a user-specified number N. It introduces the `enum` keyword for creating custom data types and demonstrates conditional accumulation inside all three loop types. The program checks each number's parity using the modulo operator and adds only odd numbers to the running total.

```cpp
// Write a program to Sum odd numbers from 1 to N.
#include <iostream>
#include <string >
using namespace std;
enum enOddOrEven {Odd = 1, Even=2};

int ReadNumber()
{
    int Number;
    cout << "Please enter a nuber? \n";
    cin >> Number;
    return Number;
}

enOddOrEven CheckOddOrEven(int Number)
{
    if (Number % 2 != 0)
        return enOddOrEven::Odd;
    else
        return enOddOrEven::Even;
}

int SumOddNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using For Statement:\n";
    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
    }
    return Sum;

}

int SumOddNumbersFrom1toN_UsingWhile(int N)
{
    int Sum = 0;
    int Counter = 1;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using While Statement:\n";
        while ( Counter <= N )
        {

        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
        Counter++;
    }
    return Sum;

}

int SumOddNumbersFrom1toN_UsingDoWhile(int N)
{
    int Sum = 0;
    int Counter = 1;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using Do While Statement:\n";
    do
    {

        if (CheckOddOrEven(Counter) == enOddOrEven::Odd)
        {
            Sum += Counter;
        }
        Counter++;
    } while (Counter <= N);
    return Sum;

}
int main()
{
    int N = ReadNumber();
    cout << SumOddNumbersFrom1toN_UsingFor(N) << endl;
    cout << SumOddNumbersFrom1toN_UsingWhile(N) << endl;
    cout << SumOddNumbersFrom1toN_UsingDoWhile(N) << endl;
}
```

### How It Works

An `enum` named `enOddOrEven` is defined with two values: `Odd = 1` and `Even = 2`. The `CheckOddOrEven()` function uses the modulo operator `%` — if `Number % 2 != 0`, the number is odd. Each sum function loops from 1 to N, calls `CheckOddOrEven()` on each number, and if it returns `Odd`, adds it to the running total using `Sum += Counter`. This demonstrates conditional accumulation: a pattern where values are selectively added to a sum based on a condition.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **enum** | Creating a custom type with named constants (`Odd`, `Even`) |
| **Modulo operator (%)** | `Number % 2` gives the remainder when divided by 2 |
| **Scoped enum access** | Using `enOddOrEven::Odd` to access enum values |
| **Conditional accumulation** | Adding to a sum only when a condition is met |
| **Compound assignment (+=)** | `Sum += Counter` is short for `Sum = Sum + Counter` |

### Quiz

<details>
<summary>1. What does <code>Number % 2</code> return if the number is odd?</summary>

It returns 1 (since an odd number divided by 2 has remainder 1).
</details>

<details>
<summary>2. Why use an <code>enum</code> instead of just comparing with <code>if (Number % 2 != 0)</code> directly?</summary>

An `enum` makes the code more readable and self-documenting. It also provides type safety and a clear set of possible return values.
</details>

<details>
<summary>3. What is the sum of odd numbers from 1 to 5?</summary>

1 + 3 + 5 = 9.
</details>

<details>
<summary>4. What does <code>Sum += Counter</code> do?</summary>

It adds the value of `Counter` to `Sum` and stores the result back in `Sum`.
</details>

### Concept Map

```mermaid
mindmap
  root((Sum Odd Numbers))
    Input
      ReadNumber()
      N
    Enum
      enOddOrEven
      Odd = 1, Even = 2
    Parity Check
      CheckOddOrEven
      Modulo operator %
      Number % 2 != 0
    Accumulation
      For loop
      While loop
      Do-While loop
      if condition → Sum += Counter
    Key Concepts
      enum types
      Modulo operator
      Conditional sum
      Compound += operator
```
