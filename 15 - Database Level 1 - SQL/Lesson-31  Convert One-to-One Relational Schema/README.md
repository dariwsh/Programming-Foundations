

# Lesson 31 - Convert One-to-One to Relational Schema

---

# 📘 Introduction

In this lesson, we learned how to convert:

# 🔗 One-to-One Relationship

from ERD into Relational Schema.

---

# 🧠 What is One-to-One Relationship?

# One-to-One Relationship

is:

> A relationship where one record in a table is linked to only one record in another table.

---

# 🎯 Main Idea

One employee has one access card.

One access card belongs to one employee.

---

# 🧩 ERD vs Relational Schema

| ERD                     | Relational Schema    |
| ----------------------- | -------------------- |
| Conceptual Relation     | Real Database Tables |
| Visual Relationship     | PK & FK              |
| One Entity ↔ One Entity | One Row ↔ One Row    |

---

# 💡 Example

## ER Diagram

```text id="x4v8tm"
Employee ---- AccessCard
```

---

# ✨ Relational Schema

```sql
Employees(
    EmpID PK,
    FirstName,
    LastName,
    BirthDate
)

AccessCards(
    CardID PK,
    SerialNo,
    ExpDate,
    EmpID FK
)
```

---

# 🧠 Conversion Rule

To convert One-to-One relationship:

1. Create a table for each entity.
2. Take the PK from one table.
3. Put it as FK in the other table.

---

# 🎯 Why is One-to-One Important?

Used in:

* Employee & AccessCard
* Person & Passport
* User & Profile
* Citizen & National ID

---

# 🧠 Important Point

# One-to-One Relationship uses PK and FK

to connect the two tables.

---

# ✅ Summary

| Concept      | Meaning                   |
| ------------ | ------------------------- |
| One-to-One   | One record ↔ one record   |
| PK           | Primary Key               |
| FK           | Foreign Key               |
| EmpID FK     | References Employees      |
| Relationship | Connection between tables |

---

# 👨‍💻 Author

Ahmed Darwish 🚀

---

# 🧠 Simple Quiz — One-to-One Relationship

---

## Q1) One-to-One Relationship means:

* A) One record linked to many
* B) One record linked to one record
* C) Many linked to many
* D) No relationship

✅ Answer: B

---

## Q2) FK stands for:

* A) File Key
* B) Foreign Key
* C) Fast Key
* D) Final Key

✅ Answer: B

---

## Q3) In One-to-One relationship:

* A) PK moves as FK
* B) CSS is created
* C) API is generated
* D) HTML page is built

✅ Answer: A

---

## Q4) AccessCards table contains:

* A) EmpID FK
* B) CSS
* C) Images
* D) APIs

✅ Answer: A

---

## Q5) One-to-One relationship is used in:

* A) Employee & AccessCard
* B) Browser & CSS
* C) HTML & JS
* D) Networks only

✅ Answer: A

---

# 🚀 Challenge Question

Convert this ERD into Relational Schema:

```text id="d7r4pw"
Person ---- Passport
```

✍️ Try writing the tables yourself 🔥
