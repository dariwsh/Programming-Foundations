[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Print Numbers from N to 1 (Reverse Order)

This program reverses the counting direction — it prints numbers from N down to 1 using all three loop structures. This teaches decrementing loops and adjusting loop conditions for descending order. Each loop type (`while`, `for`, `do-while`) is adapted to count backward by initializing the counter at N and decrementing it.

```cpp
// loop for N to 1
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
	int Counter = N;
	cout << "Range using While statemnt: \n";
	while (Counter  >1)
	{
		Counter--;
		cout << Counter << endl;

		
	}
}

void PrintRangeFor(int N)
{
	int Counter = N+1;
	cout << "Range using for statemnt: \n";
	cout << "******************\n";
	for (Counter = N; Counter >= 1; Counter--)
	{
		cout << Counter << endl;

	}
}

void PrintRangeDo(int N)
{
	int Counter = N;
	cout << "Range using do statemnt: \n";
	do
	{
		cout << Counter << endl;

		Counter--;
	} while (Counter >= 1);
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

Each function initializes the counter to N instead of 0. The `while` loop starts at N and decrements `Counter--` before printing (so it prints N-1 down to 1). The `for` loop uses `Counter >= 1` as its condition and `Counter--` as the decrement step, printing N down to 1. The `do-while` loop prints the current counter then decrements, continuing while `Counter >= 1`. All three loops decrement their counter instead of incrementing, demonstrating the flexibility of loop control structures.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Decrement (Counter--)** | Decreasing the counter by 1 each iteration |
| **Descending loops** | Adjusting conditions for counting down |
| **Loop condition reversal** | Using `>=` instead of `<=` for descending logic |
| **Off-by-one awareness** | Noticing how `while` vs `for` produce slightly different ranges |
| **Initialization at N** | Starting the counter at N instead of 0 |

### Quiz

<details>
<summary>1. What is the difference between <code>Counter++</code> and <code>Counter--</code>?</summary>

`Counter++` adds 1 to the counter; `Counter--` subtracts 1 from the counter.
</details>

<details>
<summary>2. Why does the <code>for</code> loop use <code>Counter >= 1</code> while the <code>while</code> loop uses <code>Counter > 1</code>?</summary>

The `while` loop decrements before printing (starting iteration when Counter = N, then decrementing to N-1 before printing), so it stops at Counter > 1. The `for` loop prints then decrements, so it needs Counter >= 1 to include 1.
</details>

<details>
<summary>3. If N is 5, what does the <code>for</code> loop print?</summary>

It prints 5, 4, 3, 2, 1.
</details>

<details>
<summary>4. What would happen if the condition was <code>Counter > 0</code> instead of <code>Counter >= 1</code>?</summary>

The behavior would be the same — both conditions are equivalent for integer counters.
</details>

### Concept Map

```mermaid
mindmap
  root((Print N to 1))
    Input
      ReadNumber()
      N
    While Loop
      Counter = N
      Decrement before print
      Condition: Counter > 1
    For Loop
      Counter = N
      Counter >= 1
      Counter-- step
    Do-While Loop
      Counter = N
      Print then decrement
      Condition: Counter >= 1
    Concepts
      Decrement operator
      Descending iteration
      Off-by-one
      Loop condition design
```
