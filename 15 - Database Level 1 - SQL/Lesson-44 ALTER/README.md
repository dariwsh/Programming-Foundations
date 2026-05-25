# Lesson 44 - SQL ALTER TABLE Statement

## 📘 Introduction

In this lesson, we learned about:

🛠️ SQL ALTER TABLE Statement

How to modify the structure of an existing database table (adding columns, deleting columns, changing column datatypes, and managing constraints) without recreating the entire table.

---

# 🧠 What is SQL ALTER TABLE?

The SQL `ALTER TABLE` statement is used to add, delete, or modify columns in an existing table. It is also used to add and drop various constraints on an existing table. This is extremely useful when the database schema needs to evolve over time as requirements change, without losing existing data.

> [!IMPORTANT]
> **Data Preservation:** Unlike dropping and recreating a table, `ALTER TABLE` preserves the existing rows (data) in the table, although modifying a column's datatype or nullability can fail if existing data is incompatible.

---

# 🎯 Main Commands & Syntax

The `ALTER TABLE` statement can perform several different operations. Below is the syntax for SQL Server (T-SQL).

### 1. Add Columns (ADD)
To add a new column to a table:
```sql
ALTER TABLE table_name
ADD column_name datatype [constraints];
```

To add multiple columns at once:
```sql
ALTER TABLE table_name
ADD column1 datatype1,
    column2 datatype2;
```

### 2. Drop Columns (DROP COLUMN)
To delete an existing column from a table:
```sql
ALTER TABLE table_name
DROP COLUMN column_name;
```

To drop multiple columns:
```sql
ALTER TABLE table_name
DROP COLUMN column1, column2;
```

### 3. Modify Column Datatype or Nullability (ALTER COLUMN)
To change the datatype or nullability of an existing column:
```sql
ALTER TABLE table_name
ALTER COLUMN column_name new_datatype [NULL | NOT NULL];
```
> [!NOTE]
> In other SQL dialects (like MySQL or Oracle), this is done using `MODIFY` or `MODIFY COLUMN` instead of `ALTER COLUMN`.

### 4. Add Constraints (ADD CONSTRAINT)
To add constraints (e.g., Primary Key, Foreign Key, Unique, Check, Default) to existing columns:
```sql
-- Add CHECK Constraint
ALTER TABLE table_name
ADD CONSTRAINT constraint_name CHECK (expression);

-- Add UNIQUE Constraint
ALTER TABLE table_name
ADD CONSTRAINT constraint_name UNIQUE (column_name);

-- Add PRIMARY KEY Constraint
ALTER TABLE table_name
ADD CONSTRAINT constraint_name PRIMARY KEY (column_name);

-- Add FOREIGN KEY Constraint
ALTER TABLE table_name
ADD CONSTRAINT constraint_name FOREIGN KEY (column_name) REFERENCES referenced_table(referenced_column);

-- Add DEFAULT Constraint (SQL Server specific syntax)
ALTER TABLE table_name
ADD CONSTRAINT constraint_name DEFAULT default_value FOR column_name;
```

### 5. Drop Constraints (DROP CONSTRAINT)
To delete a constraint from a table:
```sql
ALTER TABLE table_name
DROP CONSTRAINT constraint_name;
```

---

# 💡 Examples

Let's look at a complete step-by-step example using SQL Server.

### Step 1: Create a basic table
```sql
CREATE TABLE Customers (
    CustomerID INT PRIMARY KEY,
    CustomerName NVARCHAR(100) NOT NULL
);
```

### Step 2: Add a new column
```sql
ALTER TABLE Customers
ADD Email NVARCHAR(150),
    PhoneNumber VARCHAR(20);
```

### Step 3: Modify a column's datatype
```sql
-- Change PhoneNumber from VARCHAR(20) to VARCHAR(15) and make it NOT NULL
ALTER TABLE Customers
ALTER COLUMN PhoneNumber VARCHAR(15) NOT NULL;
```

### Step 4: Add a UNIQUE constraint to the Email column
```sql
ALTER TABLE Customers
ADD CONSTRAINT UC_CustomerEmail UNIQUE (Email);
```

### Step 5: Drop a column
```sql
ALTER TABLE Customers
DROP COLUMN PhoneNumber;
```

---

# 🛡️ Renaming Columns and Tables (SQL Server T-SQL)

In SQL Server, you do **not** use `ALTER TABLE` to rename columns or tables. Instead, you use the system stored procedure `sp_rename`.

### 1. Rename a Column
```sql
EXEC sp_rename 'TableName.OldColumnName', 'NewColumnName', 'COLUMN';
```

### 2. Rename a Table
```sql
EXEC sp_rename 'OldTableName', 'NewTableName';
```

> [!WARNING]
> Renaming tables or columns will break any stored procedures, views, triggers, or applications that reference the old name.

---

# ⚠️ Important Considerations & Best Practices

1. **Existing Data Compatibility:** When changing a column's datatype (e.g., from `NVARCHAR` to `INT`), SQL Server will check if existing values can be converted. If they cannot, the alter statement will fail.
2. **Adding `NOT NULL` Columns:** You cannot add a `NOT NULL` column to a table that already contains data unless you also provide a `DEFAULT` value. Otherwise, SQL Server wouldn't know what to put in the existing rows for the new column.
3. **Dropping Columns with Constraints:** You cannot drop a column that is referenced by a constraint (like a default constraint, index, or foreign key). You must first drop the constraint/index before dropping the column.
4. **Performance on Large Tables:** Running `ALTER TABLE` on very large tables (millions of rows) can lock the table for a long time and impact production database performance.

---

# 👨‍💻 Author

Ahmed Darwish 🚀
