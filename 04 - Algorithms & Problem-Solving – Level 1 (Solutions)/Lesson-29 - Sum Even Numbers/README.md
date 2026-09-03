[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Sum of Even Numbers from 1 to N

This program calculates the sum of all even numbers between 1 and N. It mirrors the odd-sum program but checks for evenness instead. The core logic is identical — reuse the same `enum` and parity-checking function — but the condition is inverted to select even numbers (`CheckOddOrEven(Counter) == enOddOrEven::Even`).

```cpp
//Write a program to Sum even numbers from 1 to N.

#include <iostream>
#include <string >
using namespace std;
enum enOddOrEven { Odd = 1, Even = 2 };

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

int SumEvenNumbersFrom1toN_UsingFor(int N)
{
    int Sum = 0;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using For Statement:\n";
    for (int Counter = 1; Counter <= N; Counter++)
    {
        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
    }
    return Sum;

}

int SumEvenNumbersFrom1toN_UsingWhile(int N)
{
    int Sum = 0;
    int Counter = 1;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using While Statement:\n";
    while (Counter <= N)
    {

        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
        {
            Sum += Counter;
        }
        Counter++;
    }
    return Sum;

}

int SumEvenNumbersFrom1toN_UsingDoWhile(int N)
{
    int Sum = 0;
    int Counter = 1;
    cout << "**************************\n";
    cout << "Sun Odd Numbers using Do While Statement:\n";
    do
    {

        if (CheckOddOrEven(Counter) == enOddOrEven::Even)
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
    cout << SumEvenNumbersFrom1toN_UsingFor(N) << endl;
    cout << SumEvenNumbersFrom1toN_UsingWhile(N) << endl;
    cout << SumEvenNumbersFrom1toN_UsingDoWhile(N) << endl;
}
```

### How It Works

The parity-checking logic is reused from the odd-sum version. The only difference is the condition: `CheckOddOrEven(Counter) == enOddOrEven::Even`. A number is even when `Number % 2 == 0`, and the `CheckOddOrEven` function returns `Even` in that case. Each loop type iterates from 1 to N, tests each number, and accumulates even values into the sum. This demonstrates how a small change in the condition (Odd → Even) completely changes the program's behavior while keeping the structure identical.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Code reuse** | Reusing `CheckOddOrEven` with a different enum comparison |
| **Even number detection** | `Number % 2 == 0` means the number is evenly divisible by 2 |
| **Inverted logic** | Same loop structure, different condition produces different results |
| **Accumulator pattern** | Using a `Sum` variable to collect values across iterations |
| **Symmetry with odd-sum** | Comparing how odd vs even sum programs differ in only one line |

### Quiz

<details>
<summary>1. What condition determines that a number is even?</summary>

`Number % 2 == 0` — the remainder when divided by 2 is zero.
</details>

<details>
<summary>2. How does this program differ from the odd number sum program?</summary>

Only the enum value used in the `if` condition changes from `enOddOrEven::Odd` to `enOddOrEven::Even`.
</details>

<details>
<summary>3. What is the sum of even numbers from 1 to 10?</summary>

2 + 4 + 6 + 8 + 10 = 30.
</details>

<details>
<summary>4. Could the same result be achieved by incrementing the counter by 2 instead of 1?</summary>

Yes, starting at 2 and incrementing by 2 (`Counter += 2`) would skip odd numbers entirely and avoid the `if` check. This approach is more explicit for educational purposes.
</details>

### Concept Map

```mermaid
mindmap
  root((Sum Even Numbers))
    Input
      ReadNumber()
      N
    Enum
      enOddOrEven (reused)
      Even = 2
    Parity Check
      CheckOddOrEven (reused)
      Number % 2 != 0 → Odd
      else → Even
    Accumulation
      For / While / Do-While
      if (Even) → Sum += Counter
    Key Concepts
      Code reuse
      Even detection
      Condition inversion
      Accumulator pattern
```
