# C++ Quiz — Call by Reference using Pointers

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** If you have a function `void Swap(int* a, int* b)`, how do you call it with variables `x` and `y`?

<details>
<summary><b>Option A:</b> Swap(x, y);</summary>

❌ <b>Incorrect!</b> This passes values, but the function requires pointers.
</details>

<details>
<summary><b>Option B:</b> Swap(&x, &y);</summary>

✅ <b>Correct!</b> Correct! The address-of operator '&' extracts pointers to x and y to match the function signature.
</details>

<details>
<summary><b>Option C:</b> Swap(*x, *y);</summary>

❌ <b>Incorrect!</b> This is dereferencing, which is invalid on non-pointers.
</details>

<details>
<summary><b>Option D:</b> Swap(a, b);</summary>

❌ <b>Incorrect!</b> Variables are named x and y, not a and b.
</details>

