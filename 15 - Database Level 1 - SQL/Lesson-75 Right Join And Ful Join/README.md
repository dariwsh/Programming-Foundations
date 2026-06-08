# Lesson 75 - Right Join And Full Join

---

# 📘 Introduction

In this lesson, we learned about:

# RIGHT JOIN and FULL JOIN

are:

> `RIGHT JOIN` returns all rows from the right table with matching rows from the left (NULLs where no match). `FULL JOIN` returns all rows from both tables, matching where possible.

---

# 🎯 Main Idea

`RIGHT JOIN` is the mirror of `LEFT JOIN`. `FULL JOIN` is the union of `LEFT` and `RIGHT` — all rows from both tables appear at least once.

---

# 💡 Example

Show all orders with customer info (RIGHT JOIN) and all customers and orders combined (FULL JOIN).

---

# ✨ RIGHT JOIN and FULL JOIN

```sql
SELECT Customers.Name,
       Orders.Amount
FROM Customers
RIGHT JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;

SELECT Customers.Name,
       Orders.Amount
FROM Customers
FULL OUTER JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;
```

---

# 🧠 Result

```text
Name       | Amount
Ahmed      | 500
NULL       | 200   -- order with no customer (RIGHT JOIN)
Sara       | NULL  -- customer with no order (FULL JOIN)
```

---

# 🔥 Important Rule

```text
RIGHT JOIN can always be rewritten as a LEFT JOIN by swapping table order.
FULL JOIN returns all rows from BOTH tables with NULLs for non-matches.
```

---

# 🧩 Join Comparison

| Join Type | Left Table | Right Table |
| --------- | ---------- | ----------- |
| INNER JOIN | Only matched | Only matched |
| LEFT JOIN | All rows | Only matched |
| RIGHT JOIN | Only matched | All rows |
| FULL JOIN | All rows | All rows |

---

# ✅ Summary

| Concept    | Meaning |
| ---------- | ------- |
| RIGHT JOIN | All rows from right table |
| FULL JOIN  | All rows from both tables |
| OUTER      | Optional keyword (RIGHT/FULL OUTER JOIN) |

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
