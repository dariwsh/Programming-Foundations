# C++ Quiz — Pointer to Void

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is a void pointer (`void*`) in C++?

<details>
<summary><b>Option A:</b> A pointer that points to nothing and always crashes.</summary>

❌ <b>Incorrect!</b> It can point to valid data, but its type is generic.
</details>

<details>
<summary><b>Option B:</b> A pointer to a function returning void.</summary>

❌ <b>Incorrect!</b> A function pointer has different signature rules.
</details>

<details>
<summary><b>Option C:</b> A generic pointer that can store the address of any data type, but must be cast before dereferencing.</summary>

✅ <b>Correct!</b> Correct! Void pointers represent generic addresses. Because the compiler does not know the data type size, you must typecast them before dereferencing.
</details>

<details>
<summary><b>Option D:</b> A special pointer used only on stack memory.</summary>

❌ <b>Incorrect!</b> Void pointers can point to stack or heap memory.
</details>

