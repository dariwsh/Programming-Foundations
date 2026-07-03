# C++ Quiz — Delete Record From File

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is the standard logic to delete a record from a text file in C++?

<details>
<summary><b>Option A:</b> Directly locate and erase characters in the middle of the physical disk file.</summary>

❌ <b>Incorrect!</b> Filesystems do not support simple insertion or middle deletion without rewriting.
</details>

<details>
<summary><b>Option B:</b> Load file to a vector, search and set the target record to an empty string, and rewrite the non-empty elements back to the file.</summary>

✅ <b>Correct!</b> Correct! This is a simple, effective design: Load -> Modify in memory -> Overwrite file skipping the deleted records.
</details>

<details>
<summary><b>Option C:</b> Use the standard clear() function on the file stream object.</summary>

❌ <b>Incorrect!</b> clear() resets stream error flags, it doesn't edit records.
</details>

<details>
<summary><b>Option D:</b> It is impossible to delete records in standard C++.</summary>

❌ <b>Incorrect!</b> It is easily done via memory buffers.
</details>

