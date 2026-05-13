# Lesson 08 - Constraints in Databases

---

# 📘 Introduction

In this lesson, we learned about:

# 🔒 Constraints

Constraints are rules applied to database tables and columns to protect data integrity and ensure that the stored data is valid and consistent.

---

# 🧠 What are Constraints?

Constraints are conditions or rules enforced on data inside the database.

They help databases:

* Prevent invalid data
* Maintain consistency
* Protect data integrity
* Reduce errors
* Organize data correctly

Constraints can be applied to:

* Individual columns
* Entire tables

---

# 🎯 Why Constraints are Important?

Without constraints:

* Duplicate data may appear
* Invalid data may be inserted
* Relationships between tables may break
* Data becomes unreliable

Constraints make the database:

* More secure
* More accurate
* Easier to manage

---

# 🔑 Types of Constraints

---

# 1️⃣ Primary Key Constraint

The **Primary Key Constraint** ensures that each row in a table is uniquely identified.

### 📌 Rules

* Must be unique
* Cannot contain NULL
* No duplicate values allowed

---

## 💡 Example

| EmployeeID | Name  |
| ---------- | ----- |
| 1          | Ahmed |
| 2          | Ali   |

`EmployeeID` is the Primary Key.

---

# 2️⃣ Foreign Key Constraint

The **Foreign Key Constraint** creates a relationship between two tables.

It ensures that values in one table exist in another table.

---

## 💡 Example

## Departments Table

| DepartmentID |
| ------------ |
| 1            |
| 2            |

## Employees Table

| Employee | DepartmentID |
| -------- | ------------ |
| Ahmed    | 1            |

The employee cannot have a department that does not exist.

---

# 3️⃣ Unique Constraint

The **Unique Constraint** ensures that values in a column are unique across all rows.

### 📌 Difference from Primary Key

* Unique allows NULL
* Primary Key does NOT allow NULL

---

## 💡 Example

| Email                                     |
| ----------------------------------------- |
| [ahmed@gmail.com](mailto:ahmed@gmail.com) |
| [ali@gmail.com](mailto:ali@gmail.com)     |

Duplicate emails are not allowed.

---

# 4️⃣ Not Null Constraint

The **Not Null Constraint** prevents empty values.

A column with this constraint must always contain data.

---

## 💡 Example

| Name   |
| ------ |
| Ahmed  |
| NULL ❌ |

NULL values are not allowed.

---

# 5️⃣ Check Constraint

The **Check Constraint** ensures that data satisfies a specific condition.

---

## 💡 Example

```sql
Salary > 0
```

Negative salaries are rejected.

---

# ⚔️ Primary Key vs Unique Constraint

| Primary Key                 | Unique Constraint                   |
| --------------------------- | ----------------------------------- |
| Must be unique              | Must be unique                      |
| Does NOT allow NULL         | Allows NULL                         |
| One primary key per table   | Multiple unique constraints allowed |
| Used for row identification | Used to prevent duplicates          |

---

# 🧠 Interview Question

# ❓ What is the difference between Primary Key and Unique Constraint?

### ✅ Answer

* Both enforce uniqueness
* Primary Key does not allow NULL values
* Unique Constraint allows NULL values

---

# 🛠️ Real-World Example

## User Registration System

| Column   | Constraint        |
| -------- | ----------------- |
| UserID   | Primary Key       |
| Email    | Unique            |
| Password | Not Null          |
| Age      | Check (Age >= 18) |

Constraints help keep the system safe and accurate.

---

# 🎯 Key Takeaway

* Constraints protect database integrity
* They prevent invalid and duplicate data
* Primary Key and Foreign Key are essential for relationships
* Constraints make databases more reliable

---

# ✅ Summary

* Constraints are rules applied to database data
* They help maintain accuracy and consistency
* Main constraints:

  * Primary Key
  * Foreign Key
  * Unique
  * Not Null
  * Check
* Constraints are critical in professional database design

---

# 👨‍💻 Author

Ahmed Darwish 🚀
