# Lesson 36 - SQL CREATE DATABASE Statement

---

# 📘 Introduction

In this lesson, we learned about:

# 🔗 Creating Databases with SQL

The CREATE DATABASE statement is one of the fundamental SQL commands that allows us to create new databases for storing and managing data.

It helps database administrators and developers:

* Create new databases for projects
* Organize data in separate database structures
* Prepare the environment for creating tables

---

# 🧠 What is a CREATE DATABASE Statement?

# CREATE DATABASE = Create New Database

The CREATE DATABASE statement is used to:

> Create a new database in a SQL database management system where you can store tables, views, and other database objects.

Before we can work with database tables, we must create a database first.

---

# 💡 Basic Syntax

```sql
CREATE DATABASE database_name;
```

---

# 💡 Example

## Creating a Simple Database

```sql
CREATE DATABASE Koko;
```

### Meaning

* This SQL command creates a new database named **Koko**
* The database is now ready to contain tables and other objects

---

# 🧩 Key Components

| Component | Meaning              |
| --------- | -------------------- |
| CREATE    | SQL keyword to create |
| DATABASE  | Object type to create |
| database_name | Name of new database |
| ;         | Statement terminator  |

---

# 💡 More Examples

## Example 1: Company Database

```sql
CREATE DATABASE CompanyDB;
```

* Creates a database for storing company information

## Example 2: School Database

```sql
CREATE DATABASE SchoolDB;
```

* Creates a database for storing school data

## Example 3: Library Database

```sql
CREATE DATABASE LibraryDB;
```

* Creates a database for managing library resources

---

# 🎯 Important Rules for Database Names

| Rule | Description |
| ---- | ----------- |
| No Spaces | Use underscores or camelCase: `My_Database` or `MyDatabase` |
| Unique | Database name must be unique in the server |
| Case Sensitive | Depends on the SQL system (MySQL is case-insensitive on Windows) |
| Alphanumeric | Use letters, numbers, and underscores |
| Length Limit | Most systems have a 64-character limit |

---

# 🧠 Common Naming Conventions

```text
✓ StudentDB
✓ employee_database
✓ CRM_System
✓ inventory_v1
✗ My Database (contains space)
✗ database-name (contains hyphen)
✗ 2database (starts with number - often avoided)
```

---

# 💡 Real-World Example

## E-Commerce Project

```sql
CREATE DATABASE ECommerceDB;
```

After creating the database, you can create tables for:

* Products
* Customers
* Orders
* Payments

---

# 📊 Process Flow

```text
1. Create Database
        ↓
2. Select Database (USE DatabaseName;)
        ↓
3. Create Tables
        ↓
4. Insert Data
        ↓
5. Query Data
```

---

# ⚠️ Common Errors and Solutions

| Error | Cause | Solution |
| ----- | ----- | -------- |
| Database already exists | Name conflict | Use a different name or DROP existing database first |
| Syntax Error | Missing semicolon or typo | Check spelling and add semicolon |
| Invalid characters | Special characters in name | Use only alphanumeric and underscores |

---

# 🧠 Key Differences

| Task | Command |
| ---- | ------- |
| Create Database | `CREATE DATABASE name;` |
| Select Database | `USE database_name;` |
| Show Databases | `SHOW DATABASES;` |
| Drop Database | `DROP DATABASE name;` |

---

# 💡 Complete Example Workflow

```sql
-- Step 1: Create a new database
CREATE DATABASE StudentRecordsDB;

-- Step 2: Select the database to use
USE StudentRecordsDB;

-- Step 3: Now you can create tables
CREATE TABLE Students (
    StudentID INT,
    StudentName VARCHAR(100)
);
```

---

# 🎯 Why CREATE DATABASE is Important?

It enables database administrators to:

* Organize data logically
* Separate different applications' data
* Manage multiple projects efficiently
* Provide a container for all database objects

---

# 🧠 Key Takeaway

* The CREATE DATABASE statement creates a new database
* Database names should follow naming conventions
* A database must exist before creating tables
* Each database can contain multiple tables and objects

---

# ✅ Summary

| Concept | Description |
| ------- | ----------- |
| CREATE DATABASE | SQL command to create new database |
| Syntax | `CREATE DATABASE database_name;` |
| Example | `CREATE DATABASE Koko;` |
| Purpose | Prepare environment for storing data |
| Next Step | Use `USE` statement to select database |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
