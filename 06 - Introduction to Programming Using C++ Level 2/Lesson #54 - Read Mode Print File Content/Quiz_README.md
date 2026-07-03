# C++ Quiz — Read Mode Print File Content

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** What is the standard loop construct to read all lines from a text file using getline?

<details>
<summary><b>Option A:</b> while (getline(MyFile, Line))</summary>

✅ <b>Correct!</b> Correct! getline returns the stream. When EOF is hit, the stream evaluates to false, exiting the loop safely.
</details>

<details>
<summary><b>Option B:</b> for (string Line in MyFile)</summary>

❌ <b>Incorrect!</b> C++ files do not support direct ranged loops.
</details>

<details>
<summary><b>Option C:</b> while (MyFile >> Line)</summary>

❌ <b>Incorrect!</b> This reads space-separated words, not entire lines.
</details>

<details>
<summary><b>Option D:</b> while (!MyFile.eof()) MyFile >> Line;</summary>

❌ <b>Incorrect!</b> This is unsafe as eof() is set after a failed read, often processing the last line twice.
</details>

