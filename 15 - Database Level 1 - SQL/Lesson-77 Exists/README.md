# Lesson 77 - EXISTS

---

# 📘 Introduction

In this lesson, we learned about:

# EXISTS

is:

> `EXISTS` is a SQL operator used in a `WHERE` clause to check if a subquery returns **any rows**. It returns `TRUE` if the subquery has at least one result.

---

# 🎯 Main Idea

`EXISTS` is used to filter rows in the outer query based on whether related data exists in another table. It's a **correlated subquery** — it runs once per row of the outer query.

---

# 💡 Example

Get all customers who have at least one order with Amount < 600.

---

# ✨ EXISTS Syntax

```sql
-- Basic EXISTS check
SELECT X = 'yes'
WHERE EXISTS (
    SELECT * FROM Orders
    WHERE CustomerID = 3 AND Amount < 600
)

-- Correlated EXISTS
SELECT * FROM Customers T1
WHERE EXISTS (
    SELECT * FROM Orders
    WHERE CustomerID = T1.CustomerID AND Amount < 600
)

-- Optimized with TOP 1
SELECT * FROM Customers T1
WHERE EXISTS (
    SELECT TOP 1 * FROM Orders
    WHERE CustomerID = T1.CustomerID AND Amount < 600
)

-- NOT EXISTS — customers with no orders
SELECT * FROM Customers C4
WHERE NOT EXISTS (
    SELECT TOP 1 * FROM Orders
    WHERE Orders.CustomerID = C4.CustomerID
)
```

---

# 🧠 Result

```text
EXISTS  → returns customers who have matching orders
NOT EXISTS → returns customers who have NO orders at all
```

---

# 🔥 Important Rule

```text
EXISTS only cares if ANY row is returned — not what it returns.
Using TOP 1 with EXISTS improves performance (stops at first match).
NOT EXISTS is useful to find "orphan" rows with no related data.
```

---

# 🧩 EXISTS vs IN

| Feature        | EXISTS                     | IN                        |
| -------------- | -------------------------- | ------------------------- |
| Works with     | Correlated subqueries      | Fixed value lists         |
| Performance    | ✅ Faster for large data   | ⚠️ Slower for large data  |
| NULLs handling | ✅ Safe                    | ⚠️ Can cause issues       |
| Stops early    | ✅ Yes (first match)       | ❌ No                     |

---

# ✅ Summary

| Concept    | Meaning                                 |
| ---------- | --------------------------------------- |
| EXISTS     | TRUE if subquery returns any rows       |
| NOT EXISTS | TRUE if subquery returns zero rows      |
| TOP 1      | Optimization — stops at first match     |

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
