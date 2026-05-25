# Lesson 42 - SQL Data Types

## 📘 Introduction

In this lesson, we learned about the different data types supported by **Microsoft SQL Server**. Understanding data types is crucial for defining table columns correctly, optimizing storage, and ensuring data integrity.

---

# 🧠 SQL Server Data Types Overview

SQL Server provides a wide range of data types categorized into several groups:

1. **Exact Numerics** (Integers, Decimals, Money, Bits)
2. **Approximate Numerics** (Floating-point numbers)
3. **Character Strings** (Non-Unicode text)
4. **Unicode Character Strings** (Unicode/Multilingual text)
5. **Date & Time** (Dates, Times, and Time Zones)
6. **Binary Strings** (Raw binary data and files)
7. **Other Data Types** (GUIDs, XML, hierarchy, etc.)

---

# 🎯 Main Data Types & Storage

### 1. Exact Numerics

Used for storing exact numbers such as integers, fixed-point decimals, and monetary amounts.

| Data Type | Range / Limit | Memory Consumption | Key Notes |
| :--- | :--- | :--- | :--- |
| **`tinyint`** | `0` to `255` | `1 byte` | Perfect for small positive flags/ages. |
| **`smallint`** | `-32,768` to `32,767` | `2 bytes` | Good for small numbers. |
| **`int`** | `-2,147,483,648` to `2,147,483,647` | `4 bytes` | The standard integer type. |
| **`bigint`** | `-2^63` to `2^63 - 1` | `8 bytes` | For very large IDs or counters. |
| **`bit`** | `0`, `1`, or `NULL` | `1 byte` (stores up to 8 bit columns in 1 byte) | Used for boolean flags. |
| **`decimal(p,s)`** / **`numeric`** | `-10^38 + 1` to `10^38 - 1` | `5` to `17 bytes` | Exact decimals. `p` (precision), `s` (scale). (e.g., `decimal(10,2)`). |
| **`money`** | `-922,337,203,685,477.5808` to `+922,337,203,685,477.5807` | `8 bytes` | Used for currency. |
| **`smallmoney`** | `-214,478.3648` to `+214,478.3647` | `4 bytes` | Smaller range currency. |

---

### 2. Approximate Numerics

Used for floating-point values where speed or range is more important than absolute precision (e.g., scientific calculations).

| Data Type | Limit | Precision | Memory |
| :--- | :--- | :--- | :--- |
| **`float(n)`** | `-1.79E+308` to `1.79E+308` | Up to 15 digits | Depends on $n$ |
| **`real`** | `-3.40E+38` to `3.40E+38` | 7 digits | `4 bytes` |

---

### 3. Character & Unicode Strings

> [!WARNING]
> **Deprecated Alert**: `text` and `ntext` are deprecated and will be removed in future versions of SQL Server. **DO NOT USE THEM**. Use `varchar(max)` and `nvarchar(max)` instead.

| Data Type | Character Set | Fixed/Variable | Max Length | Storage |
| :--- | :--- | :--- | :--- | :--- |
| **`char(n)`** | Non-Unicode | Fixed | `8,000` chars | `n` bytes |
| **`varchar(n)`** | Non-Unicode | Variable | `8,000` chars | `n + 2` bytes |
| **`varchar(max)`** | Non-Unicode | Variable | `2^31 - 1` chars (2 GB) | Actual length + 2 bytes |
| **`nchar(n)`** | Unicode (multilingual) | Fixed | `4,000` chars | `2n` bytes |
| **`nvarchar(n)`** | Unicode (multilingual) | Variable | `4,000` chars | `2n + 2` bytes |
| **`nvarchar(max)`** | Unicode (multilingual) | Variable | `2^30 - 1` chars (2 GB) | Actual length + 2 bytes |

**💡 Key Rule:** Use Unicode types (`nchar`/`nvarchar`) if you plan to store languages other than English (e.g., Arabic).

---

### 4. Date & Time Data Types

For modern applications, prefer standard types: `date`, `time`, `datetime2`, and `datetimeoffset`.

| Data Type | Range | Accuracy | Storage Size | Notes |
| :--- | :--- | :--- | :--- | :--- |
| **`date`** | `0001-01-01` to `9999-12-31` | `1 day` | `3 bytes` | Date only. Recommended. |
| **`time`** | `00:00:00.0000000` to `23:59:59.9999999` | `100 nanoseconds` | `3 to 5 bytes` | Time only. Recommended. |
| **`datetime2`** | `0001-01-01` to `9999-12-31` | `100 nanoseconds` | `6 to 8 bytes` | Highly recommended replacement for `datetime`. |
| **`datetimeoffset`** | `0001-01-01` to `9999-12-31` | `100 nanoseconds` | `8 to 10 bytes` | Includes **Time Zone Offset** (e.g. `GMT+3`). |
| **`datetime`** | `1753-01-01` to `9999-12-31` | `3.33 milliseconds` | `8 bytes` | Legacy datetime. Avoid in new designs. |
| **`smalldatetime`**| `1900-01-01` to `2079-06-06` | `1 minute` | `4 bytes` | Legacy. Avoid. |

---

### 5. Binary Strings

Used to store files, images, or raw byte streams.

> [!WARNING]
> **Deprecated Alert**: `image` is deprecated and will be removed in future versions. Use `varbinary(max)` instead.

* **`binary(n)`**: Fixed-length binary data (up to `8,000` bytes).
* **`varbinary(n)`**: Variable-length binary data (up to `8,000` bytes).
* **`varbinary(max)`**: Variable-length binary data up to `2 GB` (Replacement for `image`).

---

### 6. Special/Other Data Types

* **`uniqueidentifier`**: Stores a 16-byte Globally Unique Identifier (GUID) (e.g., generated via `NEWID()`).
* **`xml`**: Stores XML-formatted text.
* **`rowversion` / `timestamp`**: Automatically updated unique binary number, commonly used for row versioning (optimistic concurrency).
* **`hierarchyid`**: Represents hierarchical relationships (tree structures).
* **`sql_variant`**: Stores values of various data types in the same column.
* **`table`**: A special data type used to store a result set for later processing (used in functions/stored procedures).

---

# 🚀 Author

Ahmed Darwish 🚀
