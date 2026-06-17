# Lesson 79 - CASE

---

# 📘 Introduction

In this lesson, we learned about:

# CASE

is:

> `CASE` is SQL's way of writing conditional logic (like `if/else`) directly inside a query. It evaluates conditions and returns a value for the first match.

---

# 🎯 Main Idea

`CASE` allows you to transform or classify data on-the-fly within a `SELECT`. You can use it to create new calculated columns based on conditions.

---

# 💡 Example

Label gender as 'Male'/'Female', determine employee status, and calculate adjusted salary.

---

# ✨ CASE Syntax

```sql
-- Simple CASE: gender label
SELECT ID, FirstName, LastName,
    GendorTitle = CASE
        WHEN Gendor = 'M' THEN 'Male'
        WHEN Gendor = 'F' THEN 'Female'
        ELSE 'Unknown'
    END
FROM Employees

-- Multiple CASE columns: gender + status
SELECT ID, FirstName, LastName,
    GendorTitle = CASE
        WHEN Gendor = 'M' THEN 'Male'
        WHEN Gendor = 'F' THEN 'Female'
        ELSE 'Unknown'
    END,
    Status = CASE
        WHEN ExitDate IS NULL THEN 'Active'
        WHEN Gendor IS NOT NULL THEN 'Resigned'
    END
FROM Employees

-- CASE for salary calculation
SELECT ID, FirstName, LastName,
    MonthlySalary = CASE
        WHEN Gendor = 'M' THEN MonthlySalary * 1.1
        WHEN Gendor = 'F' THEN MonthlySalary * 1.15
    END
FROM Employees
```

---

# 🧠 Result

```text
GendorTitle: M → 'Male',  F → 'Female'
Status: ExitDate NULL → 'Active', else → 'Resigned'
MonthlySalary: Males get +10%, Females get +15%
```

---

# 🔥 Important Rule

```text
CASE evaluates conditions top-down and stops at the first TRUE.
ELSE is optional — if omitted and no condition matches, returns NULL.
You can have multiple CASE expressions in one SELECT.
```

---

# 🧩 CASE Structure

| Part    | Meaning                              |
| ------- | ------------------------------------ |
| WHEN    | Condition to check                   |
| THEN    | Value to return if condition is TRUE |
| ELSE    | Default value if no condition matches|
| END     | Required to close CASE block         |

---

# ✅ Summary

| Concept | Meaning                                      |
| ------- | -------------------------------------------- |
| CASE    | Conditional logic inside SQL queries         |
| WHEN    | The condition to evaluate                    |
| THEN    | The result if condition is true              |
| ELSE    | Fallback if no WHEN matches                  |

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
