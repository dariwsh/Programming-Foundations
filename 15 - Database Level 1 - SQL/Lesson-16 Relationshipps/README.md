# Lesson 16 - Relationships in ER Diagram

---

# 📘 Introduction

In this lesson, we learned about:

# 🔗 Relationships in ER Diagram

Relationships are one of the main building blocks of ER Diagrams and database design.

We also learned the different types of relationships:

* One-to-One Relationship
* One-to-Many Relationship
* Many-to-One Relationship
* Many-to-Many Relationship

---

# 🧠 What is a Relationship?

A **Relationship** represents how two entities are connected to each other in the database.

A relationship:

* Connects two or more entities
* Is represented using a **Diamond Shape** in ERD
* Describes an action or association between entities

---

# 🧩 Relationship in ER Diagram

In ERD, a Relationship is represented using:

# Diamond Shape

---

## ✏️ Example

```text
+----------+     +-----------+     +--------+
| Student  |-----< Enrolled >-----|  Course |
+----------+     +-----------+     +--------+
```

---

# 💡 Examples of Relationships

* Student **Enrolled** in Course
* Student **Has** Identification Card
* Customer **Place** Order
* Member **Borrow** Book
* Customer **Rent** Car
* Employee **Works on** Project

---

# 🔥 Relationship Examples

---

## 1️⃣ Student & Course

```text
+----------+     +----------+     +--------+
| Student  |-----< Enrolled >-----| Course |
+----------+     +----------+     +--------+
```

* Student and Course are entities
* **Enrolled** is the relationship between them

---

## 2️⃣ Student & Identification Card

```text
+----------+     +-----+     +--------------------+
| Student  |-----< has >-----| Identification Card|
+----------+     +-----+     +--------------------+
```

* Student and Identification Card are entities
* **Has** is the relationship between them

---

## 3️⃣ Customer & Order

```text
+----------+     +-------+     +-------+
| Customer |-----< Place >-----|  Order|
+----------+     +-------+     +-------+
```

* Customer and Order are entities
* **Place** is the relationship between them

---

## 4️⃣ Order & Product

```text
+-------+     +----------+     +---------+
| Order |-----< Contains >-----| Product |
+-------+     +----------+     +---------+
```

* Order can have more than one product
* **Contains** is the relationship between them

---

## 5️⃣ Member & Book

```text
+--------+     +--------+     +------+
| Member |-----< Borrow >-----|  Book|
+--------+     +--------+     +------+
```

* Member and Book are entities
* **Borrow** is the relationship between them

---

## 6️⃣ Customer & Car

```text
+----------+     +------+     +-----+
| Customer |-----< Rent >-----|  Car|
+----------+     +------+     +-----+
```

* Customer and Car are entities
* **Rent** is the relationship between them

---

## 7️⃣ Employee & Project

```text
+----------+     +----------+     +---------+
| Employee |-----< Works on >-----| Project |
+----------+     +----------+     +---------+
     |                                 |
     +-----------< Manages >-----------+
```

* Employee and Project are entities
* **Works on** is one relationship between them
* **Manages** is another relationship between them

---

# 🔄 Self Referencing Relationship

A **Self Referencing Relationship** is when an entity is related to itself.

* An element of an entity is associated with another element of the **same entity**
* Example: An Employee has a Manager, and the Manager is also an Employee

```text
+----------+     +---------+
| Employee |-----< Manages >----+
+----------+     +---------+    |
     ^                          |
     +---------------------------+
```

---

# 🗂️ Self Referencing Example

## Employees Table

| ID (PK) | Name  | Salary | ManagerID (FK) |
| ------- | ----- | ------ | -------------- |
| 1       | Ahmed | 5000   | Null           |
| 2       | Amjad | 1500   | 1              |
| 3       | Maher | 1300   | 2              |
| 4       | Alia  | 500    | 2              |

* Ahmed is the top manager (no manager above him)
* Amjad and Maher and Alia all report to managers within the same table

---

# 🎯 Relationship Types

| Relationship Type | Description                          | Example                    |
| ----------------- | ------------------------------------ | -------------------------- |
| One-to-One        | One record relates to one record     | Student has one ID Card    |
| One-to-Many       | One record relates to many records   | Customer places many Orders|
| Many-to-One       | Many records relate to one record    | Many Orders from one Customer |
| Many-to-Many      | Many records relate to many records  | Students enrolled in many Courses |

---

# 🚀 Why Relationships are Important?

Relationships help us:

* Connect data between different tables
* Represent real-world associations
* Build a complete and accurate database design
* Avoid data duplication

They are the backbone of relational database systems.

---

# 🧠 Key Takeaway

* Relationships connect entities in ERD
* Diamond shape is used to represent relationships
* A relationship always has a verb (Enrolled, Has, Place, Borrow...)
* Self Referencing Relationship connects an entity to itself
* There are 4 types of relationships: 1-1, 1-M, M-1, M-M

---

# ✅ Summary

| Concept                      | Meaning                                      |
| ---------------------------- | -------------------------------------------- |
| Relationship                 | Connection between two entities              |
| Diamond Shape                | Symbol used to represent a relationship      |
| Self Referencing Relationship| Entity related to itself                     |
| One-to-One                   | One record maps to exactly one record        |
| One-to-Many                  | One record maps to many records              |
| Many-to-Many                 | Many records map to many records             |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
