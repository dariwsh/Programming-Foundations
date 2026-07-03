# C++ Quiz — Load Data From File to Vector

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** When loading data from a file to a vector, why is it recommended to pass the vector by reference?

<details>
<summary><b>Option A:</b> It speeds up compilation.</summary>

❌ <b>Incorrect!</b> It does not affect compilation.
</details>

<details>
<summary><b>Option B:</b> It allows the function to store lines directly into the original vector without copying it, saving CPU and memory.</summary>

✅ <b>Correct!</b> Correct! Passing by reference (&) prevents making expensive copies of vectors and allows direct modification.
</details>

<details>
<summary><b>Option C:</b> It automatically opens the file stream.</summary>

❌ <b>Incorrect!</b> File stream opening is independent of parameter passing.
</details>

<details>
<summary><b>Option D:</b> Passing vectors by value is a syntax error.</summary>

❌ <b>Incorrect!</b> Passing by value is syntactically valid but highly inefficient.
</details>

