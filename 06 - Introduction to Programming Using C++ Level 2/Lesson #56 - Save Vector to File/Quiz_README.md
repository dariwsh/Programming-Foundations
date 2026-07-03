# C++ Quiz — Save Vector to File

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** When saving a vector to a file, why do we use `ios::out` without `ios::app`?

<details>
<summary><b>Option A:</b> To append new data to the existing file.</summary>

❌ <b>Incorrect!</b> No, that requires ios::app.
</details>

<details>
<summary><b>Option B:</b> To overwrite the file and write the current state of the vector as the complete database.</summary>

✅ <b>Correct!</b> Correct! When saving a full vector database, we overwrite the previous file content so it contains only the updated dataset.
</details>

<details>
<summary><b>Option C:</b> To read lines from the file.</summary>

❌ <b>Incorrect!</b> No, reading uses ios::in.
</details>

<details>
<summary><b>Option D:</b> Because ios::app is deprecated.</summary>

❌ <b>Incorrect!</b> ios::app is not deprecated.
</details>

