# Lesson 41 - SQL CREATE TABLE Statement

## 📘 Introduction

In this lesson, we learned about:

📝 SQL CREATE TABLE Statement

A statement used to create a new table in a database to store records.

---

# 🧠 What is SQL CREATE TABLE Statement?

The SQL `CREATE TABLE` statement is used to create a new table in a database.

Syntax:
```sql
CREATE TABLE table_name (
    column1 datatype,
    column2 datatype,
    column3 datatype,
    ...
);
```

---

# 🎯 Main Idea

- The **column** parameters specify the names of the columns of the table.
- The **datatype** parameter specifies the type of data the column can hold (e.g. `varchar`, `integer`, `date`, etc.).
- **Note:** We must provide data types for each column while creating a table.

---

# 💡 Example

```sql
CREATE TABLE Employees (
    ID int NOT NULL,
    Name nvarchar(50) NOT NULL,
    Phone nvarchar(10) NULL,
    Salary smallmoney NULL,
    PRIMARY KEY (ID)
);
```

---

# 🧠 Explanation

- **ID**: An integer that cannot be `NULL` and acts as the **Primary Key** to uniquely identify each employee.
- **Name**: A variable-length Unicode string of up to 50 characters, which cannot be `NULL`.
- **Phone**: A variable-length Unicode string of up to 10 characters, which can be `NULL`.
- **Salary**: A small money type (used for currency data), which can be `NULL`.

---

# ✨ Relational Schema

```sql
Employees(
    ID PK,
    Name,
    Phone,
    Salary
)
```

---

# 👨‍💻 Author

Ahmed Darwish 🚀
