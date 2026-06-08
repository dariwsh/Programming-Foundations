# Lesson 62 - Where Statement + AND, OR, NOT

---

# 📘 Introduction

In this lesson, we learned about:

# WHERE

is:

> The clause that filters rows based on specified conditions. Combine multiple conditions using `AND`, `OR`, and `NOT` logical operators.

---

# 🎯 Main Idea

`WHERE` filters data before grouping. Use logical operators to build complex filters: `AND` (both true), `OR` (either true), `NOT` (negation).

---

# 💡 Example

Filter employees by gender, salary, country, and exit date.

---

# ✨ WHERE with Operators

```sql
SELECT * FROM Employees WHERE Gendor = 'f';

SELECT * FROM Employees WHERE MonthlySalary < 500;

SELECT * FROM Employees
WHERE NOT MonthlySalary < 500 AND Gendor = 'f';

SELECT * FROM Employees WHERE CountryID <> 1;

SELECT * FROM Employees WHERE NOT ExitDate IS NULL;

SELECT * FROM Employees WHERE ExitDate IS NULL;
```

---

# 🧠 Result

```text
Returns only rows matching the filter conditions.
```

---

# 🔥 Important Rule

```text
Operator precedence: NOT > AND > OR.
Use parentheses () to explicitly control evaluation order.
Use IS NULL / IS NOT NULL — never = NULL.
```

---

# 🧩 Logical Operators

| Operator | Precedence | Meaning |
| -------- | ---------- | ------- |
| NOT      | 1 (highest) | Negates a condition |
| AND      | 2          | Both conditions must be true |
| OR       | 3 (lowest) | Either condition can be true |

---

# ✅ Summary

| Concept | Meaning |
| ------- | ------- |
| WHERE   | Filters rows by condition |
| AND     | All conditions must be true |
| OR      | At least one condition must be true |
| NOT     | Reverses a condition |
| IS NULL | Checks for NULL values |

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
