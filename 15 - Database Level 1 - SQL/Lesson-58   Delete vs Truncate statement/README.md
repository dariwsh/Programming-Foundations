# Lesson 58 - Delete vs Truncate Statement

---

# 📘 Introduction

In this lesson, we learned about:

# DELETE vs TRUNCATE

are:

> Two ways to remove rows from a table. `DELETE` removes rows one by one with full logging. `TRUNCATE` deallocates entire data pages for faster removal.

---

# 🎯 Main Idea

Choose `DELETE` when you need to filter specific rows or fire triggers. Choose `TRUNCATE` when you need to clear all rows quickly and reset the identity counter.

---

# 💡 Example

We have a `Department` table. We insert a row and then truncate the table.

---

# ✨ TRUNCATE

```sql
INSERT INTO Department VALUES ('HR');

TRUNCATE TABLE Department;
```

---

# 🧠 Result

```text
(1 row affected)
Table Department has been truncated.
All rows removed, identity counter reset.
```

---

# 🔥 Important Rule

```text
TRUNCATE cannot use a WHERE clause — it removes ALL rows.
TRUNCATE resets IDENTITY to seed; DELETE does not.
TRUNCATE does NOT fire triggers.
```

---

# 🧩 DELETE vs TRUNCATE

| Feature   | DELETE | TRUNCATE |
| --------- | ------ | -------- |
| WHERE     | Supported | Not supported |
| Logging   | Row by row (full) | Page deallocations only |
| Speed     | Slower | Very fast |
| Identity  | Preserved | Reset to seed |
| Triggers  | Fires per row | Does not fire |

---

# ✅ Summary

| Concept   | Meaning |
| --------- | ------- |
| DELETE    | Row-by-row removal, WHERE supported, identity preserved |
| TRUNCATE  | Bulk removal, no WHERE, identity reset, very fast |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
🚀 Software Engineering Student

أشارك رحلتي في تعلم البرمجة، مشاريعي، وملخصاتي الدراسية.

🌐 Portfolio
https://darwish.xo.je

💻 GitHub
https://github.com/dariwsh

🔗 LinkedIn
https://www.linkedin.com/in/ahmed-darwish-33b752330/

🤝 أي نصيحة أو Feedback مرحب بها دائمًا، فالتعلم لا يتوقف.

❤️ Thanks for visiting.
