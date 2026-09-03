[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Age Validation

This program validates whether a user's age falls within the range of 18 to 45. It introduces boolean functions, range checking with logical AND (`&&`), and conditional `if-else` statements to control program flow. This is a foundational pattern for input validation in real-world applications.

```cpp
/*
* •Write a program to ask the user to enter :

Age
If age is
between 18 and 45
print "Valid Age" otherwise print
"Invalid Age"
*/
#include <iostream>
#include <string>
using namespace std;
int ReadAge()
{
	int Age;
	cout << "Please enter your Age ? \n";
	cin >> Age;
	return Age;
}

bool validateNumberinRange(int Number , int from , int To)
{
	return (Number >= from && Number <= To);

}

void PrintResult(int Age)
{
	if (validateNumberinRange(Age, 18, 45))
	{
		cout << Age << "is A Valid Age " << endl;;

	}
	else
	{
		cout << Age << "is A Invalid Age " << endl;;

	}
}
int main()
{
	PrintResult(ReadAge());
}
```

### How It Works

The `ReadAge()` function captures the user's age. The core logic is in `validateNumberinRange()`, which returns a `bool` by checking `Number >= from && Number <= To`. The `&&` ensures both conditions must be true. In `PrintResult()`, an `if-else` statement uses the boolean result to print either "Valid Age" or "Invalid Age". This separates the validation logic from the output logic, making the code reusable and testable.

### Concepts Introduced

| Concept | Explanation |
|---|---|
| **Boolean functions** | Functions returning `true` or `false` |
| **Range checking** | Using `&&` to test if a value falls between two bounds |
| **if-else conditional** | Branching execution based on a boolean condition |
| **Validation pattern** | Separating validation logic from presentation logic |
| **Reusable parameters** | Making `validateNumberinRange` generic with `from` and `To` parameters |

### Quiz

<details>
<summary>1. What does the <code>&&</code> operator do in <code>Number >= from && Number <= To</code>?</summary>

It is the logical AND operator — both conditions must be true for the overall expression to be true.
</details>

<details>
<summary>2. Why is <code>validateNumberinRange</code> designed with <code>from</code> and <code>To</code> parameters instead of hardcoding 18 and 45?</summary>

Making it generic allows the same function to validate any numeric range, not just 18-45, improving reusability.
</details>

<details>
<summary>3. What would the output be if the user enters 50?</summary>

The condition `18 <= 50 <= 45` is false, so the program prints "Invalid Age".
</details>

<details>
<summary>4. What data type does <code>validateNumberinRange</code> return?</summary>

It returns `bool` — either `true` or `false`.
</details>

### Concept Map

```mermaid
mindmap
  root((Age Validation))
    Input
      ReadAge()
      cin >> Age
    Validation
      validateNumberinRange
      Logical AND &&
      Range check: from ≤ N ≤ To
      Returns bool
    Decision
      if (true) → Valid Age
      else → Invalid Age
    Benefits
      Reusable validation
      Separation of concerns
      Boolean logic
```
