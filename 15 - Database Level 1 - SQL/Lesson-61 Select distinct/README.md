# Lesson 61 - Select Distinct

---

# 📘 Introduction

In this lesson, we learned about:

# SELECT DISTINCT

is:

> A clause that filters out duplicate rows, returning only unique values for the specified columns.

---

# 🎯 Main Idea

`DISTINCT` applies to the entire row combination, not individual columns. It removes duplicates where all selected columns match.

---

# 💡 Example

Query distinct `DepartmentID` values and distinct combinations of `FirstName` and `DepartmentID`.

---

# ✨ SELECT DISTINCT

```sql
SELECT DepartmentID FROM Employees;

SELECT DISTINCT DepartmentID FROM Employees;

SELECT FirstName, DepartmentID FROM Employees;

SELECT DISTINCT FirstName, DepartmentID FROM Employees;
```

---

# 🧠 Result

```text
Without DISTINCT: returns all rows including duplicates.
With DISTINCT:   returns only unique DepartmentIDs.
With DISTINCT on two columns: returns unique combinations.
```

---

# 🔥 Important Rule

```text
DISTINCT operates after SELECT — NULL values are considered equal
for DISTINCT purposes, so only one NULL appears in the result.
```

---

# 🧩 DISTINCT Behavior

| Scenario | Result |
| -------- | ------ |
| Single column | Unique values from that column |
| Multiple columns | Unique combinations of all columns |
| NULL handling | Only one NULL row returned |

---

# ✅ Summary

| Concept  | Meaning |
| -------- | ------- |
| DISTINCT | Removes duplicate rows from the result |
| NULL     | Treated as equal — one NULL returned |
| Multiple columns | Unique combinations evaluated |

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
