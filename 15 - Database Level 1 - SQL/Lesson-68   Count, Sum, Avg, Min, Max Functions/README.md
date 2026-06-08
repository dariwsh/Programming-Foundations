# Lesson 68 - Count, Sum, Avg, Min, Max Functions

---

# 📘 Introduction

In this lesson, we learned about:

# Aggregate Functions

are:

> Functions that perform calculations on a set of values and return a single summary value. The five standard aggregates are `COUNT`, `SUM`, `AVG`, `MIN`, and `MAX`.

---

# 🎯 Main Idea

Aggregate functions ignore NULL values (except `COUNT(*)`). They are often used with `GROUP BY` to produce per-group summaries.

---

# 💡 Example

Calculate statistics on the `MonthlySalary` column for all employees and for specific departments.

---

# ✨ Aggregate Functions

```sql
SELECT
    TotalCount = COUNT(MonthlySalary),
    TotalSum = SUM(MonthlySalary),
    Average = AVG(MonthlySalary),
    Min = MIN(MonthlySalary),
    Max = MAX(MonthlySalary),
    ResignedEmployees = COUNT(ExitDate)
FROM Employees;
```

```sql
SELECT
    TotalCount = COUNT(MonthlySalary),
    TotalSum = SUM(MonthlySalary),
    Average = AVG(MonthlySalary),
    Min = MIN(MonthlySalary),
    Max = MAX(MonthlySalary)
FROM Employees
WHERE DepartmentID = 1;
```

---

# 🧠 Result

```text
TotalCount | TotalSum | Average | Min  | Max
100        | 500000   | 5000    | 1500 | 12000
```

---

# 🔥 Important Rule

```text
Aggregate functions IGNORE NULL values.
COUNT(*) counts all rows including NULLs.
COUNT(column) counts only non-NULL values.
```

---

# 🧩 Aggregate Functions

| Function | Returns | NULL Handling |
| -------- | ------- | ------------- |
| COUNT    | Number of non-NULL values | Ignores NULL |
| SUM      | Total of numeric column | Ignores NULL |
| AVG      | Arithmetic mean | Ignores NULL |
| MIN      | Smallest value | Ignores NULL |
| MAX      | Largest value | Ignores NULL |

---

# ✅ Summary

| Concept | Meaning |
| ------- | ------- |
| COUNT   | Counts non-NULL values |
| SUM     | Adds up numeric values |
| AVG     | Calculates average |
| MIN     | Finds minimum value |
| MAX     | Finds maximum value |

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
