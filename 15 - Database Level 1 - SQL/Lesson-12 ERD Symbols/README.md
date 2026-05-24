# Lesson 12 - ERD Symbols

---

# 📘 Introduction

In this lesson, we learned about:

# 🗂️ ERD Symbols

ERD Symbols are special graphical symbols used in Entity Relationship Diagrams to represent:

* Entities
* Attributes
* Relationships
* Keys
* Database structure

These symbols help database designers understand and visualize the database before implementation.

---

# 🧠 Why ERD Symbols are Important?

ERD Symbols help to:

* Simplify database design
* Visualize relationships
* Understand database structure
* Reduce complexity
* Improve communication between developers

---

# 📦 Main ERD Symbols

---

# 1️⃣ Rectangle → Entity

The rectangle symbol represents:

# Entity

An Entity usually becomes a table in the database.

---

## 💡 Examples of Entities

* Student
* Employee
* Department
* Course

---

# 2️⃣ Ellipse → Attribute

The ellipse symbol represents:

# Attribute

Attributes are properties or columns of an entity.

---

## 💡 Examples of Attributes

* Name
* Age
* Salary
* BirthDate

---

# 3️⃣ Diamond → Relationship

The diamond symbol represents:

# Relationship

Relationships connect entities together.

---

## 💡 Example

* Student enrolls in Course
* Employee works in Department

---

# 4️⃣ Underlined Attribute → Primary Key

An underlined attribute represents:

# Primary Key

It uniquely identifies each record in the table.

---

## 💡 Example

```text id="n5b3e7"
StudentID
```

---

# 5️⃣ Double Ellipse → Multivalued Attribute

A double ellipse represents:

# Multivalued Attribute

An attribute that can contain multiple values.

---

## 💡 Example

```text id="c7k9q2"
Phone Numbers
```

A person may have multiple phone numbers.

---

# 6️⃣ Dashed Ellipse → Derived Attribute

A dashed ellipse represents:

# Derived Attribute

An attribute calculated from another attribute.

---

## 💡 Example

```text id="w4x8rt"
Age
```

Age can be calculated from BirthDate.

---

# 7️⃣ Lines

Lines are used to connect:

* Entities
* Attributes
* Relationships

inside the ER Diagram.

---

# 🧩 Simple ERD Example

```text id="h2v6ma"
[Student]
   |
(Name)
   |
<Enrolled>
   |
[Course]
```

---

# 🎯 Advantages of ERD Symbols

* Easy visualization
* Better database planning
* Clear relationship understanding
* Organized database structure
* Professional database design

---

# 🧠 Key Takeaway

ERD Symbols create a visual language for database design.

Understanding these symbols is essential for every database developer and designer.

---

# ✅ Summary

| Symbol         | Meaning               |
| -------------- | --------------------- |
| Rectangle      | Entity                |
| Ellipse        | Attribute             |
| Diamond        | Relationship          |
| Underline      | Primary Key           |
| Double Ellipse | Multivalued Attribute |
| Dashed Ellipse | Derived Attribute     |
| Line           | Connection            |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
