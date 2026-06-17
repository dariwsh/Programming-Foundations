# Lesson 84 - UNIQUE Constraint

---

# 📘 Introduction

In this lesson, we learned about:

# UNIQUE Constraint

is:

> `UNIQUE` ensures that all values in a column (or group of columns) are **distinct** — no two rows can have the same value in that column.

---

# 🎯 Main Idea

`UNIQUE` is similar to `PRIMARY KEY` but can be applied to multiple columns in the same table. It allows `NULL` values (unlike PRIMARY KEY), but each `NULL` is treated as distinct.

---

# 💡 Example

Create a Persons table where both ID and LastName must be unique together as a named constraint.

---

# ✨ UNIQUE Syntax

```sql
-- Named UNIQUE constraint on multiple columns
CREATE TABLE Persons (
    ID INT NOT NULL,
    LastName VARCHAR(255) NOT NULL,
    FirstName VARCHAR(255),
    Age INT,

    CONSTRAINT UC_Person
    UNIQUE (ID, LastName)
);

SELECT * FROM Persons;
```

---

# 🧠 Result

```text
UC_Person → the combination of (ID + LastName) must be unique
No two rows can share the same ID AND same LastName together
```

---

# 🔥 Important Rule

```text
UNIQUE on multiple columns = the COMBINATION must be unique, not each individually.
You can have multiple UNIQUE constraints on one table.
UNIQUE allows NULL, PRIMARY KEY does not.
Use CONSTRAINT keyword to name constraints (allows easy dropping later).
```

---

# 🧩 UNIQUE Comparison

| Feature          | PRIMARY KEY  | UNIQUE           |
| ---------------- | ------------ | ---------------- |
| Allows NULL      | ❌ No        | ✅ Yes (once)    |
| Per Table Count  | One only     | Multiple allowed |
| Auto Index       | ✅ Clustered | ✅ Non-clustered  |
| Foreign Key ref  | ✅ Yes       | ⚠️ Sometimes     |

---

# ✅ Summary

| Concept         | Meaning                                         |
| --------------- | ----------------------------------------------- |
| UNIQUE          | No duplicate values in column(s)                |
| CONSTRAINT name | Named constraint for easy management            |
| Composite UNIQUE| Combination of columns must be unique together  |

---

# 👨‍💻 Author

Ahmed Darwish 🚀
🚀 Software Engineering Student

أشارك رحلتي في تعلم البرمجة، مشاريعي، وملخصاتي الدراسية.

🌐 Portfolio
https://darwish.xo.je

💻 GitHub
https://github.com/dariwsh

🔗 LinkedIn
https://www.linkedin.com/in/ahmed-darwish-33b752330/

🤝 أي نصيحة أو Feedback مرحب بها دائمًا، فالتعلم لا يتوقف.

❤️ Thanks for visiting.
