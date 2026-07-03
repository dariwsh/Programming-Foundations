# C++ Quiz — Append Mode Append Data to File

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** How do you open a file so that write operations append data to the end of the file rather than overwriting it?

<details>
<summary><b>Option A:</b> Use ios::out | ios::trunc</summary>

❌ <b>Incorrect!</b> This overwrites the file.
</details>

<details>
<summary><b>Option B:</b> Use ios::out | ios::app</summary>

✅ <b>Correct!</b> Correct! Combining output mode with append mode (ios::app) preserves existing content and writes at the end.
</details>

<details>
<summary><b>Option C:</b> Use ios::in</summary>

❌ <b>Incorrect!</b> This is read-only mode.
</details>

<details>
<summary><b>Option D:</b> Use ios::app alone on ifstream</summary>

❌ <b>Incorrect!</b> ifstream is for input only; you need output stream capabilities.
</details>

