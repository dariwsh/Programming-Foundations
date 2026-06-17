# Lesson 80 - Constraints in SQL

---

# 📘 Introduction

In this lesson, we learned about:

# SQL Constraints

are:

> **Constraints** are rules applied to table columns to enforce data integrity. They prevent invalid data from being inserted into the database.

---

# 🎯 Main Idea

Constraints are defined when creating a table (or added later with `ALTER TABLE`). They protect the data quality and enforce business rules at the database level.

---

# 💡 Example

Create tables with multiple constraints to ensure data integrity.

---

# ✨ Constraints Syntax

```sql
-- Table with multiple constraints
CREATE TABLE EmployeesTest (
    ID INT PRIMARY KEY,
    Name VARCHAR(50) NOT NULL,
    Email VARCHAR(100) UNIQUE,
    Age INT CHECK (Age >= 18),
    Status VARCHAR(20) DEFAULT 'Active'
);

-- Simple students table
CREATE TABLE Students (
    StudentID INT PRIMARY KEY,
    Name VARCHAR(100) NOT NULL,
    Age INT
);

-- Employees table with strict constraints
CREATE TABLE EmployeesTest2 (
    ID INT PRIMARY KEY,
    FirstName VARCHAR(100) NOT NULL,
    Email VARCHAR(200) UNIQUE NOT NULL,
    Salary INT CHECK (Salary > 0)
);
```

---

# 🧠 Result

```text
PRIMARY KEY  → unique row identifier, no NULLs
NOT NULL     → column cannot be empty
UNIQUE       → no duplicate values allowed
CHECK        → value must pass the condition
DEFAULT      → fallback value when none provided
```

---

# 🔥 Important Rule

```text
Constraints run automatically — you don't call them manually.
If a constraint is violated, the INSERT/UPDATE is rejected.
Multiple constraints can be applied to one column.
```

---

# 🧩 Constraint Types

| Constraint  | Purpose                                   |
| ----------- | ----------------------------------------- |
| PRIMARY KEY | Uniquely identifies each row              |
| NOT NULL    | Ensures column always has a value         |
| UNIQUE      | No two rows can have the same value       |
| CHECK       | Value must satisfy a condition            |
| DEFAULT     | Assigns a default value if none provided  |
| FOREIGN KEY | Links data between two tables             |

---

# ✅ Summary

| Concept    | Meaning                             |
| ---------- | ----------------------------------- |
| Constraint | Rule applied to a column or table   |
| Enforced   | Automatically by the database engine|
| Goal       | Maintain data integrity and quality |

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
