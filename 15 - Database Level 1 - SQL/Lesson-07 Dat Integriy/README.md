# Lesson 07 - What is Data Integrity?

---

# 📘 Introduction

In this lesson, we learned about:

# 🔐 Data Integrity

Data Integrity is one of the most important concepts in databases because it ensures that data remains:

* Accurate
* Consistent
* Reliable
* Correct

throughout its entire lifecycle.

---

# 🧠 What is Data Integrity?

Data Integrity means:

> The accuracy, consistency, and reliability of data inside the database.

It ensures that data remains valid from the moment it is created until it is deleted.

---

# 💥 Examples of Bad Data Integrity

## ❌ Invalid Salary

| Employee | Salary |
| -------- | ------ |
| Ahmed    | -400   |

Negative salary is invalid data.

---

## ❌ Corrupted Name

| Employee   |
| ---------- |
| U@s#5#Z|9E |

This is corrupted or damaged data.

---

## ❌ Invalid Foreign Key

Suppose:

## Departments Table

| DepartmentID |
| ------------ |
| 1            |
| 2            |
| 3            |
| 4            |

But inside Employees table:

| Employee | DepartmentID |
| -------- | ------------ |
| Huda     | 5            |

Department `5` does not exist.

This breaks data integrity.

---

# ⚠️ Causes of Data Integrity Problems

Several factors can damage data integrity:

* Human mistakes
* Wrong data entry
* Hardware failures
* Software bugs
* Security attacks
* Data transfer errors

---

# 🛡️ Why Data Integrity is Important?

Without data integrity:

* Reports become inaccurate
* Decisions become wrong
* Systems become unreliable
* Financial losses may occur
* Company reputation may be damaged

---

# 🔑 Types of Data Integrity

---

# 1️⃣ Entity Integrity

Ensures that every row in a table is unique.

### ✅ Usually achieved using:

# Primary Key

Example:

| EmployeeID | Name  |
| ---------- | ----- |
| 1          | Ahmed |
| 2          | Ali   |

Each employee has a unique ID.

---

# 2️⃣ Referential Integrity

Ensures relationships between tables remain valid.

### ✅ Usually achieved using:

# Foreign Key

Example:

An employee cannot belong to a department that does not exist.

---

# 3️⃣ Domain Integrity

Ensures data values are valid and within allowed ranges.

### ✅ Examples

* Age cannot be negative
* Salary must be numeric
* Date must be valid

---

# 4️⃣ Business Integrity

Ensures data follows business rules.

### ✅ Examples

* Bank account balance cannot go below minimum limit
* Hospital patient data must remain confidential
* Product quantity cannot be negative

---

# 🛠️ How to Maintain Data Integrity?

Databases use several techniques:

* Primary Keys
* Foreign Keys
* Constraints
* Validation Rules
* Access Control
* Backups
* Encryption

---

# 🎯 Key Takeaway

* Data Integrity ensures data is correct and trustworthy
* Databases must protect data from corruption and inconsistency
* Primary Keys and Foreign Keys help maintain integrity
* Constraints are essential for protecting data quality

---

# ✅ Summary

* Data Integrity = Accurate + Consistent + Reliable Data
* Bad integrity leads to wrong decisions
* There are multiple types of integrity
* Keys and Constraints protect database data
* Integrity is critical in real-world systems

---

# 👨‍💻 Author

Ahmed Darwish 🚀
