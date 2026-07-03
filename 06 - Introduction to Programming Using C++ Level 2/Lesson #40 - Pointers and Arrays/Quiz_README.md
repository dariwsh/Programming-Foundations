# C++ Quiz — Pointers and Arrays

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** If `int arr[5] = {10, 20, 30};`, what does `*(arr + 1)` evaluate to?

<details>
<summary><b>Option A:</b> 10</summary>

❌ <b>Incorrect!</b> 10 is at arr[0].
</details>

<details>
<summary><b>Option B:</b> 20</summary>

✅ <b>Correct!</b> Correct! arr is a pointer to the first element (index 0). arr + 1 shifts to index 1, and dereferencing (*) gets its value (20).
</details>

<details>
<summary><b>Option C:</b> 30</summary>

❌ <b>Incorrect!</b> 30 is at arr[2].
</details>

<details>
<summary><b>Option D:</b> An invalid address.</summary>

❌ <b>Incorrect!</b> arr + 1 is a valid address pointing to index 1.
</details>

