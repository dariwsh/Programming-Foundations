# Lesson 64 - Sorting Order By

---

# 📘 Introduction

In this lesson, we learned about:

# ORDER BY

is:

> The clause that sorts the result set in ascending (`ASC`) or descending (`DESC`) order based on one or more columns.

---

# 🎯 Main Idea

`ORDER BY` is always the last clause in a query. `ASC` is the default. You can sort by multiple columns, each with its own direction.

---

# 💡 Example

Sort employees by name, salary, or multiple columns.

---

# ✨ ORDER BY

```sql
SELECT ID, FirstName, MonthlySalary FROM Employees
WHERE DepartmentID IN (1, 2, 3)
ORDER BY FirstName;

SELECT ID, FirstName, MonthlySalary FROM Employees
WHERE DepartmentID = 1
ORDER BY MonthlySalary DESC;

SELECT ID, FirstName, MonthlySalary FROM Employees
WHERE DepartmentID = 1
ORDER BY FirstName, MonthlySalary DESC;
```

---

# 🧠 Result

```text
ID  | FirstName | MonthlySalary
1   | Alice     | 5000
2   | Bob       | 6000
3   | Charlie   | 5500
...sorted according to ORDER BY clause.
```

---

# 🔥 Important Rule

```text
DESC applies only to the column it immediately follows.
ORDER BY is evaluated AFTER SELECT, WHERE, GROUP BY, and HAVING.
```

---

# 🧩 ORDER BY Directions

| Keyword | Effect |
| ------- | ------ |
| ASC     | Ascending (A-Z, 0-9) — default |
| DESC    | Descending (Z-A, 9-0) |

---

# ✅ Summary

| Concept   | Meaning |
| --------- | ------- |
| ORDER BY  | Sorts the result set |
| ASC       | Ascending order (default) |
| DESC      | Descending order |
| Multi-column | Comma-separated with individual directions |

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
