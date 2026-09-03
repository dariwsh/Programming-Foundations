[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Age Validation with Loop (Repeat Until Valid)

This program extends the age validation concept by adding a loop that keeps asking the user for their age until a valid value (between 18 and 45) is entered. It introduces the `do-while` loop, which guarantees at least one execution before checking the condition, making it ideal for input validation that requires at least one prompt.

```cpp
/*
Write a program to ask the user to enter :
•
Age
If age is
between 18 and 45
print "Valid Age" otherwise print
"Invalid Age" and re-ask user to enter a valid age.
Note: You should keep asking user to enter a valid age until
s/she enters it
*/

#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
	int Age;
	cout << "Please enter your Age 18 and 45 ? \n";
	cin >> Age;
	return Age;
}

bool validateNumberinRange(int Number, int from, int To)
{
	return (Number >= from && Number <= To);

}

int ReadUntilAgeBetwen(int from, int To)
{
	int Age = 0;
	do {
		Age = ReadAge();
	} while (!validateNumberinRange(Age, from, To));

	return Age;
}

void PrintResult(int Age)
{
	cout << "Your Age is : " << Age << endl;
}

int main()
{
	PrintResult(ReadUntilAgeBetwen(18,45));
}
```

### How It Works

The `ReadUntilAgeBetwen()` function uses a `do-while` loop. It calls `ReadAge()` to prompt the user, then checks if the age is valid using `!validateNumberinRange()` (negating the boolean). If the age is invalid, the condition is `true` and the loop continues. This repeats until a valid age is entered. The loop then exits and returns the valid age. This pattern is called "input validation with retry" and is crucial for robust user interfaces.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **do-while loop** | Executes the body at least once before checking the condition |
| **Negation (!)** | Inverting a boolean: `!true` = `false`, `!false` = `true` |
| **Input validation loop** | Repeatedly prompting until valid input is received |
| **Loop-and-a-half pattern** | Using `do-while` when you must execute before checking |
| **Function composition** | `ReadUntilAgeBetwen` builds on `ReadAge` and `validateNumberinRange` |

### Quiz

<details>
<summary>1. What is the difference between a <code>do-while</code> loop and a <code>while</code> loop?</summary>

A `do-while` loop guarantees the body executes at least once before checking the condition. A `while` loop may execute zero times if the condition is initially false.
</details>

<details>
<summary>2. Why does the condition use <code>!validateNumberinRange(...)</code> instead of <code>validateNumberinRange(...)</code>?</summary>

The loop should continue while the age is NOT valid. The `!` negates the result, so the loop repeats when validation returns `false`.
</details>

<details>
<summary>3. What happens if the user enters 17 and then 30?</summary>

17 is invalid (outside 18-45), so the loop repeats. 30 is valid, so the loop exits and prints "Your Age is : 30".
</details>

<details>
<summary>4. What value does <code>ReadUntilAgeBetwen</code> return?</summary>

It returns the first valid age entered by the user.
</details>

### Concept Map

```mermaid
mindmap
  root((Age Validation Loop))
    Input
      ReadAge()
    Validation
      validateNumberinRange
      Boolean check
    Loop
      do-while
      Repeat until !valid
      Always executes once
    Result
      Returns valid age
      PrintResult
    Concepts
      do-while loop
      Negation operator !
      Input retry pattern
      Function reuse
```
