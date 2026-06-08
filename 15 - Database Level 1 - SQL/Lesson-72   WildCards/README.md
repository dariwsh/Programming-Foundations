# Lesson 72 - WildCards

---

# 📘 Introduction

In this lesson, we learned about:

# WildCards

are:

> Special characters used with the `LIKE` operator to search for patterns in text data. SQL Server supports `%`, `_`, `[]`, `[^]`, and `[a-z]` wildcards.

---

# 🎯 Main Idea

Beyond `%` and `_`, SQL Server provides character lists `[abc]`, ranges `[a-z]`, and exclusion `[^abc]` for more precise pattern matching.

---

# 💡 Example

Find names starting with specific letters or ranges, and match variants of "Mohammed"/"Mohammad" in one pattern.

---

# ✨ WildCards

```sql
SELECT ID, FirstName, LastName FROM Employees
WHERE FirstName LIKE '[abc]%';

SELECT ID, FirstName, LastName FROM Employees
WHERE FirstName LIKE '[a-l]%';

SELECT ID, FirstName, LastName FROM Employees
WHERE FirstName NOT LIKE '[abc]%';

SELECT ID, FirstName, LastName FROM Employees
WHERE FirstName LIKE 'Mohamm[ae]d';
```

---

# 🧠 Result

```text
ID | FirstName | LastName
...returns names starting with a, b, or c (for [abc]%).
...returns Mohammed and Mohammad (for Mohamm[ae]d).
```

---

# 🔥 Important Rule

```text
[abc] matches any single character in the set.
[a-z] matches any single character in the range.
[^abc] matches any single character NOT in the set.
```

---

# 🧩 WildCard Summary

| Wildcard | Description | Example |
| -------- | ----------- | ------- |
| %        | Any sequence of characters | 'a%' |
| _        | Exactly one character | '_a%' |
| [chars]  | One char in the set | '[abc]%' |
| [a-z]    | One char in the range | '[a-l]%' |
| [^chars] | One char NOT in set | '[^abc]%' |

---

# ✅ Summary

| Concept  | Meaning |
| -------- | ------- |
| [abc]    | Match any character in the list |
| [a-z]    | Match any character in the range |
| [^abc]   | Match any character NOT in the list |

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
