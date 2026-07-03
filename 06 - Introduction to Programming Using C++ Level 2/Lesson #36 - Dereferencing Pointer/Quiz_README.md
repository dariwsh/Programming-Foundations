# C++ Quiz — Dereferencing Pointer

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** If `int *ptr = &x;`, how do you access the value of `x` through `ptr`?

<details>
<summary><b>Option A:</b> Using the address-of operator: &ptr</summary>

❌ <b>Incorrect!</b> &ptr returns the address of the pointer itself.
</details>

<details>
<summary><b>Option B:</b> Using the dereference operator: *ptr</summary>

✅ <b>Correct!</b> Correct! *ptr (dereferencing) accesses the value at the address stored in ptr.
</details>

<details>
<summary><b>Option C:</b> Using ptr directly.</summary>

❌ <b>Incorrect!</b> Using ptr directly evaluates to the memory address of x, not its value.
</details>

<details>
<summary><b>Option D:</b> Using ptr->value</summary>

❌ <b>Incorrect!</b> This is structure pointer syntax; x is an integer, not a struct.
</details>

