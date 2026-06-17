# Lesson 88 - Second Normal Form (2NF)

---

# 📘 Introduction

In this lesson, we learned about:

# Second Normal Form — 2NF

is:

> **2NF** requires that a table is already in **1NF** AND that every **non-key column is fully dependent on the entire Primary Key** — not just part of it.

---

# 🎯 Main Idea

2NF eliminates **partial dependencies**. A partial dependency occurs when a non-key column depends on **only part** of a composite primary key (not the whole key).

> If your table has a single-column primary key → it's automatically in 2NF (if it's in 1NF).

---

# 💡 Example

**❌ Violates 2NF:**

| StudentID | CourseID | StudentName | CourseName |
| --------- | -------- | ----------- | ---------- |
| 1         | C01      | Ahmed       | Math       |
| 1         | C02      | Ahmed       | Science    |
| 2         | C01      | Sara        | Math       |

- PK = (StudentID + CourseID)
- `StudentName` depends only on `StudentID` → **partial dependency** ❌
- `CourseName` depends only on `CourseID` → **partial dependency** ❌

---

# ✨ Fixed to 2NF

**✅ Split into 3 tables:**

**Students Table:**
| StudentID | StudentName |
| --------- | ----------- |
| 1         | Ahmed       |
| 2         | Sara        |

**Courses Table:**
| CourseID | CourseName |
| -------- | ---------- |
| C01      | Math       |
| C02      | Science    |

**Enrollment Table:**
| StudentID | CourseID |
| --------- | -------- |
| 1         | C01      |
| 1         | C02      |
| 2         | C01      |

---

# 🧠 Rules of 2NF

```text
✔️ Must be in 1NF first
✔️ Every non-key column must depend on the WHOLE primary key
✔️ No partial dependencies allowed
✔️ Move partial dependencies to a separate table
```

---

# 🔥 Important Rule

```text
2NF only matters when you have a COMPOSITE primary key.
If PK is a single column → no partial dependency possible → already 2NF.
Splitting tables removes redundancy and prevents update anomalies.
```

---

# 🧩 2NF Checklist

| Rule                     | Violation Example                    | Fix                          |
| ------------------------ | ------------------------------------ | ---------------------------- |
| 1NF satisfied            | Multiple values in cell              | Apply 1NF first              |
| No partial dependency    | StudentName depends on StudentID only| Move to separate Students table |
| Full key dependency      | CourseName depends on CourseID only  | Move to separate Courses table |

---

# ✅ Summary

| Concept              | Meaning                                          |
| -------------------- | ------------------------------------------------ |
| 2NF                  | Second Normal Form                               |
| Partial Dependency   | Non-key column depends on PART of composite PK   |
| Fix                  | Split table — move partial dependencies out      |

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
