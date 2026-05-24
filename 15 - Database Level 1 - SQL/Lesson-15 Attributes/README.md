# Lesson 15 - Attributes in ER Diagram

---

# 📘 Introduction

In this lesson, we learned about:

# 🧩 Attributes in ER Diagram

Attributes represent the properties or characteristics of an entity inside a database.

They are one of the core components of ER Diagrams.

---

# 🧠 What is an Attribute?

An **Attribute** describes an entity.

Attributes usually become:

# Columns in database tables

---

# 💡 Example

## Student Entity

| Attribute |
| --------- |
| Name      |
| Gender    |
| BirthDate |

---

# ✏️ ERD Representation

Attributes are represented using:

# Oval Shape

```text id="m4k7qp"
   (Name)
      |
+-----------+
|  Student  |
+-----------+
```

---

# 🔑 Key Attribute

A **Key Attribute** uniquely identifies each entity record.

It is used as:

# Primary Key

---

# 💡 Example

```text id="d6v1tn"
StudentID
EmployeeID
```

---

# ✏️ ERD Representation

Key Attributes are represented using:

# Underlined Text

```text id="a8x5rw"
(__ID__)
```

---

# 🧩 Composite Attribute

A **Composite Attribute** can be divided into smaller attributes.

---

# 💡 Example

## Full Name

Can be divided into:

* First Name
* Middle Name
* Last Name

---

# ✏️ ERD Representation

```text id="u7m3ke"
        (Name)
       /   |   \
 (First)(Mid)(Last)
```

---

# 🔥 Multivalued Attribute

A **Multivalued Attribute** can contain multiple values.

---

# 💡 Example

```text id="r2x8qa"
Phone Numbers
```

A person may have multiple phone numbers.

---

# ✏️ ERD Representation

# Double Oval

```text id="p5n1ws"
((Phone))
```

---

# ⚡ Derived Attribute

A **Derived Attribute** is calculated from another attribute.

---

# 💡 Example

```text id="f4z7lt"
Age
```

Age can be calculated from BirthDate.

---

# ✏️ ERD Representation

# Dashed Oval

```text id="e9m2vk"
- - (Age) - -
```

---

# 🎯 Types of Attributes

| Attribute Type        | Description            |
| --------------------- | ---------------------- |
| Attribute             | Normal property        |
| Key Attribute         | Unique identifier      |
| Composite Attribute   | Divided into sub-parts |
| Multivalued Attribute | Multiple values        |
| Derived Attribute     | Calculated value       |

---

# 🧠 Key Takeaway

Attributes describe entities and provide detailed information about stored data.

Different attribute types help organize and represent data professionally in ER Diagrams.

---

# ✅ Summary

* Attributes represent properties of entities
* Attributes become table columns
* Oval shape represents attributes
* Underline represents Key Attribute
* Double Oval represents Multivalued Attribute
* Dashed Oval represents Derived Attribute

---

# 👨‍💻 Author

Ahmed Darwish 🚀
