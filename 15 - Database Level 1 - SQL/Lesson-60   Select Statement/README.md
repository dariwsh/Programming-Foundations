# Lesson 60 - Select Statement

---

# 📘 Introduction

In this lesson, we learned about:

# SELECT

is:

> The most fundamental SQL command used to retrieve data from a database. It queries tables and returns result sets without modifying data.

---

# 🎯 Main Idea

`SELECT` is read-only. Use `*` to get all columns, or list specific column names to limit the output.

---

# 💡 Example

Query data from the `Employees`, `Departments`, and `Countries` tables.

---

# ✨ SELECT

```sql
SELECT * FROM Employees;

SELECT Employees.* FROM Employees;

SELECT ID, FirstName FROM Employees;

SELECT * FROM Departments;

SELECT * FROM Countries;
```

---

# 🧠 Result

```text
Returns all columns and rows from the specified tables.
```

---

# 🔥 Important Rule

```text
SELECT is a DML (Data Manipulation Language) command.
It NEVER modifies data — it only reads and displays it.
```

---

# 🧩 SELECT Variations

| Form | Description |
| ---- | ----------- |
| SELECT * | All columns from the table |
| SELECT table.* | All columns with table qualifier |
| SELECT col1, col2 | Specific columns only |

---

# ✅ Summary

| Concept | Meaning |
| ------- | ------- |
| SELECT  | Retrieves data from tables |
| FROM    | Specifies the source table |
| *       | Wildcard for all columns |

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
