# Lesson 20 - Cardinality and Ordinality

---

# 📘 Introduction

In this lesson, we learned about:

# 🔗 Cardinality and Ordinality

These concepts are very important in ER Diagrams because they describe how entities relate to each other inside a database.

They help database designers understand:

* How many relationships can exist
* Whether relationships are optional or mandatory

---

# 🧠 What is Cardinality?

# Cardinality = Maximum Relationship

Cardinality refers to:

> The maximum number of times an entity instance can be associated with another entity instance.

---

# 💡 Example

## Student & Course

```text id="m7x2qa"
Student ---- Enrolled ---- Course
     M                    M
```

* A student can enroll in many courses
* A course can contain many students

This relationship is:

# Many-To-Many (M:M)

---

# 💡 Another Example

## Customer & Orders

```text id="v4n8kp"
Customer ---- Place ---- Order
     1                    M
```

* One customer can place many orders
* One order belongs to one customer

This relationship is:

# One-To-Many (1:M)

---

# 🧠 What is Ordinality?

# Ordinality = Minimum Relationship

Ordinality refers to:

> The minimum number of times an entity instance must participate in a relationship.

It tells us whether the relationship is:

* Optional
* Mandatory

---

# 🎯 Important Values

| Value | Meaning   |
| ----- | --------- |
| 0     | Optional  |
| 1     | Mandatory |
| M     | Many      |

---

# 💡 Example

## Student & Course

```text id="r8m1tw"
Student (0,M) ---- Enrolled ---- (0,M) Course
```

### Meaning

* A student may enroll in zero or many courses
* A course may contain zero or many students

---

# 💡 Another Example

## Customer & Orders

```text id="k5x7qa"
Customer (1,1) ---- Place ---- (0,M) Order
```

### Meaning

## Customer (1,1)

* Must exist
* Only one customer

## Order (0,M)

* A customer may place zero orders
* Or many orders

---

# 🧩 Understanding (MIN, MAX)

Relationships are represented using:

# (MIN, MAX)

---

# 📌 Common Relationship Forms

| Format | Meaning        |
| ------ | -------------- |
| (0,1)  | Optional One   |
| (1,1)  | Mandatory One  |
| (0,M)  | Optional Many  |
| (1,M)  | Mandatory Many |

---

# 🧠 Simple Explanation

| Concept | Meaning               |
| ------- | --------------------- |
| MIN     | Minimum participation |
| MAX     | Maximum participation |

---

# 💡 Real-World Example

## Teacher & Students

```text id="x3m7ka"
Teacher (0,M) ---- Teaches ---- (1,1) Student
```

### Meaning

* A teacher may teach zero or many students
* A student must have one teacher

---

# 🎯 Why Cardinality and Ordinality are Important?

They help database designers:

* Build correct relationships
* Understand business rules
* Prevent design mistakes
* Create accurate database models

---

# 🧠 Key Takeaway

* Cardinality defines the maximum relationship
* Ordinality defines the minimum relationship
* Together they describe database relationships professionally

---

# ✅ Summary

| Concept     | Meaning                            |
| ----------- | ---------------------------------- |
| Cardinality | Maximum relationship count         |
| Ordinality  | Minimum relationship participation |
| 0           | Optional                           |
| 1           | Mandatory                          |
| M           | Many                               |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
