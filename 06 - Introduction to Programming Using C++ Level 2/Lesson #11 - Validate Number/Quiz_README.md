# C++ Quiz — Input Validation

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** Which two std::cin functions are critical to reset and clean input when input validation fails?

<details>
<summary><b>Option A:</b> cin.clear() to reset error flags, and cin.ignore() to clear the stream buffer.</summary>

✅ <b>Correct!</b> Correct! cin.clear() resets error flags so cin works again, and cin.ignore() discards bad characters from the buffer.
</details>

<details>
<summary><b>Option B:</b> cin.fail() and cin.reset()</summary>

❌ <b>Incorrect!</b> cin.fail() checks error status, but cin.reset() is not a valid function name.
</details>

<details>
<summary><b>Option C:</b> cin.close() and cin.open()</summary>

❌ <b>Incorrect!</b> Standard input streams are not closed and reopened to handle error states.
</details>

<details>
<summary><b>Option D:</b> cin.flush() and cin.clean()</summary>

❌ <b>Incorrect!</b> These are not standard input cleaning functions.
</details>

