# C++ Quiz — Dynamic Arrays new and delete

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** If you allocate an array dynamically using `int* arr = new int[10];`, how must you free it?

<details>
<summary><b>Option A:</b> delete arr;</summary>

❌ <b>Incorrect!</b> Using 'delete' without brackets on an array leads to undefined behavior.
</details>

<details>
<summary><b>Option B:</b> delete[] arr;</summary>

✅ <b>Correct!</b> Correct! Memory allocated using 'new[]' must be freed using 'delete[]'.
</details>

<details>
<summary><b>Option C:</b> free(arr);</summary>

❌ <b>Incorrect!</b> free() is a C library function and does not call class destructors.
</details>

<details>
<summary><b>Option D:</b> arr.clear();</summary>

❌ <b>Incorrect!</b> Raw pointers do not have member functions like clear().
</details>

