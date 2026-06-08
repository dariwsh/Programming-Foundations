# Lesson 69 - Group By

---

# 📘 Introduction

In this lesson, we learned about:

# GROUP BY

is:

> A clause that groups rows with the same values in specified columns into aggregate summary rows. It is used with aggregate functions like `COUNT`, `SUM`, `AVG`, `MIN`, `MAX`.

---

# 🎯 Main Idea

`GROUP BY` divides the result set into groups. Every column in `SELECT` must either be in `GROUP BY` or wrapped in an aggregate function.

---

# 💡 Example

Calculate aggregate statistics per department and per hire year.

---

# ✨ GROUP BY

```sql
SELECT DepartmentID,
    TotalCount = COUNT(MonthlySalary),
    TotalSum = SUM(MonthlySalary),
    Average = AVG(MonthlySalary),
    Min = MIN(MonthlySalary),
    Max = MAX(MonthlySalary)
FROM Employees
GROUP BY DepartmentID
ORDER BY DepartmentID;
```

```sql
SELECT
    Distinct_Year = YEAR(HireDate),
    HiredEmployees = COUNT(*),
    AvgSalary = AVG(MonthlySalary)
FROM Employees
GROUP BY YEAR(HireDate)
ORDER BY YEAR(HireDate);
```

---

# 🧠 Result

```text
DepartmentID | TotalCount | TotalSum | Average | Min  | Max
1            | 50         | 250000   | 5000    | 2000 | 12000
2            | 30         | 150000   | 5000    | 1500 | 10000
```

---

# 🔥 Important Rule

```text
Every column in SELECT must be in GROUP BY or used in an aggregate function.
WHERE filters rows BEFORE grouping; HAVING filters AFTER.
```

---

# 🧩 GROUP BY Rules

| Rule | Description |
| ---- | ----------- |
| SELECT columns | Must be in GROUP BY or aggregated |
| WHERE | Filters before grouping |
| HAVING | Filters after grouping |
| ORDER BY | Sorts the final grouped result |

---

# ✅ Summary

| Concept   | Meaning |
| --------- | ------- |
| GROUP BY  | Groups rows for aggregate calculations |
| Aggregates | COUNT, SUM, AVG, MIN, MAX per group |
| WHERE vs HAVING | WHERE before, HAVING after grouping |

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
