# README.md — Lesson 30

# Composite / Multivalued / Derived Attributes to Relational Schema

````md id="m7xk2a"
# Lesson 30 - Composite / Multivalued / Derived Attributes to Relational Schema

## 📘 Introduction

In this lesson, we learned how to convert:

- Composite Attributes
- Multivalued Attributes
- Derived Attributes

from ERD into Relational Schema.

---

# 🧠 Attribute Types

## 1) Composite Attribute

An attribute that contains smaller sub-attributes.

Example:

``` id="ib4h0w"
Name = FirstName + LastName
````

---

## 2) Multivalued Attribute

An attribute that can contain multiple values.

Example:

```id="gj7k1m"
Phone Numbers
```

A student can have more than one phone number.

---

## 3) Derived Attribute

An attribute calculated from another attribute.

Example:

```id="ojkw56"
Age derived from BirthDate
```

---

# 🎯 Main Idea

When converting ERD to Relational Schema:

* Composite → take root attributes only
* Multivalued → create separate table
* Derived → ignore it

---

# 💡 Example

## Students Table

| StudentID | FirstName | LastName    | BirthDate |
| --------- | --------- | ----------- | --------- |
| 1         | Mohammed  | Abu-Hadhoud | 6-11-1977 |

---

## Phones Table

| PhoneID | StudentID | Phone     |
| ------- | --------- | --------- |
| 1       | 1         | 07729929  |
| 2       | 1         | 079882882 |

---

# ✨ Relational Schema

```sql id="z2s8gt"
Students(
    StudentID PK,
    FirstName,
    LastName,
    BirthDate
)

Phones(
    PhoneID PK,
    StudentID FK,
    Phone
)
```

---

# 🧠 Important Rules

## Rule 1

Create a table for the entity.

---

## Rule 2

Move attributes to the table.

---

## Rule 3

Composite Attribute:
Take only root attributes.

Example:

```id="xjv43c"
Name → FirstName + LastName
```

---

## Rule 4

Derived Attribute:
Ignore it.

Example:

```id="zckr0p"
Age
```

because it can be calculated from BirthDate.

---

## Rule 5

Multivalued Attribute:
Create another table.

---

## Rule 6

Move PK from main table as FK to the new table.

---

# 🔥 Important Point

Multivalued attributes always need a separate table.

---

# ✅ Quick Summary

| Concept               | Meaning                 |
| --------------------- | ----------------------- |
| Composite Attribute   | Attribute with subparts |
| Multivalued Attribute | Multiple values         |
| Derived Attribute     | Calculated value        |
| PK                    | Primary Key             |
| FK                    | Foreign Key             |

---

# 🔥 Golden Point

Multivalued Attribute → Separate Table 🚀

````

---

# 📒 Notes — Composite / Multivalued / Derived Attributes

🧠 What is Composite Attribute?

Composite Attribute

هو:

Attribute يحتوي على أجزاء أصغر.

مثال:

``` id="cz4m4v"
Name
````

ينقسم إلى:

```id="g2jlwm"
FirstName + LastName
```

---

# 🧠 What is Multivalued Attribute?

Multivalued Attribute

هو:

Attribute يحتوي على أكثر من قيمة.

مثال:

طالب لديه أكثر من رقم هاتف.

---

# 🧠 What is Derived Attribute?

Derived Attribute

هو:

Attribute يتم حسابه من Attribute آخر.

مثال:

```id="y4pfzw"
Age
```

يتم حسابه من:

```id="z7wgrv"
BirthDate
```

---

# 🎯 الفكرة ببساطة

عند تحويل ERD إلى Relational Schema:

* Composite → نأخذ Root Attributes فقط
* Multivalued → ننشئ Table جديد
* Derived → نتجاهله

---

# 💡 Example

## Students

| StudentID | FirstName | LastName    | BirthDate |
| --------- | --------- | ----------- | --------- |
| 1         | Mohammed  | Abu-Hadhoud | 6-11-1977 |

---

## Phones

| PhoneID | StudentID | Phone     |
| ------- | --------- | --------- |
| 1       | 1         | 07729929  |
| 2       | 1         | 079882882 |

---

# ✨ Relational Schema

```sql id="0xjlwm"
Students(
    StudentID PK,
    FirstName,
    LastName,
    BirthDate
)

Phones(
    PhoneID PK,
    StudentID FK,
    Phone
)
```

---

# 🧠 Important Point

الـ Multivalued Attribute

لا يوضع داخل نفس الجدول.

بل يتم إنشاء جدول جديد له.

---

# ✅ Quick Summary

| Concept     | Meaning            |
| ----------- | ------------------ |
| Composite   | Attribute له أجزاء |
| Multivalued | أكثر من قيمة       |
| Derived     | محسوب              |
| PK          | Primary Key        |
| FK          | Foreign Key        |

---

# 🔥 Golden Point

Derived Attribute is ignored in Relational Schema 🚀

---
# Athour
Ahmed Darwish