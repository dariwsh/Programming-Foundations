# Lesson 76 - View

---

# 📘 Introduction

In this lesson, we learned about:

# VIEW

is:

> A `VIEW` is a virtual table based on the result of a SQL `SELECT` query. It does not store data itself — it shows data from actual tables dynamically.

---

# 🎯 Main Idea

A `VIEW` lets you save a complex query under a name and reuse it like a table. It simplifies repeated queries and adds a layer of abstraction.

---

# 💡 Example

Create views for active and resigned employees, then query them.

---

# ✨ VIEW Syntax

```sql
CREATE VIEW ActiveEmployees AS
SELECT * FROM Employees
WHERE ExitDate IS NULL;

CREATE VIEW ResignedEmployees AS
SELECT * FROM Employees
WHERE ExitDate IS NOT NULL;

SELECT * FROM ActiveEmployees;
SELECT * FROM ResignedEmployees;

CREATE VIEW ActiveNames AS
SELECT ID, FirstName, LastName, Gendor
FROM Employees;

SELECT * FROM ActiveNames;
```

---

# 🧠 Result

```text
ActiveEmployees  → employees where ExitDate = NULL
ResignedEmployees → employees where ExitDate has a value
ActiveNames      → a view showing only selected columns
```

---

# 🔥 Important Rule

```text
VIEWs are virtual — no data is stored separately.
Every time you SELECT from a VIEW, the underlying query runs.
```

---

# 🧩 VIEW vs Table

| Feature     | Table          | VIEW               |
| ----------- | -------------- | ------------------ |
| Stores Data | ✅ Yes         | ❌ No (virtual)    |
| Reusable    | ✅ Yes         | ✅ Yes             |
| Updatable   | ✅ Yes         | ⚠️ Sometimes       |
| Simplifies  | ❌ No          | ✅ Yes             |

---

# ✅ Summary

| Concept        | Meaning                                      |
| -------------- | -------------------------------------------- |
| CREATE VIEW    | Creates a named virtual query                |
| SELECT from VIEW | Runs the underlying query dynamically      |
| ExitDate IS NULL | Filter for active employees               |

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
