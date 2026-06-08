# Lesson 59 - Foreign Key Constraint

---

# 📘 Introduction

In this lesson, we learned about:

# FOREIGN KEY

is:

> A constraint that establishes a relationship between two tables and ensures referential integrity by guaranteeing values in a column match the primary key of another table.

---

# 🎯 Main Idea

Foreign keys prevent orphaned records. They ensure that every value in the child table has a corresponding value in the parent table.

---

# 💡 Example

We have `Customers` and `Orders` tables. Each order must belong to an existing customer.

---

# ✨ FOREIGN KEY

```sql
CREATE TABLE Customers (
    ID INT PRIMARY KEY,
    FirstName VARCHAR(50),
    LastName VARCHAR(50),
    Age INT,
    Country VARCHAR(20)
);

CREATE TABLE Orders (
    OrderID INT PRIMARY KEY,
    Item VARCHAR(40),
    OrderDate DATE,
    Amount INT
);

ALTER TABLE Orders
ADD FOREIGN KEY (customer_id) REFERENCES Customers(id);
```

---

# 🧠 Result

```text
Command(s) completed successfully.
Foreign key constraint enforces: no order can reference a non-existent customer.
```

---

# 🔥 Important Rule

```text
The referenced column in the parent table must be a PRIMARY KEY
or have a UNIQUE constraint. Foreign keys prevent deletion of
parent rows that have child references (unless CASCADE is used).
```

---

# 🧩 Foreign Key Options

| Option | Behavior |
| ------ | -------- |
| ON DELETE CASCADE | Deletes child rows when parent is deleted |
| ON UPDATE CASCADE | Updates child FK when parent PK is updated |
| ON DELETE SET NULL | Sets child FK to NULL when parent is deleted |

---

# ✅ Summary

| Concept     | Meaning |
| ----------- | ------- |
| FOREIGN KEY | Enforces referential integrity between tables |
| REFERENCES  | Points to the parent table and column |
| CASCADE     | Propagates changes from parent to child |

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
