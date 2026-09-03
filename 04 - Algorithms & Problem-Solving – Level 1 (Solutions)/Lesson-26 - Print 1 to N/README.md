[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Print Numbers from 1 to N

This program demonstrates all three loop structures in C++ — `while`, `for`, and `do-while` — by printing numbers from 0 to a user-specified value N. It shows the syntactic differences between the loop types while achieving the same result, helping the learner understand when to use each one.

```cpp
// loop for N
#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter number ?" << endl;
	cin >> Number;
	return Number;
}
void PrintRangeWhile(int N)
{
	int Counter = 0;
	cout << "Range using While statemnt: \n";
	while (Counter <= N)
	{
		cout << Counter << endl;

		Counter++;
	}
}

void PrintRangeFor(int N)
{
	int Counter = 0;
	cout << "Range using for statemnt: \n";
	cout << "******************\n";
	for (Counter = 0; Counter <= N; Counter++)
	{
		cout << Counter << endl;

	}
}

void PrintRangeDo(int N)
{
	int Counter = 0;
	cout << "Range using do statemnt: \n";
	do
	{
		cout << Counter << endl;

		Counter++;
	} while (Counter <= N);
}

int main()
{
	int N = ReadNumber();
	PrintRangeWhile(N);
	PrintRangeFor(N);
	PrintRangeDo(N);
}
```

### How It Works

Each function receives N and uses a different loop to count from 0 to N. The `while` loop checks the condition before each iteration. The `for` loop consolidates initialization, condition, and increment in one line. The `do-while` loop checks the condition after each iteration. All three produce identical output, demonstrating that loop choice is often a matter of style and readability. The counter variable tracks the current number and is incremented each iteration.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **while loop** | Checks condition first; may execute zero times |
| **for loop** | Compact syntax: init; condition; increment in one line |
| **do-while loop** | Executes body first; checks condition after |
| **Counter variable** | A variable that increments to track iterations |
| **Loop equivalence** | All three loops can solve the same problem differently |

### Quiz

<details>
<summary>1. In the <code>for</code> loop, what are the three parts inside the parentheses?</summary>

Initialization (`Counter = 0`), condition (`Counter <= N`), and increment (`Counter++`).
</details>

<details>
<summary>2. Which loop type guarantees the body executes at least once?</summary>

The `do-while` loop, because the condition is checked after the body runs.
</details>

<details>
<summary>3. What would happen if the user enters 0?</summary>

Each loop would print just "0" because 0 <= 0, then the counter increments and the condition fails.
</details>

<details>
<summary>4. What is the difference between <code>Counter++</code> and <code>++Counter</code>?</summary>

`Counter++` returns the original value then increments; `++Counter` increments first. When used as a standalone statement (like here), they behave identically.
</details>

### Concept Map

```mermaid
mindmap
  root((Print 1 to N))
    Input
      ReadNumber()
      N
    While Loop
      Initializes Counter
      Checks condition first
      Increments inside body
    For Loop
      All-in-one syntax
      Init; Condition; Increment
      Clean and concise
    Do-While Loop
      Executes body first
      Checks condition after
      Runs at least once
    Concepts
      Loop types comparison
      Counter variable
      Increment operator
```
