# Lesson 39 - DROP

## 📘 Introduction

In this lesson, we learned about:

🗑️ DROP Statement

How to delete/drop databases and tables in SQL.

---

# 🧠 What is DROP?

DROP is used when:

You need to permanently delete an entire database or table from the SQL Server.

---

# 🎯 Main Idea

DROP statement removes the entire database or table structure including its data.

Example:

- Drop CompanyDB database completely
- Drop EmployeeTable from a database
- Drop StudentDB if it exists

---

# 💡 Example

## Before and After

| Step | Object | Status |
|------|--------|--------|
| 1    | DB1 | Exists |
| 2    | DB1 | Dropped |
| 3    | Database | Deleted |

---

# 🧠 Explanation

- DROP DATABASE removes the entire database
- DROP TABLE removes the entire table
- All data is permanently deleted
- The structure is also removed

`DROP DATABASE Database_Name`

removes:

The entire database and all its contents.

---

# ✨ SQL Syntax

```sql
-- Drop a database
DROP DATABASE DatabaseName;

-- Drop multiple databases
DROP DATABASE Database1, Database2, Database3;

-- Drop a table
DROP TABLE TableName;

-- Drop multiple tables
DROP TABLE Table1, Table2, Table3;
```

---

# 👨‍💻 Author

Ahmed Darwish 🚀
