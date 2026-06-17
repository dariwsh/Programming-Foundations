# Lesson 83 - DEFAULT Constraint

---

# 📘 Introduction

In this lesson, we learned about:

# DEFAULT Constraint

is:

> `DEFAULT` sets a **automatic fallback value** for a column when no value is provided during `INSERT`. It ensures columns always have meaningful data.

---

# 🎯 Main Idea

When inserting a row and you don't specify a value for a column that has a `DEFAULT`, the database automatically uses the default value instead of leaving the column empty or NULL.

---

# 💡 Example

Create tables with CHECK and DEFAULT constraints to enforce business rules.

---

# ✨ DEFAULT and CHECK Syntax

```sql
-- CHECK constraint: Age must be 18 or older
CREATE TABLE Persons (
    ID INT NOT NULL,
    LastName VARCHAR(255) NOT NULL,
    FirstName VARCHAR(255),
    Age INT CHECK (Age >= 18)
);

-- Named CHECK constraint with multiple conditions
CREATE TABLE Persons (
    ID INT NOT NULL,
    LastName VARCHAR(255) NOT NULL,
    FirstName VARCHAR(255),
    Age INT,
    City VARCHAR(255),
    CONSTRAINT CHK_Person CHECK (Age >= 18 AND City = 'Amman')
);
```

---

# 🧠 Result

```text
CHECK (Age >= 18)     → rejects any insert where Age < 18
CHECK (Age AND City)  → both conditions must be true to insert
DEFAULT 'Active'      → if Status not provided, defaults to 'Active'
```

---

# 🔥 Important Rule

```text
DEFAULT is used when a value is not supplied in INSERT.
CHECK validates the value against a condition.
Named constraints (CONSTRAINT keyword) can be dropped later by name.
```

---

# 🧩 DEFAULT vs CHECK

| Feature   | DEFAULT                     | CHECK                          |
| --------- | --------------------------- | ------------------------------ |
| Purpose   | Fills missing values        | Validates values               |
| Triggers  | On INSERT (if no value)     | On INSERT and UPDATE           |
| Logic     | Sets a value automatically  | Rejects invalid values         |
| Example   | DEFAULT 'Active'            | CHECK (Age >= 18)              |

---

# ✅ Summary

| Concept    | Meaning                                        |
| ---------- | ---------------------------------------------- |
| DEFAULT    | Auto-fills column when value is not provided   |
| CHECK      | Validates column value against a condition     |
| CONSTRAINT | Names a constraint so it can be referenced     |

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
