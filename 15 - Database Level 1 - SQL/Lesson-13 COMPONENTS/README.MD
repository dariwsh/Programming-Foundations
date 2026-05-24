# Lesson 13 - Components of ER Diagram

---

# 📘 Introduction

In this lesson, we learned about:

# 🗂️ Components of ER Diagram

ER Diagram is built using several important components that help us design and understand databases professionally.

These components are divided into:

* Entities
* Attributes
* Relationships

---

# 🧠 Main Components of ER Diagram

| Component    | Description                             |
| ------------ | --------------------------------------- |
| Entity       | Represents a table or object            |
| Attribute    | Represents data or columns              |
| Relationship | Represents connections between entities |

---

# 📦 Entities

Entities represent real-world objects stored inside the database.

Examples:

* Student
* Employee
* Course
* Department

---

# 🔹 Strong Entity

A Strong Entity:

* Has its own Primary Key
* Can exist independently

### 💡 Example

```text id="s8v2pa"
Student
Employee
Department
```

---

# 🔹 Weak Entity

A Weak Entity:

* Cannot exist without another entity
* Depends on a Strong Entity

### 💡 Example

```text id="n6x4ke"
Order Details
Dependent
```

---

# 🧩 Attributes

Attributes are properties or information about entities.

They usually become columns in database tables.

---

# 🔹 Attribute

Basic information stored about an entity.

### 💡 Example

```text id="y3m9af"
Name
Age
Salary
```

---

# 🔹 Key Attribute

An attribute used to uniquely identify records.

### 💡 Example

```text id="h5q7tr"
StudentID
EmployeeID
```

---

# 🔹 Composite Attribute

An attribute that can be divided into smaller parts.

### 💡 Example

```text id="p2l8wd"
Full Name
```

Can be divided into:

* First Name
* Middle Name
* Last Name

---

# 🔹 Multivalued Attribute

An attribute that can contain multiple values.

### 💡 Example

```text id="m7z1kc"
Phone Numbers
```

A person may have more than one phone number.

---

# 🔹 Derived Attribute

An attribute calculated from another attribute.

### 💡 Example

```text id="r4n6xs"
Age
```

Age is calculated from BirthDate.

---

# 🔗 Relationships

Relationships connect entities together.

They explain how data interacts inside the database.

---

# 🔹 One-to-One Relationship (1:1)

One record relates to only one record.

### 💡 Example

* One person has one passport

---

# 🔹 One-to-Many Relationship (1:M)

One record relates to many records.

### 💡 Example

* One department has many employees

---

# 🔹 Many-to-One Relationship (M:1)

Many records relate to one record.

### 💡 Example

* Many employees belong to one department

---

# 🔹 Many-to-Many Relationship (M:M)

Many records relate to many records.

### 💡 Example

* Students enroll in many courses
* Courses contain many students

---

# 🎯 Key Takeaway

ER Diagram components help database designers:

* Understand database structure
* Organize data correctly
* Design relationships professionally
* Build scalable databases

---

# ✅ Summary

| Component    | Types                                |
| ------------ | ------------------------------------ |
| Entity       | Strong Entity, Weak Entity           |
| Attribute    | Key, Composite, Multivalued, Derived |
| Relationship | 1:1, 1:M, M:1, M:M                   |

---

# 👨‍💻 Author

Ahmed Darwish 🚀

---

