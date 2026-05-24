# Lesson 35 - What is SQL?

---

# 📘 Introduction

In this lesson, we learned about:

# 🗂️ SQL (Structured Query Language)

SQL is one of the most important languages in database management because it allows developers to communicate with, manipulate, and manage data efficiently.

---

# 🧠 What is SQL?

# SQL = Structured Query Language

* SQL is pronounced as "S-Q-L" or sometimes as "See-Quel".
* SQL is used to communicate with a database.
* SQL lets you access and manipulate databases.
* Database management systems that use SQL are: Oracle, Sybase, Microsoft SQL Server, Access, Ingres, etc.

---

# 🎯 Purpose of SQL

SQL is used to:

* Execute queries against a database
* Retrieve data from a database
* Insert records in a database
* Update records in a database
* Delete records from a database
* Create new databases
* Create new tables in a database
* Create stored procedures in a database
* Create views in a database
* Set permissions on tables, procedures, and views

---

# 🧩 What Can You Do With SQL?

SQL can perform many powerful operations:

| Capability   | Description                                      |
| ------------ | ------------------------------------------------ |
| Retrieve     | Get data from one or more tables                 |
| Insert       | Add new records to a table                       |
| Update       | Modify existing records                          |
| Delete       | Remove records from a table                      |
| Create       | Build new databases, tables, and objects         |
| Manage       | Set permissions and control access               |

---

# 📦 Examples of SQL Statements

## 💡 Data Retrieval

```sql
SELECT * FROM Employees WHERE Salary < 1000;
```

```sql
SELECT FirstName, LastName FROM Employees WHERE Salary < 1000 AND Gender='M';
```

```sql
SELECT * FROM Employees WHERE Salary BETWEEN 500 AND 1000;
```

## 💡 Aggregate Functions

```sql
SELECT COUNT(*) FROM Employees;
```

```sql
SELECT SUM(Salary) FROM Employees;
```

```sql
SELECT AVG(Salary) FROM Employees;
```

## 💡 Data Modification

```sql
DELETE FROM Employees WHERE ID=10;
```

```sql
UPDATE Employees SET FirstName = 'Amjad' WHERE ID = 10;
```

## 💡 Database & Table Creation

```sql
CREATE DATABASE MyDatabase;
```

```sql
DROP DATABASE MyDatabase;
```

```sql
CREATE TABLE Employees (
    ID int,
    FirstName varchar(255),
    LastName varchar(255),
    Address varchar(255),
    City varchar(255)
);
```

---

# 🔗 Types of SQL Statements

The **SQL language** is divided into five main categories:

| Type  | Full Name                       | Commands                        |
| ----- | ------------------------------- | ------------------------------- |
| DDL   | Data Definition Language        | CREATE, DROP, ALTER, TRUNCATE |
| DML   | Data Manipulation Language      | INSERT, UPDATE, DELETE          |
| DQL   | Data Query Language             | SELECT                          |
| DCL   | Data Control Language           | GRANT, REVOKE                   |
| TCL   | Transaction Control Language    | COMMIT, ROLLBACK, SAVEPOINT     |

---

# 🧠 Why Use SQL?

The **SQL approach** replaces traditional file-processing methods:

| Traditional File Processing | SQL Approach               |
| --------------------------- | -------------------------- |
| Write code and loops        | Simple and fast queries    |
| Slow process                | Instant results            |
| Slow performance            | Optimized execution        |
| Manual data handling        | Direct database commands   |

---

# 🚀 Advantages of SQL

* Simple and easy to learn
* Standardized language across database systems
* Powerful data retrieval and manipulation
* Efficient query processing
* Portable across different platforms
* Supports multiple users simultaneously

---

# 🧠 Key Takeaway

SQL acts as:

# The Universal Language of Databases

Just like engineers use precise specifications to build structures, developers use SQL to communicate with databases and manage data effectively.

---

# ✅ Conclusion

* SQL stands for Structured Query Language
* It is the standard language for database communication
* SQL covers data definition, manipulation, querying, and control
* It replaces complex file-processing with simple commands
* SQL is essential for any database-related development

---

# ✅ Summary

| Concept | Meaning                           |
| ------- | --------------------------------- |
| SQL     | Structured Query Language         |
| DDL     | Data Definition Language          |
| DML     | Data Manipulation Language        |
| DQL     | Data Query Language               |
| DCL     | Data Control Language             |
| TCL     | Transaction Control Language      |
| SELECT  | Retrieve data from tables         |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
