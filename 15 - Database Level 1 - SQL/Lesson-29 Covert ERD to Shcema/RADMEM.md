# Lesson 29 - Self Referential to Relational Schema

## 📘 Introduction

In this lesson, we learned about:

🔄 Self Referential Relationship

A relationship where a table references itself.

---

# 🧠 What is Self Referential Relationship?

A Self Referential Relationship happens when:

A Foreign Key inside a table references the Primary Key in the same table.

---

# 🎯 Main Idea

One record can be related to another record inside the same table.

Example:

- Employee manages Employee
- Category contains Subcategory

---

# 💡 Example

## Employees Table

| EmpID | Name  | Salary | ManagerID |
|------|-------|--------|-----------|
| 1    | Ahmed | 5000   | NULL      |
| 2    | Ali   | 3000   | 1         |
| 3    | Omar  | 2500   | 1         |

---

# 🧠 Explanation

- Ahmed is a manager
- Ali works under Ahmed
- Omar works under Ahmed

`ManagerID`

references:

`EmpID`

inside the same table.

---

# ✨ Relational Schema

```sql
Employees(
    EmpID PK,
    Name,
    Salary,
    ManagerID FK
)



#

---

# 👨‍💻 Author

Ahmed Darwish 🚀