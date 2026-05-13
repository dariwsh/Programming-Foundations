# Lesson 06 - Redundancy in Databases

---

# 📘 Introduction

In this lesson, we learned about one of the biggest problems in databases:

# 🔴 Redundancy

Redundancy happens when the same data is stored multiple times inside the database.

This issue commonly appears in poorly designed databases or file systems.

---

# 🧠 What is Redundancy?

Redundancy means:

> Duplicate or repeated data inside the database.

For example:

| EmployeeID | EmployeeName | Department |
| ---------- | ------------ | ---------- |
| 1          | Ahmed        | IT         |
| 2          | Ali          | IT         |
| 3          | Sara         | IT         |

Here, the word `IT` is repeated many times.

---

# ⚠️ Problems Caused by Redundancy

Redundancy creates many serious database problems:

* More storage space wasted
* Data inconsistency
* Data corruption
* Missing or incomplete data
* Difficult maintenance
* Harder updates and modifications

---

# 💥 Data Inconsistency Example

Suppose the department name changes from:

`IT → Information Technology`

If we update some rows and forget others:

| Employee | Department             |
| -------- | ---------------------- |
| Ahmed    | IT                     |
| Ali      | Information Technology |

Now the database contains inconsistent data.

This is called:

# ❌ Data Inconsistency

---

# 🗂️ Why File Systems Have Redundancy Problems?

Traditional file systems often:

* Store duplicated information
* Lack relationships between data
* Are difficult to maintain

Because of that, databases were created to solve these issues.

---

# 🛠️ Solution: Normalization

To reduce redundancy, databases use a process called:

# ✅ Normalization

---

# 🧩 What is Normalization?

Normalization is the process of organizing database tables to:

* Reduce duplicated data
* Improve data integrity
* Make data easier to maintain
* Create proper relationships between tables

---

# 💡 Normalization Example

Instead of repeating department names:

## Employees Table

| ID | Name  | DepartmentID |
| -- | ----- | ------------ |
| 1  | Ahmed | 1            |
| 2  | Ali   | 1            |

## Departments Table

| DepartmentID | DepartmentName |
| ------------ | -------------- |
| 1            | IT             |

Now the department name exists only once.

This reduces redundancy.

---

# 🔗 Benefits of Normalization

* Less duplicated data
* Better organization
* Easier updates
* Better consistency
* Improved database integrity
* Smaller database size

---

# 🎯 Key Takeaway

* Redundancy = Duplicate data
* Duplicate data causes database problems
* Normalization helps reduce redundancy
* Good database design improves performance and integrity

---

# ✅ Summary

* Redundancy means repeated data
* It wastes storage space
* It may cause inconsistent data
* Databases use normalization to reduce redundancy
* Relationships between tables help organize data correctly

---

# 👨‍💻 Author

Ahmed Darwish 🚀
