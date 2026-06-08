# Lesson 73 - Inner Join

---

# 📘 Introduction

In this lesson, we learned about:

# INNER JOIN

is:

> A join type that returns only the rows where there is a match in both joined tables. Rows without a match are excluded from the result.

---

# 🎯 Main Idea

`INNER JOIN` is the most common join. It returns the intersection of two tables based on the join condition. `JOIN` is equivalent to `INNER JOIN`.

---

# 💡 Example

Join `Customers` with `Orders` and `Employees` with `Departments` and `Countries`.

---

# ✨ INNER JOIN

```sql
SELECT Customers.CustomerID, Customers.Name, Orders.Amount
FROM Customers
INNER JOIN Orders
ON Customers.CustomerID = Orders.CustomerID;

SELECT Employees.ID, Employees.FirstName, Employees.LastName,
       Departments.Name AS DepartmentName
FROM Departments
INNER JOIN Employees
ON Departments.ID = Employees.DepartmentID
WHERE Departments.Name = 'IT';

SELECT Employees.ID, Employees.LastName, Employees.FirstName,
       Departments.Name AS DeptName,
       Countries.Name AS CountryName
FROM Employees
INNER JOIN Departments ON Employees.DepartmentID = Departments.ID
INNER JOIN Countries ON Employees.CountryID = Countries.ID;
```

---

# 🧠 Result

```text
ID | FirstName | LastName | DeptName | CountryName
1  | Ahmed     | Darwish  | IT       | Egypt
2  | Sara      | Ali      | HR       | USA
```

---

# 🔥 Important Rule

```text
Only matching rows from BOTH tables appear.
Unmatched rows are dropped from both sides.
Use ON to specify the join condition (FK = PK).
```

---

# 🧩 INNER JOIN vs Other Joins

| Join Type | Result |
| --------- | ------ |
| INNER JOIN | Only matched rows from both tables |
| LEFT JOIN | All rows from left, matched from right |
| RIGHT JOIN | All rows from right, matched from left |
| FULL JOIN | All rows from both tables |

---

# ✅ Summary

| Concept    | Meaning |
| ---------- | ------- |
| INNER JOIN | Returns only matching rows from both tables |
| JOIN       | Shorthand for INNER JOIN |
| ON         | Specifies the join condition |

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
