# Lesson 85 - INDEX

---

# 📘 Introduction

In this lesson, we learned about:

# INDEX

is:

> An `INDEX` is a database object that **speeds up data retrieval** by creating a lookup structure on one or more columns. It works like an index in a book — instead of scanning every page, you jump directly to the result.

---

# 🎯 Main Idea

Indexes make `SELECT` queries faster, especially on large tables. However, they slow down `INSERT`, `UPDATE`, and `DELETE` because the index must also be updated.

---

# 💡 Example

Create and drop indexes on the Persons table for LastName and FirstName columns.

---

# ✨ INDEX Syntax

```sql
-- Create an index on LastName
CREATE INDEX idx_lastName
ON Persons (LastName);

-- Drop the index
DROP INDEX idx_lastName;

-- Create an index on FirstName
CREATE INDEX idx_firstName
ON Persons (FirstName);

-- Drop the FirstName index
DROP INDEX idx_firstNameidx_firstName;
```

---

# 🧠 Result

```text
idx_lastName  → speeds up queries filtering or sorting by LastName
idx_firstName → speeds up queries filtering or sorting by FirstName
DROP INDEX    → removes the index (table data is NOT affected)
```

---

# 🔥 Important Rule

```text
Indexes speed up SELECT but slow down INSERT/UPDATE/DELETE.
Dropping an index does NOT delete table data.
PRIMARY KEY automatically creates an index.
Use indexes on columns used frequently in WHERE, JOIN, or ORDER BY.
```

---

# 🧩 INDEX Trade-offs

| Operation | With Index | Without Index |
| --------- | ---------- | ------------- |
| SELECT    | ✅ Faster  | ❌ Full scan  |
| INSERT    | ⚠️ Slower  | ✅ Faster     |
| UPDATE    | ⚠️ Slower  | ✅ Faster     |
| DELETE    | ⚠️ Slower  | ✅ Faster     |

---

# ✅ Summary

| Concept      | Meaning                                      |
| ------------ | -------------------------------------------- |
| CREATE INDEX | Creates an index to speed up queries         |
| DROP INDEX   | Removes the index (data stays)               |
| idx_name     | Naming convention for indexes (idx_column)   |

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
