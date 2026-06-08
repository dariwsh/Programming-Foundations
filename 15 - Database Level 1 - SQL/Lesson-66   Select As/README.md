# Lesson 66 - Select As

---

# 📘 Introduction

In this lesson, we learned about:

# AS (Aliases)

is:

> A keyword that creates a temporary name for a column or table in the result set. It does not change the actual column name in the database.

---

# 🎯 Main Idea

Aliases improve readability. Use them for calculated columns, concatenations, function results, or to shorten table names in joins.

---

# 💡 Example

Create calculated columns like `FullName`, `YearSalary`, `BonusAmount`, and `Age`.

---

# ✨ SELECT AS

```sql
SELECT ID, FirstName + ' ' + LastName AS FullName FROM Employees;

SELECT ID, FirstName, MonthlySalary,
       YearSalary = MonthlySalary * 12,
       BonusAmount = MonthlySalary * BonusPerc
FROM Employees;

SELECT ID,
       FullName = FirstName + ' ' + LastName,
       Age = DATEDIFF(YEAR, DateOfBirth, GETDATE())
FROM Employees;
```

---

# 🧠 Result

```text
ID | FullName       | MonthlySalary | YearSalary | BonusAmount
285| Ahmed Darwish  | 50000         | 600000     | 12500
```

---

# 🔥 Important Rule

```text
Aliases only affect query output — they do NOT rename columns in the table.
Both `column AS alias` and `alias = column` syntax are valid.
```

---

# 🧩 Alias Syntax

| Form | Example |
| ---- | ------- |
| AS keyword | `column AS alias` |
| = syntax | `alias = column` |
| Table alias | `FROM Employees e` |

---

# ✅ Summary

| Concept | Meaning |
| ------- | ------- |
| AS      | Creates a temporary column or table alias |
| Column alias | Renames output column for readability |
| Table alias | Shortens table name in joins |

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
