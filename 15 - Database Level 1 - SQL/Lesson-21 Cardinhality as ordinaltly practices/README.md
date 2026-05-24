# Lesson 21 - Cardinality Symbols and Practices

---

# 📘 Introduction

In this lesson, we learned about:

# 🔗 Cardinality Symbols and Practices

Cardinality symbols are used in ER Diagrams to represent relationships between entities and show:

* Minimum participation
* Maximum participation
* Relationship rules

These symbols help database designers create accurate and professional database structures.

---

# 🧠 What is Cardinality?

Cardinality describes:

> The maximum number of relationships between entities.

---

# 🧠 What is Ordinality?

Ordinality describes:

> The minimum participation in a relationship.

It tells us whether the relationship is:

* Optional
* Mandatory

---

# 🧩 Relationship Representation

Relationships are represented using:

# (MIN, MAX)

---

# 💡 Example 1

## Student & Course

```text id="m7x2qa"
Student (0,M) ---- Enrolled ---- (0,M) Course
```

### Meaning

* Student may enroll in zero or many courses
* Course may contain zero or many students

---

# 💡 Example 2

## Customer & Orders

```text id="v5n8kt"
Customer (1,1) ---- Place ---- (0,M) Order
```

### Meaning

## Customer (1,1)

* Must exist
* One customer only

## Order (0,M)

* Customer may place zero or many orders

---

# 🎯 Common Cardinality Symbols

| Symbol | Meaning        |
| ------ | -------------- |
| (0,1)  | Optional One   |
| (1,1)  | Mandatory One  |
| (0,M)  | Optional Many  |
| (1,M)  | Mandatory Many |

---

# 🧠 Cardinality Notation Types

There are multiple ways to represent relationships in ERD.

---

# 1️⃣ Min-Max Notation

Uses:

```text id="n4x7qp"
(MIN,MAX)
```

Example:

```text id="r8m1tw"
(0,M)
```

---

# 2️⃣ Crow’s Foot Notation

One of the most popular ERD notations.

It uses special symbols to represent:

* One
* Many
* Optional
* Mandatory

---

# 💡 Example

```text id="y3v9ka"
| = One
< = Many
O = Optional
```

---

# 🧩 Crow’s Foot Relationship Examples

---

# One-To-One

```text id="f7m2xp"
|----|
```

---

# One-To-Many

```text id="z6k1tr"
|----<
```

---

# Many-To-Many

```text id="u5q8mw"
>----<
```

---

# Optional One

```text id="k2x4pa"
O----|
```

---

# Optional Many

```text id="w9m3xn"
O----<
```

---

# 🎯 Why Cardinality Symbols are Important?

They help database designers:

* Understand relationships clearly
* Design databases professionally
* Avoid relationship mistakes
* Build scalable systems
* Apply business rules correctly

---

# 🧠 Key Takeaway

Cardinality and Ordinality define:

* How many relationships are allowed
* Whether participation is optional or mandatory

They are essential for professional ER Diagram design.

---

# ✅ Summary

| Concept     | Meaning              |
| ----------- | -------------------- |
| Cardinality | Maximum relationship |
| Ordinality  | Minimum relationship |
| (0,1)       | Optional One         |
| (1,1)       | Mandatory One        |
| (0,M)       | Optional Many        |
| (1,M)       | Mandatory Many       |

---

# 👨‍💻 Author

Ahmed Darwish 🚀

---

