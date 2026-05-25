# Lesson 47 - SQL Modify Column

## 📘 Introduction

In this lesson, we learned about:

✏️ Modifying Columns in an Existing Database Table

How to change the data type, size, nullability, or other properties of an existing column in a database table. Modifying a column is a common database administration task, and the syntax varies depending on the Database Management System (DBMS) you use.

---

# 🌐 Modify Column (Most Databases)

Different databases use different syntax to modify an existing column's definition:

### 1. MySQL
MySQL uses the `MODIFY COLUMN` or `CHANGE COLUMN` statement.
```sql
-- Syntax to modify only the data type/constraints
ALTER TABLE table_name
MODIFY COLUMN column_name new_data_type [constraints];

-- Syntax to rename AND modify at the same time
ALTER TABLE table_name
CHANGE COLUMN old_column_name new_column_name new_data_type [constraints];
```

### 2. PostgreSQL
PostgreSQL uses the `ALTER COLUMN` statement with `TYPE` and separate commands for nullability.
```sql
-- Change data type
ALTER TABLE table_name
ALTER COLUMN column_name TYPE new_data_type;

-- Change nullability (Set to NOT NULL)
ALTER TABLE table_name
ALTER COLUMN column_name SET NOT NULL;

-- Change nullability (Set to NULL)
ALTER TABLE table_name
ALTER COLUMN column_name DROP NOT NULL;
```

### 3. Oracle
Oracle uses the `MODIFY` clause.
```sql
ALTER TABLE table_name
MODIFY column_name new_data_type [constraints];
```

---

# 🖥️ Modify Column (SQL Server)

In Microsoft SQL Server, you use the `ALTER TABLE` statement followed by the `ALTER COLUMN` clause.

### Syntax
```sql
ALTER TABLE table_name
ALTER COLUMN column_name new_data_type [NULL | NOT NULL];
```

> [!NOTE]
> When using `ALTER COLUMN` in SQL Server, you must specify both the **new data type** (with its size if applicable) and the **nullability** (`NULL` or `NOT NULL`). If you don't specify nullability, SQL Server might default it based on the database settings, which could unintentionally change a `NOT NULL` column to `NULL`.

---

# 💡 Complete Example (SQL Server)

Here is a complete, step-by-step example showing how to create a table with a column, insert sample data, modify the column's data type size and nullability, and verify the changes:

```sql
-- 1. Create a table with FirstName limited to 50 characters and NOT NULL
CREATE TABLE Emp (
    ID INT PRIMARY KEY IDENTITY(1,1),
    FirstName NVARCHAR(50) NOT NULL,
    LastName NVARCHAR(50) NOT NULL
);

-- 2. Insert sample data
INSERT INTO Emp (FirstName, LastName)
VALUES 
('Ahmed', 'Darwish'),
('Jane', 'Doe');

-- 3. Modify the FirstName column to increase its size to 100 characters and allow NULL values
ALTER TABLE dbo.Emp
ALTER COLUMN FirstName NVARCHAR(100) NULL;

-- 4. Verify that we can now insert a NULL FirstName
INSERT INTO Emp (FirstName, LastName)
VALUES 
(NULL, 'Smith');

-- 5. Query the table to view the results
SELECT ID, FirstName, LastName 
FROM Emp;
```

---

# ⚠️ Important Considerations & Best Practices

Before modifying a column in a production database, keep these critical points in mind:

1. ⚠️ **Data Truncation & Loss:** If you shrink a column (e.g., from `NVARCHAR(100)` to `NVARCHAR(50)`), any existing data that exceeds the new limit will cause the SQL statement to fail. If converting types (e.g., `NVARCHAR` to `INT`), all existing values must be compatible with the new type.
2. 🔒 **Existing Null Values:** You cannot modify a column from `NULL` to `NOT NULL` if it already contains `NULL` values in any rows. You must first update those `NULL` values to a non-null default.
3. 🔗 **Dependencies (Constraints & Indexes):** You cannot modify a column if it is:
   * Referenced by a `PRIMARY KEY` or `FOREIGN KEY` constraint.
   * Used in an `INDEX` (unless the index is dropped first).
   * Part of a `CHECK` or `UNIQUE` constraint.
   * Used in a computed/generated column definition.
   * You must drop these dependent objects, modify the column, and then recreate them.
4. ⚙️ **Performance on Large Tables:** Modifying a column's data type on a table with millions of rows can lock the table and take a significant amount of time, as SQL Server may need to rewrite the data pages on disk.

---

# 👨‍💻 Author

Ahmed Darwish 🚀
