# C++ Quiz — Local UTC Time

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is the difference between `ctime()` and `asctime()`?

<details>
<summary><b>Option A:</b> ctime() takes a pointer to time_t; asctime() takes a pointer to tm struct.</summary>

✅ <b>Correct!</b> Correct! ctime() converts calendar time directly to string, whereas asctime() converts a structured tm representation to string.
</details>

<details>
<summary><b>Option B:</b> ctime() returns local time, while asctime() returns UTC time.</summary>

❌ <b>Incorrect!</b> Both return strings representing the time passed to them; the difference is the input data type.
</details>

<details>
<summary><b>Option C:</b> asctime() is twice as fast as ctime().</summary>

❌ <b>Incorrect!</b> Performance difference is negligible.
</details>

<details>
<summary><b>Option D:</b> There is no difference.</summary>

❌ <b>Incorrect!</b> They accept different parameter types.
</details>

