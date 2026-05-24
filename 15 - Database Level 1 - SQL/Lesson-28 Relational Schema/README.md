

# Lesson 28 - Relational Schema

---

# 📘 Introduction

In this lesson, we learned about:

# 🗂️ Relational Schema

Relational Schema represents the structure and design of database tables in relational databases.

It defines:

* Table names
* Columns
* Data types
* Relationships
* Keys

---

# 🧠 What is Relational Schema?

# Relational Schema

is:

> A collection of relational tables and their associated attributes and relationships.

It describes how the database is organized.

---

# 🎯 Main Idea

Relational Schema converts:

# ER Diagram

into:

# Real Database Tables

---

# 🧩 ERD vs Relational Schema

| ERD               | Relational Schema       |
| ----------------- | ----------------------- |
| Conceptual Design | Physical/Logical Design |
| Visual Diagram    | Database Tables         |
| Relationships     | Keys & Columns          |

---

# 💡 Example

## ER Diagram

```text id="v4n8kp"
Student ---- Enrolled ---- Course
```

---

# ✨ Relational Schema

```sql
Student(StudentID, Name, Age)

Course(CourseID, Name)

Enrollment(StudentID, CourseID)
```

---

# 🧠 Relation Schema Components

A relation schema contains:

* Relation/Table Name
* Attributes (Columns)
* Domains (Data Types)
* Keys

---

# 💡 Example

```sql
Student(
    StudentID PK,
    Name,
    BirthDate,
    Phone
)
```

---

# 🎯 Why Relational Schema is Important?

Relational Schema helps developers:

* Design database tables
* Implement databases
* Organize data professionally
* Define relationships clearly

---

# 🧠 Important Point

# ER Diagram is Conceptual

while:

# Relational Schema is Structural Design

---

# 🔥 ERD to Relational Schema

Database designers first create:

# ER Diagram

then convert it into:

# Relational Schema

before implementation.

---

# ✅ Summary

| Concept           | Meaning                  |
| ----------------- | ------------------------ |
| ERD               | Visual conceptual model  |
| Relational Schema | Database table structure |
| Attributes        | Columns                  |
| Relation          | Table                    |
| PK                | Primary Key              |
| FK                | Foreign Key              |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
