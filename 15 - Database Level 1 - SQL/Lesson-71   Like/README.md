# Lesson 71 - Like

---

# 📘 Introduction

In this lesson, we learned about:

# LIKE

is:

> An operator used in a `WHERE` clause to search for a specified pattern in a column. It works with wildcard characters for flexible text searches.

---

# 🎯 Main Idea

`LIKE` enables pattern matching on string data. `%` matches any sequence of characters. `_` matches exactly one character.

---

# 💡 Example

Find employees whose first name starts with 'a', ends with 'a', contains 'tell', or matches position-based patterns.

---

# ✨ LIKE

```sql
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE 'a%';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE '%a';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE '%tell%';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE 'a%a';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE '_a%';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE '__m%';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE 'a__%';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE 'A%' OR FirstName LIKE 'B%';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE 'A%D';
SELECT ID, FirstName FROM Employees WHERE FirstName LIKE '_a_m%';
```

---

# 🧠 Result

```text
ID | FirstName
1  | Ahmed
5  | Amr
...returns names matching the specified pattern.
```

---

# 🔥 Important Rule

```text
% matches zero or more characters (any sequence).
_ matches exactly one character.
LIKE is case-insensitive in most databases by default.
```

---

# 🧩 LIKE Patterns

| Pattern | Meaning |
| ------- | ------- |
| 'a%'    | Starts with 'a' |
| '%a'    | Ends with 'a' |
| '%ah%'  | Contains 'ah' |
| '_a%'   | Second character is 'a' |
| 'a__%'  | Starts with 'a', at least 3 characters |

---

# ✅ Summary

| Concept | Meaning |
| ------- | ------- |
| LIKE    | Pattern matching in WHERE |
| %       | Any sequence of characters |
| _       | Exactly one character |

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
