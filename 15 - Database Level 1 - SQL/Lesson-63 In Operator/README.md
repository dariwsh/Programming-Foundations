# Lesson 63 - In Operator

---

# 📘 Introduction

In this lesson, we learned about:

# IN

is:

> An operator that checks whether a value matches any value in a list or subquery. It is a shorthand for multiple `OR` conditions.

---

# 🎯 Main Idea

`IN` is cleaner and often performs better than chaining multiple `OR` conditions. It works with value lists and subqueries.

---

# 💡 Example

Filter employees by multiple department IDs, first names, or use a subquery.

---

# ✨ IN Operator

```sql
SELECT * FROM Employees
WHERE DepartmentID IN (1, 2, 3, 4);

SELECT * FROM Employees
WHERE FirstName IN ('John', 'Jane', 'Doe', 'Smith');

SELECT Departments.Name FROM Departments
WHERE ID IN (SELECT DepartmentID FROM Employees WHERE MonthlySalary <= 210);

SELECT Departments.Name FROM Departments
WHERE ID NOT IN (SELECT DepartmentID FROM Employees WHERE MonthlySalary <= 210);
```

---

# 🧠 Result

```text
Returns rows where the column value matches any value in the list or subquery.
```

---

# 🔥 Important Rule

```text
Be careful with NOT IN and NULL — if the subquery returns NULL,
the entire NOT IN result set will be empty.
```

---

# 🧩 IN vs OR

| Feature | IN | Multiple ORs |
| ------- | -- | ------------ |
| Readability | Clean, compact | Verbose |
| Performance | Often better | Usually same |
| Subquery | Supported | Not supported |

---

# ✅ Summary

| Concept | Meaning |
| ------- | ------- |
| IN      | Shorthand for multiple OR conditions |
| NOT IN  | Excludes values in the list |
| Subquery | IN accepts query results |

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
