# Lesson 65 - Select Top Statement

---

# 📘 Introduction

In this lesson, we learned about:

# SELECT TOP

is:

> A clause (SQL Server specific) that limits the number or percentage of rows returned in a query result set.

---

# 🎯 Main Idea

`SELECT TOP` is placed right after `SELECT`. Use with `ORDER BY` to get meaningful "top" results. Supports fixed number or percentage.

---

# 💡 Example

Get top 3 employees, top 10%, and top 3 distinct salaries.

---

# ✨ SELECT TOP

```sql
SELECT TOP 3 * FROM Employees;

SELECT TOP 10 PERCENT * FROM Employees;

SELECT DISTINCT TOP 3 MonthlySalary FROM Employees
ORDER BY MonthlySalary DESC;

SELECT ID, FirstName, LastName, MonthlySalary FROM Employees
WHERE MonthlySalary IN (
    SELECT DISTINCT TOP 3 MonthlySalary FROM Employees
    ORDER BY MonthlySalary DESC
)
ORDER BY MonthlySalary DESC;
```

---

# 🧠 Result

```text
TOP 3:    Returns the first 3 rows.
TOP 10%:  Returns approximately 10% of rows.
TOP 3 salaries: Returns employees with the 3 highest unique salaries.
```

---

# 🔥 Important Rule

```text
Without ORDER BY, TOP returns an arbitrary set of rows.
Always use ORDER BY to get deterministic "top" results.
```

---

# 🧩 TOP Variations

| Form | Description |
| ---- | ----------- |
| TOP n | Fixed number of rows |
| TOP n PERCENT | Percentage of rows |
| WITH TIES | Includes rows matching the last value |

---

# ✅ Summary

| Concept       | Meaning |
| ------------- | ------- |
| SELECT TOP    | Limits rows returned |
| PERCENT       | Returns a percentage of rows |
| WITH TIES     | Includes ties with the last value |

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
