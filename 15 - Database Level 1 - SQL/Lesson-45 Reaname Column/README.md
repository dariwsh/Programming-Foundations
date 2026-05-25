# Lesson 45 - SQL Rename Column

## 📘 Introduction

In this lesson, we learned about:

✏️ Renaming Columns in a Database Table

How to change the name of an existing column in a database table. The method differs significantly between standard SQL databases and Microsoft SQL Server.

---

# 🌐 Rename Column in a Table (Most Databases)

In most database management systems (like MySQL, PostgreSQL, Oracle, and SQLite), we can rename columns in a table using the `ALTER TABLE` command with the `RENAME COLUMN` clause.

### Syntax
```sql
ALTER TABLE table_name
RENAME COLUMN old_column_name TO new_column_name;
```

### Example
```sql
ALTER TABLE Employees
RENAME COLUMN Gendor TO Gender;
```

> [!NOTE]
> Here, the SQL command changes the column name of `Gendor` to `Gender` in the `Employees` table.

---

# 🖥️ Rename Column in a Table (SQL Server)

You cannot use the `ALTER TABLE` statement in SQL Server to rename a column in a table. Instead, you must use the system stored procedure `sp_rename`.

> [!WARNING]
> **Microsoft Recommendation:**
> Microsoft recommends that you drop and recreate the table so that scripts and stored procedures are not broken, rather than renaming columns. Use `sp_rename` with caution in production systems.

### Syntax
The syntax to rename a column in an existing table in SQL Server (Transact-SQL) is:

```sql
EXEC sp_rename 'table_name.old_column_name', 'new_column_name', 'COLUMN';
```

---

# 💡 Complete Example (SQL Server)

Here is a complete, step-by-step example showing how to create a table, insert sample data, rename a column using `sp_rename`, and query the results:

```sql
-- 1. Create a table
CREATE TABLE Employees (
    ID INT PRIMARY KEY,
    FullName NVARCHAR(50),
    Gendor NVARCHAR(10) -- Notice the typo "Gendor"
);

-- 2. Insert sample data
INSERT INTO Employees (ID, FullName, Gendor)
VALUES 
(1, 'Ahmed Darwish', 'Male'),
(2, 'Jane Doe', 'Female');

-- 3. Correct the column name using sp_rename
EXEC sp_rename 'Employees.Gendor', 'Gender', 'COLUMN';

-- 4. Verify the rename
SELECT ID, FullName, Gender 
FROM Employees;
```

---

# ⚠️ Important Considerations & Best Practices

1. **Dependent Objects:** Renaming a column will not automatically rename references to that column in views, stored procedures, triggers, or application code. You must manually locate and update those references.
2. **Permissions:** The user must have `ALTER` permission on the table to rename its columns.

---

# 👨‍💻 Author

Ahmed Darwish 🚀
