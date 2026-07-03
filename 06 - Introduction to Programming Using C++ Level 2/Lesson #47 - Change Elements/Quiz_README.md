# C++ Quiz — Change Elements in Vector

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** How should a range-based loop variable be declared to modify vector elements inside the loop?

<details>
<summary><b>Option A:</b> for (int x : vec)</summary>

❌ <b>Incorrect!</b> This makes a copy of elements; changes will not affect the original vector.
</details>

<details>
<summary><b>Option B:</b> for (const int& x : vec)</summary>

❌ <b>Incorrect!</b> This is read-only reference; you cannot change x.
</details>

<details>
<summary><b>Option C:</b> for (int& x : vec)</summary>

✅ <b>Correct!</b> Correct! Declaring the loop variable as a reference (int&) allows modifying the original elements inside the vector.
</details>

<details>
<summary><b>Option D:</b> for (int* x : vec)</summary>

❌ <b>Incorrect!</b> Vec contains integers, not pointers.
</details>

