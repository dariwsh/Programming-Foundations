

# Lesson 32 - Convert One-to-Many to Relational Schema

---

# 📘 Introduction

In this lesson, we learned how to convert:

# 🔗 One-to-Many Relationship

from ERD into Relational Schema.

---

# 🧠 What is One-to-Many Relationship?

# One-to-Many Relationship

is:

> A relationship where one record in a table is linked to many records in another table.

---

# 🎯 Main Idea

One department has many employees.

One employee belongs to one department.

---

# 🧩 ERD vs Relational Schema

| ERD                        | Relational Schema    |
| -------------------------- | -------------------- |
| Conceptual Relation        | Real Database Tables |
| Visual Relationship        | PK & FK              |
| One Entity ↔ Many Entities | One Row ↔ Many Rows  |

---

# 💡 Example

## ER Diagram

```text id="r2k9vx"
Department ---- Employee
```

---

# ✨ Relational Schema

```sql
Department(
    DepID PK,
    Name
)

Employee(
    EmpID PK,
    FirstName,
    LastName,
    BirthDate,
    StartDate,
    DepID FK
)
```

---

# 🧠 Conversion Rule

To convert One-to-Many relationship:

1. Create a table for each entity.
2. Take the PK from the One side.
3. Put it as FK in the Many side.

---

# 🎯 Why is One-to-Many Important?

Used in:

* Department & Employees
* Customer & Orders
* Teacher & Students
* Category & Products

---

# 🧠 Important Point

# One-to-Many Relationship uses PK and FK

to connect the two tables.

---

# ✅ Summary

| Concept      | Meaning                   |
| ------------ | ------------------------- |
| One-to-Many  | One record ↔ many records |
| PK           | Primary Key               |
| FK           | Foreign Key               |
| DepID FK     | References Department     |
| Relationship | Connection between tables |

---

# 👨‍💻 Author

Ahmed Darwish 🚀

---

