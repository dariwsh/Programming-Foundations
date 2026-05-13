# Lesson 09 - What is SQL?

---

# 📘 Introduction

In this lesson, we learned about:

# 🗄️ SQL (Structured Query Language)

SQL is the standard language used to communicate with databases.

It allows developers and database administrators to:

* Access data
* Manage data
* Create databases and tables
* Modify records
* Control permissions

---

# 🧠 What is SQL?

# SQL = Structured Query Language

SQL is a programming language specifically designed for relational databases.

### 📌 Pronunciation

* S-Q-L
* Sequel

---

# 🎯 Purpose of SQL

SQL is used to:

* Retrieve data from databases
* Insert new records
* Update existing data
* Delete records
* Create and manage databases
* Create tables and relationships

---

# 🗂️ Database Systems That Use SQL

Many database systems support SQL, including:

* Microsoft SQL Server
* Oracle
* MySQL
* PostgreSQL
* Microsoft Access

---

# ⚡ What Can You Do With SQL?

Using SQL, you can:

* Execute queries
* Retrieve data
* Insert records
* Update records
* Delete records
* Create databases
* Create tables
* Create stored procedures
* Create views
* Set permissions

---

# 💻 SQL Query Examples

---

## 🔹 Select Data

```sql id="f3m7ka"
SELECT * FROM Employees;
```

Retrieves all records from Employees table.

---

## 🔹 Select with Condition

```sql id="u2x9qd"
SELECT * FROM Employees
WHERE Salary < 1000;
```

Retrieves employees with salary less than 1000.

---

## 🔹 Multiple Conditions

```sql id="n6r4pe"
SELECT FirstName, LastName
FROM Employees
WHERE Salary < 1000 AND Gender = 'M';
```

---

## 🔹 BETWEEN Operator

```sql id="q8t1wo"
SELECT * FROM Employees
WHERE Salary BETWEEN 500 AND 1000;
```

---

## 🔹 COUNT Function

```sql id="c5v3lm"
SELECT COUNT(*) FROM Employees;
```

Counts total records.

---

## 🔹 SUM Function

```sql id="z1p7rx"
SELECT SUM(Salary) FROM Employees;
```

Calculates total salaries.

---

## 🔹 AVG Function

```sql id="b9d2yf"
SELECT AVG(Salary) FROM Employees;
```

Calculates average salary.

---

## 🔹 Delete Data

```sql id="m4k8ns"
DELETE FROM Employees
WHERE ID = 10;
```

Deletes a specific record.

---

## 🔹 Update Data

```sql id="r7h5tu"
UPDATE Employees
SET FirstName = 'Amjad'
WHERE ID = 10;
```

Updates existing data.

---

# 🏗️ Database Creation Example

```sql id="e6w2ac"
CREATE DATABASE MyDatabase;
```

Creates a new database.

---

# ❌ Delete Database

```sql id="t8n4zl"
DROP DATABASE MyDatabase;
```

Deletes the database permanently.

---

# 📋 Create Table Example

```sql id="k1q5mv"
CREATE TABLE Employees
(
   ID int,
   FirstName varchar(255),
   LastName varchar(255),
   Address varchar(255),
   City varchar(255)
);
```

Creates a new Employees table.

---

# 🧩 Types of SQL Statements

SQL commands are divided into several categories.

---

# 1️⃣ DDL

# Data Definition Language

Used to define database structure.

## Commands

* CREATE
* ALTER
* DROP
* TRUNCATE

---

# 2️⃣ DML

# Data Manipulation Language

Used to manipulate data.

## Commands

* INSERT
* UPDATE
* DELETE

---

# 3️⃣ DQL

# Data Query Language

Used to retrieve data.

## Command

* SELECT

---

# 4️⃣ DCL

# Data Control Language

Used to control permissions.

## Commands

* GRANT
* REVOKE

---

# 5️⃣ TCL

# Transaction Control Language

Used to manage transactions.

## Commands

* COMMIT
* ROLLBACK
* SAVEPOINT

---

# 🎯 Key Takeaway

* SQL is the language used to work with relational databases.
* SQL allows full control over database data and structure.
* SQL commands are organized into categories based on their purpose.

---

# ✅ Summary

* SQL stands for Structured Query Language
* SQL communicates with databases
* SQL can:

  * Retrieve data
  * Insert data
  * Update data
  * Delete data
  * Create databases and tables
* SQL has different command categories:

  * DDL
  * DML
  * DQL
  * DCL
  * TCL

---

# 👨‍💻 Author

Ahmed Darwish 🚀
