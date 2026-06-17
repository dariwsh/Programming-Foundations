# Lesson 81 - Revision Constraints

---

# 📘 Introduction

In this lesson, we learned about:

# Revision: Constraints in Practice

are:

> A revision lesson that applies multiple constraints together on real tables to reinforce understanding of `PRIMARY KEY`, `UNIQUE`, and other SQL constraints.

---

# 🎯 Main Idea

Practice creating tables with real-world business constraints. Each constraint serves a specific purpose to maintain clean, reliable data.

---

# 💡 Example

Create a Users table with multiple constraints applied simultaneously.

---

# ✨ Revision Example

```sql
CREATE TABLE Users (
    ID INT PRIMARY KEY,
    Email VARCHAR(100) UNIQUE,
    Phone VARCHAR(20) UNIQUE
);
```

---

# 🧠 Result

```text
ID    → must be unique and not null (PRIMARY KEY)
Email → no two users can have the same email (UNIQUE)
Phone → no two users can have the same phone (UNIQUE)
```

---

# 🔥 Important Rule

```text
PRIMARY KEY = NOT NULL + UNIQUE combined.
Multiple UNIQUE constraints can exist on the same table.
Combining constraints enforces real-world business rules.
```

---

# 🧩 Constraint Quick Review

| Constraint  | AUTO NOT NULL | AUTO UNIQUE | Can Repeat |
| ----------- | ------------- | ----------- | ---------- |
| PRIMARY KEY | ✅ Yes        | ✅ Yes      | ❌ One only|
| UNIQUE      | ❌ No         | ✅ Yes      | ✅ Multiple|
| NOT NULL    | ❌ No         | ❌ No       | ✅ Multiple|
| CHECK       | ❌ No         | ❌ No       | ✅ Multiple|
| DEFAULT     | ❌ No         | ❌ No       | ✅ Multiple|

---

# ✅ Summary

| Concept     | Meaning                                   |
| ----------- | ----------------------------------------- |
| PRIMARY KEY | Unique identifier for each row            |
| UNIQUE      | Column values must be distinct            |
| Revision    | Apply multiple constraints on real tables |

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
