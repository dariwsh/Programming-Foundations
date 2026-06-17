# Lesson 86 - Normalization

---

# 📘 Introduction

In this lesson, we learned about:

# Normalization

is:

> **Normalization** is the process of organizing a database to **reduce redundancy** and **improve data integrity**. It involves dividing large tables into smaller ones and defining relationships between them.

---

# 🎯 Main Idea

A normalized database is easier to maintain, has less duplicate data, and avoids update/insert/delete anomalies. It follows a set of rules called **Normal Forms (NF)**.

---

# 💡 Why Normalization?

Without normalization, databases suffer from:
- **Update Anomaly** — changing data in one place breaks another
- **Insert Anomaly** — can't insert data without unrelated data
- **Delete Anomaly** — deleting a row removes needed information

---

# ✨ Normalization Goals

```text
✔️ Eliminate redundant data
✔️ Ensure data dependencies make sense
✔️ Reduce storage space
✔️ Improve query performance
✔️ Make updates safer and easier
```

---

# 🧠 Normal Forms Overview

```text
1NF (First Normal Form)   → Atomic values, no repeating groups
2NF (Second Normal Form)  → No partial dependencies
3NF (Third Normal Form)   → No transitive dependencies
BCNF                      → Stricter version of 3NF
```

---

# 🔥 Important Rule

```text
Normalization is done step-by-step.
You must satisfy 1NF before 2NF, and 2NF before 3NF.
Over-normalization can hurt performance — balance is key.
```

---

# 🧩 Normal Forms Summary

| Normal Form | Rule                                           |
| ----------- | ---------------------------------------------- |
| 1NF         | Each cell has one atomic value, no duplicates  |
| 2NF         | 1NF + No partial dependency on composite PK   |
| 3NF         | 2NF + No transitive dependency                 |
| BCNF        | 3NF + Every determinant is a candidate key     |

---

# ✅ Summary

| Concept        | Meaning                                       |
| -------------- | --------------------------------------------- |
| Normalization  | Process of organizing DB to reduce redundancy |
| Anomaly        | Data inconsistency caused by poor design      |
| Normal Form    | A standard rule applied to tables             |

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
