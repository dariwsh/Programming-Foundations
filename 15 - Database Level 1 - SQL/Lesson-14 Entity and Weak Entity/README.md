# Lesson 14 - Entity and Weak Entity

---

# 📘 Introduction

In this lesson, we learned about:

# 🗂️ Entities in ER Diagram

Entities are one of the main building blocks of ER Diagrams and database design.

We also learned the difference between:

* Strong Entity
* Weak Entity

---

# 🧠 What is an Entity?

An **Entity** represents a real-world object stored in the database.

An entity can be:

* Living object
* Non-living object

Entities usually become tables inside the database.

---

# 💡 Examples of Entities

* Student
* Employee
* Course
* Product
* Department

---

# 🧩 Entity in ER Diagram

In ERD, an Entity is represented using:

# Rectangle Shape

---

## ✏️ Example

```text id="s7m2qx"
+----------+
| Student  |
+----------+
```

---

# 🔥 Strong Entity

A **Strong Entity** is an entity that:

* Has its own Primary Key
* Exists independently
* Does not depend on another entity

---

# 💡 Examples

* Student
* Employee
* Course

Each one has its own unique identifier.

---

# 🗂️ Example

## Student Table

| StudentID | Name  |
| --------- | ----- |
| 1         | Ahmed |
| 2         | Ali   |

`StudentID` is the Primary Key.

---

# ✏️ ERD Representation

```text id="q8n4tw"
+----------+
| Student  |
+----------+
```

---

# ⚠️ Weak Entity

A **Weak Entity** is an entity that:

* Does NOT have its own Primary Key
* Depends on another entity
* Cannot exist independently

---

# 💡 Example

Dependent entity in employee systems.

A dependent cannot exist without an employee.

---

# 🗂️ Example

## Employee Table

| ID | Name  |
| -- | ----- |
| 1  | Ahmed |

---

## Dependent Table

| RelativeName | Relation |
| ------------ | -------- |
| Sara         | Daughter |

The Dependent entity depends on Employee.

---

# ✏️ ERD Representation

Weak Entity is represented using:

# Double Rectangle

```text id="v6k1za"
++-----------++
|| Dependent ||
++-----------++
```

---

# 🔗 Relationship Example

```text id="n3x7pq"
Employee ---- Dependent
```

* Employee → Strong Entity
* Dependent → Weak Entity

---

# 🎯 Difference Between Strong and Weak Entity

| Strong Entity    | Weak Entity               |
| ---------------- | ------------------------- |
| Has Primary Key  | No Primary Key            |
| Independent      | Depends on another entity |
| Single Rectangle | Double Rectangle          |
| Can exist alone  | Cannot exist alone        |

---

# 🚀 Why Weak Entities are Important?

Weak entities help represent:

* Dependent data
* Child records
* Data related to another entity

They are useful in real-world database systems.

---

# 🧠 Key Takeaway

* Entities represent objects stored in databases
* Strong Entities have Primary Keys
* Weak Entities depend on Strong Entities
* ERD uses different symbols for each entity type

---

# ✅ Summary

| Concept          | Meaning                     |
| ---------------- | --------------------------- |
| Entity           | Real-world object           |
| Strong Entity    | Independent entity with PK  |
| Weak Entity      | Dependent entity without PK |
| Rectangle        | Strong Entity symbol        |
| Double Rectangle | Weak Entity symbol          |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
