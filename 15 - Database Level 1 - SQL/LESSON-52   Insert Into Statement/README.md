# Lesson 52 - INSERT INTO Statement

## What is it?
Used to add new rows of data into a table.

---

## Syntax

### With column names (Recommended)
```sql
INSERT INTO table_name (column1, column2)
VALUES (value1, value2);
```

### Without column names
```sql
INSERT INTO table_name
VALUES (value1, value2, value3);
```

### Multiple rows
```sql
INSERT INTO table_name (column1, column2)
VALUES 
    (value1_a, value2_a),
    (value1_b, value2_b);
```

---

## Example

```sql
CREATE TABLE Employees (
    EmployeeID INT PRIMARY KEY,
    FirstName  VARCHAR(50),
    LastName   VARCHAR(50),
    Salary     DECIMAL(10, 2)
);

INSERT INTO Employees (EmployeeID, FirstName, LastName, Salary)
VALUES 
    (1, 'Ahmed', 'Darwish', 50000.00),
    (2, 'Sara',  'Ali',     60000.00);
```

---

## Notes
- String & date values → use single quotes `'value'`
- Number values → no quotes
- Can't insert duplicate `PRIMARY KEY`
- `NOT NULL` columns must have a value

---

Ahmed Darwish 🚀
