# Lesson 38 - Switch Database

## 📘 Introduction

In this lesson, we learned about:

🔄 Switching Between Databases

How to switch from one database to another in SQL.

---

# 🧠 What is Switch Database?

Switching Database happens when:

You need to change the active database context to work with different database.

---

# 🎯 Main Idea

One connection can work with multiple databases by switching between them.

Example:

- Switch from CompanyDB to SalesDB
- Switch from StudentDB to EmployeeDB

---

# 💡 Example

## Before and After

| Step | Database | Status |
|------|----------|--------|
| 1    | CompanyDB | Active |
| 2    | SalesDB | Switched |
| 3    | CompanyDB | Back |

---

# 🧠 Explanation

- Initially working with CompanyDB
- Switch to SalesDB when needed
- Can switch back to CompanyDB anytime

`USE Database_Name`

switches:

The active database context

in the current session.

---

# ✨ SQL Syntax

```sql
-- Switch to a specific database
USE DatabaseName;

-- View current database
SELECT DATABASE();

-- Switch back to another database
USE AnotherDatabaseName;
```

---

# 👨‍💻 Author

Ahmed Darwish 🚀
