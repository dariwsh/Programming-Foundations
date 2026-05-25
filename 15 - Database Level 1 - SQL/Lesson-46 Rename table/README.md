# Lesson 46 - SQL Rename Table

## 📘 Introduction

In this lesson, we learned about:

✏️ Renaming Tables in a Database

How to change the name of an existing table in a database. Just like renaming columns, the method differs between standard SQL databases and Microsoft SQL Server.

---

# 🌐 Rename Table (Most Databases)

In most database management systems (like MySQL, PostgreSQL, Oracle, and SQLite), we can rename a table using the `ALTER TABLE` command with the `RENAME TO` clause.

### Syntax
```sql
ALTER TABLE old_table_name
RENAME TO new_table_name;
```

### Example
```sql
ALTER TABLE Employees
RENAME TO Staff;
```

> [!NOTE]
> Here, the SQL command changes the table name from `Employees` to `Staff`.

---

# 🖥️ Rename Table (SQL Server)

In Microsoft SQL Server, you cannot use the `ALTER TABLE` statement to rename a table. Instead, you must use the system stored procedure `sp_rename`.

> [!WARNING]
> **Microsoft Recommendation:**
> Renaming a table will automatically generate a warning in SQL Server because it might break existing scripts, views, stored procedures, or applications that reference the old table name. Use it with caution.
> Also, when renaming a table, you must only specify the new name for the second parameter (without the schema prefix like `dbo.`).

### Syntax
The syntax to rename a table in SQL Server (Transact-SQL) is:

```sql
EXEC sp_rename 'old_table_name', 'new_table_name';
```

---

# 💡 Complete Example (SQL Server)

Here is a complete, step-by-step example showing how to create a table, insert sample data, rename the table using `sp_rename`, and query the renamed table:

```sql
-- 1. Create a table
CREATE TABLE Employees (
    ID INT PRIMARY KEY,
    FullName NVARCHAR(50),
    Gender NVARCHAR(10)
);

-- 2. Insert sample data
INSERT INTO Employees (ID, FullName, Gender)
VALUES 
(1, 'Ahmed Darwish', 'Male'),
(2, 'Jane Doe', 'Female');

-- 3. Rename the table from Employees to Staff
EXEC sp_rename 'Employees', 'Staff';

-- 4. Verify the rename by querying the new table
SELECT ID, FullName, Gender 
FROM Staff;

-- (Querying the old table 'Employees' will now result in an error)
-- SELECT * FROM Employees;
```

---

# ⚠️ Important Considerations & Best Practices

1. **Broken References:** Renaming a table does not automatically update references to that table in views, stored procedures, triggers, or application code. You must manually locate and update those references to avoid errors.
2. **Schema Prefix:** In SQL Server, if the table is in a specific schema (e.g. `dbo.Employees`), specify it in the first parameter:
   `EXEC sp_rename 'dbo.Employees', 'Staff';`
   Do not include the schema in the second parameter (`'dbo.Staff'`), otherwise SQL Server will rename it to `dbo.dbo.Staff` or fail.
3. **Permissions:** The user must have `ALTER` permission on the table to rename it.

---

# 👨‍💻 Author

Ahmed Darwish 🚀
