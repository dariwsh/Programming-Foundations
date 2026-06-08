# Lesson 57 - Identity Field Auto Increment

---

# 📘 Introduction

In this lesson, we learned about:

# IDENTITY

is:

> A property in SQL Server that automatically generates sequential numeric values for a column, typically used for primary keys.

---

# 🎯 Main Idea

`IDENTITY(seed, increment)` auto-numbers a column on each new insert. You do not need to provide values for it — SQL Server handles it automatically.

---

# 💡 Example

Create a `PersonsNew2` table where `Personid` starts at 10 and increments by 10.

---

# ✨ IDENTITY

```sql
CREATE TABLE PersonsNew2 (
    Personid INT IDENTITY(10, 10) PRIMARY KEY,
    LastName VARCHAR(255) NOT NULL,
    FirstName VARCHAR(255),
    Age INT
);

INSERT INTO PersonsNew2 VALUES
('Smith', 'John', 30);
```

---

# 🧠 Result

```text
(1 row affected)

Personid | LastName | FirstName | Age
10       | Smith    | John      | 30
```

---

# 🔥 Important Rule

```text
Each table can have only ONE identity column.
You cannot insert explicit values into an identity column
unless you use SET IDENTITY_INSERT ON.
```

---

# 🧩 IDENTITY Parameters

| Parameter   | Meaning |
| ----------- | ------- |
| seed        | Starting value (default 1) |
| increment   | Step value added per row (default 1) |

---

# ✅ Summary

| Concept   | Meaning |
| --------- | ------- |
| IDENTITY  | Auto-generates sequential values |
| IDENTITY_INSERT | Allows manual inserts into identity column |
| Scope     | One identity column per table |

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
