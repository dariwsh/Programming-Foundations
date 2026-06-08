# Lesson 70 - Having

---

# 📘 Introduction

In this lesson, we learned about:

# HAVING

is:

> A clause that filters groups after the `GROUP BY` has been applied. It is similar to `WHERE`, but `WHERE` filters rows before grouping while `HAVING` filters groups after aggregation.

---

# 🎯 Main Idea

Use `HAVING` when you need to filter based on the result of an aggregate function. `WHERE` cannot do this because it runs before aggregation.

---

# 💡 Example

Find departments with more than 100 employees and hire years with more than 50 hires.

---

# ✨ HAVING

```sql
SELECT DepartmentID,
    TotalCount = COUNT(MonthlySalary),
    TotalSum = SUM(MonthlySalary),
    Average = AVG(MonthlySalary)
FROM Employees
GROUP BY DepartmentID
HAVING COUNT(MonthlySalary) > 100
ORDER BY DepartmentID;
```

```sql
SELECT YEAR(HireDate),
    TotalHiredEm = COUNT(ID)
FROM Employees
GROUP BY YEAR(HireDate)
HAVING COUNT(ID) > 50
ORDER BY YEAR(HireDate);
```

---

# 🧠 Result

```text
DepartmentID | TotalCount | TotalSum | Average
1            | 150        | 750000   | 5000
3            | 120        | 600000   | 5000
```

---

# 🔥 Important Rule

```text
Execution order: WHERE → GROUP BY → HAVING → ORDER BY.
If you can filter with WHERE, do it there — it is faster.
HAVING is only for aggregate conditions.
```

---

# 🧩 WHERE vs HAVING

| Clause | When it runs | Filters |
| ------ | ------------ | ------- |
| WHERE  | Before GROUP BY | Individual rows |
| HAVING | After GROUP BY | Groups / aggregated results |

---

# ✅ Summary

| Concept | Meaning |
| ------- | ------- |
| HAVING  | Filters groups after aggregation |
| WHERE   | Filters rows before aggregation |
| Order   | WHERE → GROUP BY → HAVING → ORDER BY |

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
