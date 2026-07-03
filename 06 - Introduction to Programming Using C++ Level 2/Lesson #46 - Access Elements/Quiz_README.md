# C++ Quiz — Access Elements in Vector

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is the key benefit of accessing vector elements using `.at(index)` instead of subscript `[index]` notation?

<details>
<summary><b>Option A:</b> .at() performs range checks and throws an out_of_range exception if index is invalid.</summary>

✅ <b>Correct!</b> Correct! Subscript operator [] does not check bounds and can cause silent crashes or memory issues, while .at() checks bounds and throws exceptions safely.
</details>

<details>
<summary><b>Option B:</b> .at() is faster than the subscript operator.</summary>

❌ <b>Incorrect!</b> .at() is slightly slower because of the range checks.
</details>

<details>
<summary><b>Option C:</b> .at() can access private variables.</summary>

❌ <b>Incorrect!</b> It cannot bypass object encapsulation.
</details>

<details>
<summary><b>Option D:</b> There is no functional difference.</summary>

❌ <b>Incorrect!</b> Bounds checking is a major functional difference.
</details>

