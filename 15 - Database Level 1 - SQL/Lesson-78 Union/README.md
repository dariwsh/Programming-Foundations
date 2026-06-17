# Lesson 78 - UNION

---

# 📘 Introduction

In this lesson, we learned about:

# UNION

is:

> `UNION` combines the result sets of two or more `SELECT` queries into a single result. By default it removes duplicates. `UNION ALL` keeps all rows including duplicates.

---

# 🎯 Main Idea

`UNION` stacks rows from multiple queries on top of each other. Both queries must have the **same number of columns** and **compatible data types**.

---

# 💡 Example

Combine active and resigned employees into one result set.

---

# ✨ UNION Syntax

```sql
-- UNION: removes duplicates
SELECT * FROM ActiveEmployees
UNION
SELECT * FROM ResignedEmployees

-- UNION ALL: keeps duplicates
SELECT * FROM ActiveEmployees
UNION ALL
SELECT * FROM ResignedEmployees

-- UNION on same table (removes duplicates)
SELECT * FROM Departments
UNION
SELECT * FROM Departments

-- UNION ALL on same table (doubles rows)
SELECT * FROM Departments
UNION ALL
SELECT * FROM Departments
```

---

# 🧠 Result

```text
UNION     → merged rows, duplicates removed
UNION ALL → merged rows, all duplicates kept
```

---

# 🔥 Important Rule

```text
Both SELECT statements must have the same number of columns.
Column names come from the FIRST SELECT.
UNION ALL is faster than UNION (no dedup step).
```

---

# 🧩 UNION vs UNION ALL

| Feature          | UNION          | UNION ALL       |
| ---------------- | -------------- | --------------- |
| Removes Dups     | ✅ Yes         | ❌ No           |
| Performance      | ⚠️ Slower      | ✅ Faster       |
| Use Case         | Distinct rows  | All rows needed |

---

# ✅ Summary

| Concept   | Meaning                              |
| --------- | ------------------------------------ |
| UNION     | Combines results, removes duplicates |
| UNION ALL | Combines results, keeps duplicates   |
| Rule      | Same column count and compatible types required |

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
