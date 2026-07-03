# C++ Quiz — String Object

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is returned by `s1.find("text")` if the substring is NOT found inside the string `s1`?

<details>
<summary><b>Option A:</b> -1</summary>

❌ <b>Incorrect!</b> In C++, find returns a special unsigned value std::string::npos, not a signed -1 (though its value is static_cast to maximum unsigned value).
</details>

<details>
<summary><b>Option B:</b> 0</summary>

❌ <b>Incorrect!</b> 0 means the substring was found at index 0 (the start).
</details>

<details>
<summary><b>Option C:</b> std::string::npos</summary>

✅ <b>Correct!</b> Correct! std::string::npos is returned when the substring search fails.
</details>

<details>
<summary><b>Option D:</b> A null pointer.</summary>

❌ <b>Incorrect!</b> It returns a size_type integer value, not a pointer.
</details>

