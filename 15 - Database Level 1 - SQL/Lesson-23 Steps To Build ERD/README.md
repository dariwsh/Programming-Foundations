# Lesson 23 - Steps To Build ERD

---

# 📘 Introduction

In this lesson, we learned:

# 🗂️ How to Build an ER Diagram (ERD)

ERD is created step by step to transform system requirements into a professional database design.

This lesson explained the complete process of building ERD from scratch.

---

# 🧠 What is ERD Building?

Building ERD means:

> Converting business requirements into database structure.

Database designers analyze the system first, then identify:

* Entities
* Relationships
* Attributes
* Cardinality
* Participation

before creating the final ER Diagram.

---

# 🎯 Steps to Create ERD

There are five main steps:

| Step | Description                 |
| ---- | --------------------------- |
| 1    | Entity Identification       |
| 2    | Relationship Identification |
| 3    | Cardinality Identification  |
| 4    | Attributes Identification   |
| 5    | Create Final ERD            |

---

# 🟢 Step 1 — Entity Identification

In this step, we identify:

# Main Entities in the system

Entities usually become tables in the database.

---

# 💡 University Example

From requirements:

```text id="m7x2qa"
Student
Course
Professor
```

These are the main entities.

---

# 🎯 Important Rule

Most important nouns in requirements are usually:

# Entities

---

# 🟢 Step 2 — Relationship Identification

In this step, we identify:

# Relationships between entities

---

# 💡 Examples

## Student enrolls in Course

Relationship:

```text id="v4n8kp"
Enrolled
```

---

## Professor teaches Course

Relationship:

```text id="r8m1tw"
Teaches
```

---

## Professor mentors Student

Relationship:

```text id="k3x7qa"
Mentor
```

---

# ✨ Relationship Structure

```text id="y6m4zn"
Student ---- Enrolled ---- Course
Professor ---- Teaches ---- Course
Professor ---- Mentor ---- Student
```

---

# 🟢 Step 3 — Cardinality Identification

In this step, we determine:

# (MIN, MAX)

for every relationship.

---

# 💡 Example 1

## Student & Course

* Student can enroll in many courses
* Course can contain many students

---

# ✨ Result

```text id="u2q8xp"
(0,M) -------- (0,M)
```

---

# 💡 Example 2

## Professor & Student

* Student has one mentor
* Professor mentors many students

---

# ✨ Result

```text id="n5v1tr"
Professor (0,M)
Student   (1,1)
```

---

# 💡 Example 3

## Professor & Course

* Professor teaches one course
* Course has one professor
* Course may have no professor
* Professor may teach no course

---

# ✨ Result

```text id="p4x7mw"
Professor (0,1)
Course    (0,1)
```

---

# 🟢 Step 4 — Attributes Identification

In this step, we identify:

# Attributes (Columns)

for every entity.

---

# 💡 Student Attributes

```text id="a7m2kp"
ID
Name
Gender
BirthDate
Phone
Age
```

---

# 💡 Course Attributes

```text id="w5x8qa"
ID
Name
CreditHours
```

---

# 💡 Professor Attributes

```text id="z3n7tw"
ID
Name
Salary
```

---

# 🧠 Important Notes

## Age

is a:

# Derived Attribute

because it is calculated from BirthDate.

---

## Name

is a:

# Composite Attribute

because it contains:

* First
* Mid
* Last

---

# 🟢 Step 5 — Create Final ERD

In this step, we combine:

* Entities
* Relationships
* Cardinality
* Attributes

into one complete ER Diagram.

---

# 🧩 Final ERD Structure

```text id="q8v1xp"
Student ---- Enrolled ---- Course
Professor ---- Teaches ---- Course
Professor ---- Mentor ---- Student
```

---

# 🎯 Why ERD Steps are Important?

These steps help developers:

* Understand system requirements
* Build organized databases
* Prevent design mistakes
* Create scalable systems
* Design professional ERDs

---

# 🧠 Key Takeaway

ERD building is a systematic process that converts real-world business requirements into database design.

---

# ✅ Summary

| Step                        | Purpose                      |
| --------------------------- | ---------------------------- |
| Entity Identification       | Find tables/entities         |
| Relationship Identification | Find connections             |
| Cardinality Identification  | Determine relationship rules |
| Attributes Identification   | Define columns               |
| Create ERD                  | Build final diagram          |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
