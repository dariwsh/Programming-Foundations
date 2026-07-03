# C++ Quiz — Common Mistakes with Pointers

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** Why are uninitialized pointers dangerous in C++?

<details>
<summary><b>Option A:</b> They contain random garbage addresses and accessing them can cause segmentation faults or crash the program.</summary>

✅ <b>Correct!</b> Correct! An uninitialized pointer points to a random memory location (wildcard pointer). Dereferencing it is undefined behavior and usually crashes the program.
</details>

<details>
<summary><b>Option B:</b> They compile slower.</summary>

❌ <b>Incorrect!</b> They compile at normal speed but crash at runtime.
</details>

<details>
<summary><b>Option C:</b> They are automatically converted to null pointers.</summary>

❌ <b>Incorrect!</b> They are NOT automatically null; they contain garbage unless explicitly initialized.
</details>

<details>
<summary><b>Option D:</b> They occupy double memory space.</summary>

❌ <b>Incorrect!</b> They occupy the standard pointer size (usually 4 or 8 bytes).
</details>

