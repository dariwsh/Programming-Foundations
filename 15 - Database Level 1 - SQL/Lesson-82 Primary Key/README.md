# Lesson 82 - Primary Key

---

# 📘 Introduction

In this lesson, we learned about:

# PRIMARY KEY

is:

> A `PRIMARY KEY` is a column (or combination of columns) that **uniquely identifies** each row in a table. It automatically enforces `NOT NULL` and `UNIQUE` together.

---

# 🎯 Main Idea

Every table should have a primary key. It is the main anchor for relationships between tables and guarantees that no two rows are identical.

---

# 💡 Example

Create tables with PRIMARY KEY defined in different ways.

---

# ✨ PRIMARY KEY Syntax

```sql
-- Method 1: Inline on the column
CREATE TABLE Persons (
    ID INT NOT NULL PRIMARY KEY,
    LastName VARCHAR(255) NOT NULL,
    FirstName VARCHAR(255),
    Age INT
);

-- Method 2: Named constraint using multiple columns
CREATE TABLE Persons0 (
    ID INT NOT NULL,
    LastName VARCHAR(255) NOT NULL,
    FirstName VARCHAR(255),
    Age INT,
    CONSTRAINT PK_Person PRIMARY KEY (ID, LastName)
);

-- Method 3: Add PRIMARY KEY with ALTER TABLE
ALTER TABLE Persons
ADD PRIMARY KEY (ID);
```

---

# 🧠 Result

```text
Method 1 → single column PK defined inline
Method 2 → composite PK (ID + LastName together must be unique)
Method 3 → PK added after table is created
```

---

# 🔥 Important Rule

```text
A table can have only ONE PRIMARY KEY.
A PRIMARY KEY can consist of multiple columns (composite key).
PRIMARY KEY = NOT NULL + UNIQUE enforced automatically.
```

---

# 🧩 Primary Key vs Unique

| Feature        | PRIMARY KEY        | UNIQUE               |
| -------------- | ------------------ | -------------------- |
| Count per table| One only           | Multiple allowed     |
| Allows NULL    | ❌ Never           | ⚠️ Sometimes (1 NULL)|
| Used for FK    | ✅ Yes             | ⚠️ Rarely            |
| Auto Index     | ✅ Yes (clustered) | ✅ Yes (non-clustered)|

---

# ✅ Summary

| Concept        | Meaning                                    |
| -------------- | ------------------------------------------ |
| PRIMARY KEY    | Unique row identifier, no NULLs allowed    |
| Composite PK   | Multiple columns forming one unique key    |
| ALTER TABLE    | Adds a PK to an existing table             |

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
