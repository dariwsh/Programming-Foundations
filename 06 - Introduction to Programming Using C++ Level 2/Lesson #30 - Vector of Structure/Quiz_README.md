# C++ Quiz — Vector of Structure

## 👨‍💻 Author
Ahmed Darwish

---

## 🧠 Interactive Quiz

**Question:** If you have a `vector<stStudent> students`, how do you access the member `Grade` of the first student?

<details>
<summary><b>Option A:</b> students.Grade[0]</summary>

❌ <b>Incorrect!</b> Grade is a member of the struct inside the vector, not of the vector itself.
</details>

<details>
<summary><b>Option B:</b> students[0].Grade</summary>

✅ <b>Correct!</b> Correct! You index the vector first (students[0]) to get the struct, then access its member (.Grade).
</details>

<details>
<summary><b>Option C:</b> students->Grade[0]</summary>

❌ <b>Incorrect!</b> Vector is an object, not a pointer, so we use subscript [] and dot . operator.
</details>

<details>
<summary><b>Option D:</b> students.at(Grade)[0]</summary>

❌ <b>Incorrect!</b> at() takes an index parameter, not a member name.
</details>

