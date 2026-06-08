# Lesson 67 - Between Operator

---

# 📘 Introduction

In this lesson, we learned about:

# BETWEEN

is:

> An operator that filters results within a specific range, inclusive of the boundary values. It works with numbers, dates, and text.

---

# 🎯 Main Idea

`BETWEEN` is a cleaner alternative to `>= AND <=`. It is inclusive — both boundary values are included in the result.

---

# 💡 Example

Find employees with monthly salary between 500 and 1000.

---

# ✨ BETWEEN

```sql
SELECT * FROM Employees
WHERE MonthlySalary BETWEEN 500 AND 1000;
```

Equivalent to:

```sql
SELECT * FROM Employees
WHERE (MonthlySalary >= 500 AND MonthlySalary <= 1000);
```

---

# 🧠 Result

```text
Returns all employees with salary from 500 to 1000 (inclusive).
```

---

# 🔥 Important Rule

```text
BETWEEN is INCLUSIVE — it includes both the lower and upper boundary values.
Use NOT BETWEEN to exclude a range.
```

---

# 🧩 BETWEEN with Data Types

| Type   | Example |
| ------ | ------- |
| Number | `BETWEEN 500 AND 1000` |
| Date   | `BETWEEN '2020-01-01' AND '2020-12-31'` |
| String | `BETWEEN 'A' AND 'C'` |

---

# ✅ Summary

| Concept   | Meaning |
| --------- | ------- |
| BETWEEN   | Inclusive range filter |
| NOT BETWEEN | Excludes a range |
| Boundaries | Both values are included |

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
