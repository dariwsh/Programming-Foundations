# Lesson 37 - SQL CREATE DATABASE IF NOT EXISTS Statement

---

# 📘 Introduction

In this lesson, we learned about:

# 🔗 Creating Databases Safely with Conditional Logic

The CREATE DATABASE IF NOT EXISTS statement allows us to create new databases while avoiding errors when a database with the same name already exists. This is an essential technique for writing robust and reusable SQL scripts.

It helps database administrators and developers:

* Create databases without errors if they already exist
* Write idempotent SQL scripts that can run multiple times safely
* Avoid runtime errors and exceptions
* Build more flexible automation scripts

---

# 🧠 What is CREATE DATABASE IF NOT EXISTS?

# CREATE DATABASE IF NOT EXISTS = Conditional Database Creation

The CREATE DATABASE IF NOT EXISTS pattern is used to:

> Create a new database only if a database with that name does not already exist in the SQL database management system. If the database already exists, no error is thrown and the command is skipped.

This prevents the common SQL error: **"Database already exists"** or similar error messages.

---

# ❌ The Problem: Why We Need This

When you use a regular `CREATE DATABASE` statement and the database already exists, SQL throws an error:

```sql
CREATE DATABASE koko;
-- Error: Database 'koko' already exists!
```

This creates issues when:
* Running scripts multiple times
* Using automated deployment scripts
* Working with version control and CI/CD pipelines
* Sharing scripts with team members

---

# ✅ The Solution: Conditional Checking

Instead of getting an error, we can check if the database exists first using the `IF NOT EXISTS` clause.

---

# 💡 Basic Syntax

```sql
IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'database_name')
  BEGIN
    CREATE DATABASE database_name;
  END
```

---

# 💡 Example

## Creating a Database Conditionally

```sql
IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'koko')
  BEGIN
    CREATE DATABASE koko;
  END
```

### Meaning

* The system checks if a database named **koko** exists in `sys.databases`
* `IF NOT EXISTS` means: "if the database does NOT exist"
* If the database doesn't exist, the CREATE DATABASE command runs
* If the database already exists, nothing happens (no error)
* The `BEGIN...END` block groups the CREATE DATABASE statement

---

# 🧩 How It Works (Step by Step)

| Step | Action |
| ---- | ------ |
| 1    | Query `sys.databases` to check for existing database names |
| 2    | Check if any row matches the condition `WHERE name = 'database_name'` |
| 3    | If NO matching database found, condition is TRUE |
| 4    | Execute the `CREATE DATABASE` command inside BEGIN...END |
| 5    | If a matching database found, skip the entire block (no error) |

---

# 💡 More Examples

## Example 1: Company Database (Safe Creation)

```sql
IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'CompanyDB')
  BEGIN
    CREATE DATABASE CompanyDB;
  END
```

* Safely creates CompanyDB if it doesn't exist
* No error if CompanyDB already exists

## Example 2: School Database (Safe Creation)

```sql
IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'SchoolDB')
  BEGIN
    CREATE DATABASE SchoolDB;
  END
```

* Safely creates SchoolDB if it doesn't exist
* Can run this script multiple times without errors

## Example 3: Library Database (Safe Creation)

```sql
IF NOT EXISTS(SELECT * FROM sys.databases WHERE name = 'LibraryDB')
  BEGIN
    CREATE DATABASE LibraryDB;
  END
```

* Safely creates LibraryDB if it doesn't exist
* Perfect for automated deployment scripts

---

# 🎯 Key Points to Remember

| Point | Explanation |
| ----- | ----------- |
| **sys.databases** | System table that contains all databases on the server |
| **WHERE name = 'db_name'** | Filters to find specific database by name |
| **IF NOT EXISTS** | Execute block ONLY if the query returns no results |
| **BEGIN...END** | Block structure that groups statements together |
| **Safe Repetition** | Script can be run multiple times without errors |

---

# ✨ Benefits of Using IF NOT EXISTS

| Benefit | Description |
| ------- | ----------- |
| **Error Prevention** | Prevents "already exists" error messages |
| **Idempotent Scripts** | Scripts can run repeatedly with same result |
| **Automation Friendly** | Perfect for CI/CD pipelines and scheduled jobs |
| **Team Collaboration** | Team members can run scripts without conflicts |
| **Version Control** | Scripts can be safely checked in and deployed |
| **Debugging** | Easier to troubleshoot since no errors are thrown |

---

# 📝 Best Practices

✅ **DO:**
* Use `IF NOT EXISTS` for production scripts
* Use `sys.databases` to check for existing databases
* Always include the `BEGIN...END` block
* Use this pattern in deployment and migration scripts

❌ **DON'T:**
* Use regular `CREATE DATABASE` without checking in production
* Assume a database doesn't exist on another server
* Skip the `WHERE name = 'db_name'` filter
* Ignore error handling in automation scripts

---

# 🔑 Summary

The `CREATE DATABASE IF NOT EXISTS` pattern is a **safe and robust** way to create databases. It checks if the database already exists before attempting creation, preventing errors and making scripts repeatable. This is especially important in production environments, automated deployments, and collaborative team workflows.

---

# 👨‍💻 Author

Ahmed Darwish 🚀
