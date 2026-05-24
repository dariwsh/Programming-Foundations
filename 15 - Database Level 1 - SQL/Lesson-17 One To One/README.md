# Lesson 17 - One-to-One Relationship

---

# 📘 Introduction

In this lesson, we learned about:

# 🔗 One-to-One Relationship

One-to-One is one of the main types of relationships in ER Diagrams and database design.

---

# 🧠 What is a One-to-One Relationship?

A **One-to-One Relationship** is a relationship where:

* One record in Entity A is related to **only one** record in Entity B
* One record in Entity B is related to **only one** record in Entity A

---

# ✏️ ERD Representation

```text
+----------+  1       1  +--------------------+
| Entity A |----< Rel >----| Entity B           |
+----------+             +--------------------+
```

The number **1** appears on both sides of the relationship diamond.

---

# 💡 Examples of One-to-One Relationships

* Student **has** Identification Card
* Student **is a** Person
* Employee **is a** Person
* Member **borrows** Book (one at a time)
* Traveler **sets on** Seat
* Employee **sets on** Desk
* Employee **has** Phone Extension
* Employee **assigned** Task
* Citizen **owns** Car

---

# 🔥 One-to-One Relationship Examples

---

## 1️⃣ Student & Identification Card

```text
+----------+  1       1  +--------------------+
| Student  |----< has >----| Identification Card|
+----------+             +--------------------+
```

* A student has **only one** identification card
* An identification card is given to **only one** person

---

## 2️⃣ Student & Person

```text
+---------+  1        1  +--------+
| Student |----< is a >----| Person |
+---------+              +--------+
```

* A student **is a** person
* One person record maps to one student record

---

## 3️⃣ Employee & Person

```text
+----------+  1        1  +--------+
| Employee |----< is a >----| Person |
+----------+              +--------+
```

* An employee **is a** person
* One person record maps to one employee record

---

## 4️⃣ Member & Book

```text
+--------+  1          1  +------+
| Member |----< borrow >----| Book |
+--------+                +------+
```

* A member can borrow **only one** book
* A book can be borrowed by **only one** member

---

## 5️⃣ Traveler & Seat

```text
+----------+  1       1  +------+
| Traveler |----< Set >----| Seat |
+----------+             +------+
```

* A traveler can sit on **only one** seat
* A seat can be assigned to **only one** traveler

---

## 6️⃣ Employee & Desk

```text
+----------+  1       1  +------+
| Employee |----< Set >----| Desk |
+----------+             +------+
```

* An employee can sit at **only one** desk
* A desk can be assigned to **only one** employee

---

## 7️⃣ Employee & Phone Extension

```text
+----------+  1              1  +------------+
| Employee |----< Extension >----| Phone Ext. |
+----------+                   +------------+
```

* Each employee has a **specific** phone extension
* A phone extension can only reach **one** employee

---

## 8️⃣ Employee & Task

```text
+----------+  1            1  +------+
| Employee |----< Assigned >----| Task |
+----------+                  +------+
```

* An employee can work on **only one** task
* A task can be assigned to **only one** employee

---

## 9️⃣ Citizen & Car

```text
+---------+  1       1  +-----+
| Citizen |----< Own >----| Car |
+---------+             +-----+
```

* A citizen can own **only one** car
* A car can be owned by **only one** citizen

---

# 🎯 Key Rules of One-to-One Relationship

| Rule            | Description                                   |
| --------------- | --------------------------------------------- |
| Left side (1)   | One record in Entity A                        |
| Right side (1)  | Maps to exactly one record in Entity B        |
| Both directions | The restriction applies from both sides       |
| ERD Notation    | Number **1** written on both sides of diamond |

---

# 🚀 Why One-to-One Relationships are Important?

One-to-One relationships help us:

* Split large tables into smaller, focused tables
* Store optional data separately (not all employees have a desk)
* Represent inheritance (Student is a Person)
* Improve database performance and organization

---

# 🧠 Key Takeaway

* In One-to-One: one record relates to exactly one record on both sides
* The number **1** appears on both sides of the diamond in ERD
* It is the most restrictive type of relationship
* Common in cases of ID cards, seats, extensions, and inheritance

---

# ✅ Summary

| Concept                 | Meaning                                         |
| ----------------------- | ----------------------------------------------- |
| One-to-One Relationship | Each record relates to exactly one other record |
| ERD Symbol              | **1** on both sides of the diamond              |
| Example 1               | Student has one Identification Card             |
| Example 2               | Traveler sits on one Seat                       |
| Example 3               | Citizen owns one Car                            |
| Common Use              | ID cards, seats, desks, phone extensions        |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
