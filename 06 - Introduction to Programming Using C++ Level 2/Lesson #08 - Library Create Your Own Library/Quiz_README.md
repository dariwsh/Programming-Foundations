# C++ Quiz — Creating Libraries

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is the standard syntax to include a user-defined library header in C++?

<details>
<summary><b>Option A:</b> #include <MyHeader.h></summary>

❌ <b>Incorrect!</b> Angle brackets search standard system directories; user-defined headers should use quotes.
</details>

<details>
<summary><b>Option B:</b> #include "MyHeader.h"</summary>

✅ <b>Correct!</b> Correct! Quotation marks instruct the preprocessor to look for the file in the project's local directory first.
</details>

<details>
<summary><b>Option C:</b> #import "MyHeader.h"</summary>

❌ <b>Incorrect!</b> #import is primarily used in Objective-C or special MSVC directives, not standard C++.
</details>

<details>
<summary><b>Option D:</b> using MyHeader.h;</summary>

❌ <b>Incorrect!</b> This is invalid syntax.
</details>

