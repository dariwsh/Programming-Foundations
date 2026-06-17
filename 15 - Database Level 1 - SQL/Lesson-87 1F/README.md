# Lesson 87 - First Normal Form (1NF)

---

# 📘 Introduction

In this lesson, we learned about:

# First Normal Form — 1NF

is:

> **1NF** requires that every column in a table contains **atomic (indivisible) values**, and that there are **no repeating groups** or arrays of values in a single column.

---

# 🎯 Main Idea

A table is in 1NF when:
1. Each column has a **single value** (no lists or sets in one cell)
2. Each row is **unique** (has a primary key)
3. **No duplicate columns** representing the same data

---

# 💡 Example

**❌ Violates 1NF:**

| StudentID | Name  | Courses              |
| --------- | ----- | -------------------- |
| 1         | Ahmed | Math, Science, English |
| 2         | Sara  | Math, Art            |

The `Courses` column has multiple values in one cell — **not atomic**.

---

# ✨ Fixed to 1NF

**✅ Satisfies 1NF:**

| StudentID | Name  | Course   |
| --------- | ----- | -------- |
| 1         | Ahmed | Math     |
| 1         | Ahmed | Science  |
| 1         | Ahmed | English  |
| 2         | Sara  | Math     |
| 2         | Sara  | Art      |

Each cell now contains **one value only**.

---

# 🧠 Rules of 1NF

```text
✔️ Each column must have atomic (single) values
✔️ Each column must contain values of the same type
✔️ Each column must have a unique name
✔️ The order in which data is stored doesn't matter
✔️ Each row must be uniquely identifiable (Primary Key)
```

---

# 🔥 Important Rule

```text
If a cell contains a list, comma-separated values, or multiple items → NOT in 1NF.
Fix by creating a new row for each value.
1NF is the foundation — without it, 2NF and 3NF are impossible.
```

---

# 🧩 1NF Checklist

| Rule                     | Violation Example             | Fix                        |
| ------------------------ | ----------------------------- | -------------------------- |
| Atomic values            | "Math, Science" in one cell   | One row per course         |
| No repeating groups      | Course1, Course2, Course3 cols| Use separate rows          |
| Unique row identifier    | No PK defined                 | Add PRIMARY KEY            |

---

# ✅ Summary

| Concept       | Meaning                                     |
| ------------- | ------------------------------------------- |
| 1NF           | First Normal Form                           |
| Atomic values | Each cell holds exactly one value           |
| No repeating  | No duplicate column groups (Course1, Course2)|
| Result        | Clean, flat table ready for further normalization |

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
