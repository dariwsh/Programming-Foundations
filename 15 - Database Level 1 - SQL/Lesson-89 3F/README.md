# Lesson 89 - Third Normal Form (3NF)

---

# 📘 Introduction

In this lesson, we learned about:

# Third Normal Form — 3NF

is:

> **3NF** requires that a table is in **2NF** AND that every **non-key column depends ONLY on the Primary Key** — not on other non-key columns. This eliminates **transitive dependencies**.

---

# 🎯 Main Idea

A **transitive dependency** happens when:
- Column A → Column B → Column C
- C depends on B, and B depends on A (the PK), but C does NOT directly depend on A

3NF removes these chains of dependency by splitting tables further.

---

# 💡 Example

**❌ Violates 3NF:**

| EmployeeID | DepartmentID | DepartmentName |
| ---------- | ------------ | -------------- |
| 1          | D01          | HR             |
| 2          | D02          | IT             |
| 3          | D01          | HR             |

- PK = `EmployeeID`
- `DepartmentID` depends on `EmployeeID` ✅
- `DepartmentName` depends on `DepartmentID` — NOT on `EmployeeID` directly ❌
- **Transitive dependency:** EmployeeID → DepartmentID → DepartmentName

---

# ✨ Fixed to 3NF

**✅ Split into 2 tables:**

**Employees Table:**
| EmployeeID | DepartmentID |
| ---------- | ------------ |
| 1          | D01          |
| 2          | D02          |
| 3          | D01          |

**Departments Table:**
| DepartmentID | DepartmentName |
| ------------ | -------------- |
| D01          | HR             |
| D02          | IT             |

---

# 🧠 Rules of 3NF

```text
✔️ Must be in 2NF first
✔️ No non-key column depends on another non-key column
✔️ Every non-key column must depend ONLY on the Primary Key
✔️ Eliminate all transitive dependencies
```

---

# 🔥 Important Rule

```text
Transitive dependency = A → B → C where B is not the PK.
Fix: move B and C into their own separate table.
3NF greatly reduces data redundancy and prevents update anomalies.
After 3NF, most databases are considered "well normalized".
```

---

# 🧩 Normalization Journey

| Normal Form | Removes                          | Requirement              |
| ----------- | -------------------------------- | ------------------------ |
| 1NF         | Non-atomic values, repeating groups | Atomic values, PK     |
| 2NF         | Partial dependencies             | 1NF + full PK dependency |
| 3NF         | Transitive dependencies          | 2NF + no non-key→non-key |

---

# ✅ Summary

| Concept                | Meaning                                           |
| ---------------------- | ------------------------------------------------- |
| 3NF                    | Third Normal Form                                 |
| Transitive Dependency  | Non-key column depends on another non-key column  |
| Fix                    | Move dependent columns to a new separate table    |
| Result                 | Fully normalized, minimal redundancy database     |

---

# 🏆 Normalization Complete

```text
1NF ✅ → Atomic values
2NF ✅ → No partial dependencies
3NF ✅ → No transitive dependencies

Database is now well-normalized and production-ready!
```

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
