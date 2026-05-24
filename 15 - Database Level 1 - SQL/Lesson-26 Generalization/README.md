# Lesson 24 - Generalization

---

# 📘 Introduction

In this lesson, we learned about:

# 🧩 Generalization

Generalization is an important concept in ER Modeling used to reduce duplication and organize entities professionally.

It helps combine entities that share common attributes into one generalized entity.

---

# 🧠 What is Generalization?

# Generalization

is the process of:

> Extracting common attributes from multiple entities and creating one general entity.

---

# 🎯 Simple Idea

If multiple entities share common properties, we move those shared properties into one parent entity.

---

# 🧠 Generalization is:

# Bottom-Up Approach

Meaning:

We start from smaller entities and combine them into a higher-level entity.

---

# 💡 Example

Suppose we have:

```text id="m7x2qa"
Student
Teacher
Employee
```

All of them may share common attributes such as:

* ID
* Name
* Address
* Phone

---

# ✨ Instead of Repeating

```text id="v4n8kp"
Student(ID, Name, Phone)
Teacher(ID, Name, Phone)
Employee(ID, Name, Phone)
```

we create:

# Person

---

# 🧩 Generalized Structure

```text id="r8m1tw"
           Person
        /     |     \
   Student  Teacher  Employee
```

---

# 🎯 Shared Attributes

## Person

contains common attributes:

```text id="k3x7qa"
ID
Name
Phone
Address
```

---

# 🎯 Specialized Attributes

Each child entity keeps its own unique attributes.

---

# 💡 Example

## Student

```text id="y6m4zn"
GPA
Level
```

---

## Teacher

```text id="u2q8xp"
Salary
Subject
```

---

# 🔥 Why Use Generalization?

Generalization helps to:

* Reduce redundancy
* Organize data better
* Simplify database design
* Reuse common attributes
* Improve maintainability

---

# 🧠 Real-World Examples

| General Entity | Specialized Entities       |
| -------------- | -------------------------- |
| Person         | Student, Teacher, Employee |
| Vehicle        | Car, Truck, Bike           |
| Account        | Savings, Current           |

---

# 🧩 ERD Representation

Generalization is usually represented using:

# Triangle Symbol

---

# 💡 Example

```text id="n5v1tr"
          Person
             △
      ┌──────┼──────┐
   Student Teacher Employee
```

---

# 🎯 Important Point

Generalization extracts:

# Common Attributes

from multiple entities.

---

# 🧠 Difference Between Generalization and Specialization

| Generalization         | Specialization            |
| ---------------------- | ------------------------- |
| Bottom-Up              | Top-Down                  |
| Combine entities       | Divide entities           |
| Creates general entity | Creates specific entities |

---

# 🧠 Key Takeaway

Generalization improves database structure by combining common properties into one generalized entity.

It helps create cleaner and more professional ER Diagrams.

---

# ✅ Summary

| Concept        | Meaning                                    |
| -------------- | ------------------------------------------ |
| Generalization | Combining entities into one general entity |
| Bottom-Up      | Build higher entity from lower entities    |
| Goal           | Reduce redundancy                          |
| Uses           | Shared/common attributes                   |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
