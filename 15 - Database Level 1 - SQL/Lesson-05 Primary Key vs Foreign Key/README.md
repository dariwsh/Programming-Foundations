# Lesson 05 - Primary Key vs Foreign Key

---

# 📘 Introduction

In this lesson, we learned one of the most important concepts in relational databases:

* **Primary Key**
* **Foreign Key**

These keys are used to organize tables and create relationships between data inside the database.

---

# 🗄️ Relational Database Concept

In RDBMS (Relational Database Management System):

* Data is stored inside tables
* Tables contain rows and columns
* Tables can be connected together using relationships

### 📌 Important Terms

| Term           | Meaning            |
| -------------- | ------------------ |
| Table          | Collection of data |
| Row / Record   | Single data entry  |
| Column / Field | Attribute of data  |

---

# 🔑 What is Primary Key?

A **Primary Key** is a column (or set of columns) used to uniquely identify each record in a table.

### 📌 Main Features

* Unique for every row
* Cannot contain NULL
* Must not be duplicated
* Should remain stable
* Each table should have one Primary Key

---

# 💡 Example of Primary Key

## Employees Table

| ID | FirstName | Salary |
| -- | --------- | ------ |
| 1  | Ahmed     | 5000   |
| 2  | Ali       | 3000   |
| 3  | Sara      | 4000   |

### ✅ Here:

`ID` is the **Primary Key** because every employee has a unique ID.

---

# 🔗 What is Foreign Key?

A **Foreign Key** is a column in one table that refers to the Primary Key in another table.

It is used to create relationships between tables.

---

# 💡 Example of Foreign Key

## Departments Table

| DepartmentID | Name |
| ------------ | ---- |
| 1            | IT   |
| 2            | HR   |

## Employees Table

| ID | Name  | DepartmentID |
| -- | ----- | ------------ |
| 1  | Ahmed | 1            |
| 2  | Ali   | 2            |

### ✅ Here:

`DepartmentID` in Employees table is a **Foreign Key** because it references `DepartmentID` in Departments table.

---

# 🎯 Why Foreign Keys are Important?

Foreign Keys help:

* Connect tables together
* Prevent invalid data
* Maintain data integrity
* Organize database relationships

---

# ⚔️ Difference Between Primary Key and Foreign Key

| Primary Key                 | Foreign Key                         |
| --------------------------- | ----------------------------------- |
| Uniquely identifies records | Creates relationship between tables |
| Must be unique              | Can contain duplicate values        |
| Cannot be NULL              | Can be NULL                         |
| Exists in same table        | References another table            |
| One per table usually       | Multiple foreign keys allowed       |

---

# 🧠 Real-World Example

### 🏫 School Database

## Students Table

| StudentID | Name  |
| --------- | ----- |
| 1         | Ahmed |
| 2         | Sara  |

## Courses Table

| CourseID | CourseName |
| -------- | ---------- |
| 1        | SQL        |
| 2        | C++        |

## Enrollments Table

| StudentID | CourseID |
| --------- | -------- |
| 1         | 2        |
| 2         | 1        |

### 📌 Explanation

* `StudentID` in Students table → Primary Key
* `CourseID` in Courses table → Primary Key
* `StudentID` and `CourseID` in Enrollments table → Foreign Keys

---

# ✅ Summary

* Primary Key uniquely identifies each record
* Foreign Key connects tables together
* Primary Key must be unique
* Foreign Key references another table
* Relationships are essential in relational databases

---

# 👨‍💻 Author

Ahmed Darwish 🚀
