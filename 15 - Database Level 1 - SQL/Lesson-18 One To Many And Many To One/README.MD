# Lesson 18 - One-To-Many / Many-To-One Relationship

---

# 📘 Introduction

In this lesson, we learned about:

# 🔗 One-To-Many and Many-To-One Relationships

These relationships are among the most important relationship types used in relational databases.

They help organize data and connect tables together correctly.

---

# 🧠 What is One-To-Many Relationship?

# One-To-Many (1:M)

A One-To-Many relationship happens when:

> One record in an entity is associated with multiple records in another entity.

---

# 💡 Example

## Customer & Orders

```text id="m8x2qa"
Customer ----< Orders
    1            M
```

* One customer can place many orders
* One order belongs to only one customer

---

# 🎯 Real Meaning

The relationship starts from:

# One Customer → Many Orders

---

# 🧠 What is Many-To-One Relationship?

# Many-To-One (M:1)

A Many-To-One relationship happens when:

> Multiple records are related to one record in another entity.

---

# 💡 Example

## Employees & Project

```text id="v5n7kt"
Employees >---- Project
     M             1
```

* Many employees work on one project
* One project contains many employees

---

# 🔥 Important Note

# One-To-Many and Many-To-One

are actually the same relationship viewed from different directions.

---

# 📚 Real-World Examples

---

# 1️⃣ Member & Books

```text id="z2k9wr"
Member ----< Books
   1           M
```

* One member can borrow many books
* One book is borrowed by one member

---

# 2️⃣ Customer & Mobile Lines

```text id="r4m1xp"
Customer ----< MobileLine
    1               M
```

* One customer can subscribe to many mobile lines
* Each mobile line belongs to one customer

---

# 3️⃣ Citizen & Cars

```text id="y8q6na"
Citizen ----< Cars
    1           M
```

* One citizen can own many cars
* Each car belongs to one citizen

---

# 🔄 Self Relationship

---

# 🧠 What is Self Relationship?

A Self Relationship occurs when:

> An entity has a relationship with itself.

---

# 💡 Example

## Employee manages Employee

```text id="k3v8mt"
Employee ---- Managed By ---- Employee
      M                         1
```

* One manager manages many employees
* Each employee has one manager

---

# 🗂️ Database Example

| ID | Name  | Salary | ManagerID |
| -- | ----- | ------ | --------- |
| 1  | Ahmed | 5000   | NULL      |
| 2  | Amjad | 1500   | 1         |
| 3  | Maher | 1300   | 2         |

`ManagerID` acts as a Foreign Key referencing the same table.

---

# 🎯 Advantages of One-To-Many Relationships

* Better database organization
* Reduced data redundancy
* Easier data management
* Improved relational design
* More scalable systems

---

# 🧠 Key Takeaway

One-To-Many relationships are the most commonly used relationships in relational databases.

They are essential for building professional database systems.

---

# ✅ Summary

| Relationship      | Description                        |
| ----------------- | ---------------------------------- |
| One-To-Many (1:M) | One record relates to many records |
| Many-To-One (M:1) | Many records relate to one record  |
| Self Relationship | Entity relates to itself           |

---

# 💡 Common Examples

| Example                | Relationship      |
| ---------------------- | ----------------- |
| Customer → Orders      | 1:M               |
| Department → Employees | 1:M               |
| Manager → Employees    | Self Relationship |
| Citizen → Cars         | 1:M               |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
