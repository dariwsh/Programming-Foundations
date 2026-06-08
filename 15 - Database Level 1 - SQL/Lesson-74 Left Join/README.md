# Lesson 74 - Left Join

---

# 📘 Introduction

In this lesson, we learned about:

# LEFT JOIN

is:

> A join type that returns all rows from the left table, and the matching rows from the right table. If there is no match, NULLs are returned for the right table columns.

---

# 🎯 Main Idea

`LEFT JOIN` preserves all rows from the left (first) table. Use it when you want all records from the primary table regardless of matches in the secondary table.

---

# 💡 Example

Show all customers, including those who have not placed any orders.

---

# ✨ LEFT JOIN

```sql
SELECT Customers.Name,
       Orders.Amount
FROM Customers
LEFT JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;

SELECT Customers.Name,
       Orders.Amount
FROM Customers
LEFT JOIN Orders
ON Customers.CustomerID = Orders.CustomerID
WHERE Orders.CustomerID IS NULL;
```

---

# 🧠 Result

```text
Name       | Amount
Ahmed      | 500
Sara       | NULL   -- no orders placed
John       | 300
```

---

# 🔥 Important Rule

```text
LEFT JOIN returns ALL rows from the left table.
Non-matching right table columns show NULL.
Use WHERE right_table_column IS NULL to find unmatched rows.
```

---

# 🧩 LEFT JOIN vs INNER JOIN

| Feature | LEFT JOIN | INNER JOIN |
| ------- | --------- | ---------- |
| Left rows | Always returned | Only matched |
| Right no match | NULLs returned | Row excluded |
| Common use | "All customers, even without orders" | "Customers who have orders" |

---

# ✅ Summary

| Concept   | Meaning |
| --------- | ------- |
| LEFT JOIN | All rows from left, matched from right |
| OUTER     | Optional keyword (LEFT OUTER JOIN = LEFT JOIN) |
| IS NULL   | Finds non-matching rows in right table |

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
