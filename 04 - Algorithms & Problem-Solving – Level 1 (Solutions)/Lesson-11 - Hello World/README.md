[![GitHub](https://img.shields.io/badge/GitHub-000?style=for-the-badge&logo=github)](https://github.com/aboHuhaed)
[![Portfolio](https://img.shields.io/badge/Portfolio-000?style=for-the-badge&logo=web)](https://aboHuhaed.github.io)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-000?style=for-the-badge&logo=linkedin)](https://linkedin.com/in/ahmed-dawrish)

## Lesson 11: Hello World

The classic "Hello World!" program — often the first program written when learning a new language. This program uses `std::cout` with the insertion operator `<<` to output the string "Hello World!" followed by a newline (`\n`) to the console.

Despite its simplicity, this program introduces the fundamental structure of a C++ application: the `#include <iostream>` preprocessor directive for input/output, the `main()` function as the entry point, and `std::cout` for output. The `return 0;` is implicit in modern C++ (main returns 0 by default), but the explicit statement is good practice.

```cpp
// Problem 11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}
```

<details>
<summary>Interactive Quiz</summary>

**Q1:** What does `#include <iostream>` do?
- [ ] Defines the main function
- [x] Includes the input/output library
- [ ] Creates a variable
- [ ] Prints output

**Q2:** What is the output of this program?
- [ ] Hello World
- [x] Hello World!
- [ ] Hello World!\n
- [ ] World Hello!

**Q3:** Which operator is used with cout to output text?
- [ ] >>
- [x] <<
- [ ] ><
- [ ] ||

</details>

```mermaid
mindmap
  root((Hello World))
    Structure
      #include <iostream>
      int main()
      return 0
    Output
      std::cout
      Insertion operator <<
      Newline \n
    Concepts
      Program entry point
      Preprocessor directives
      Namespace std
      Console output
```
