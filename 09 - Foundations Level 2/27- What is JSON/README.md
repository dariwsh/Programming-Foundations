# JavaScript Object Notation (JSON)

Welcome to the lecture unit dedicated to **JavaScript Object Notation (JSON)**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the syntax rules, data types, advantages over XML, and parsing/serialization mechanisms of **JavaScript Object Notation (JSON)**.

---

## 🏫 Lecture Notes (The Doctor's Way)

### 1. What is JSON?
**JSON (JavaScript Object Notation)** is a lightweight, text-based, language-independent data interchange format. Despite originating from JavaScript syntax, it is universally supported across virtually every modern programming language (C#, C++, Python, Java, PHP, Go, etc.).

### 2. JSON Structure & Data Types
JSON is built upon two universal structures:
1.  **A collection of name/value pairs:** Represented as an object wrapped in curly braces `{}`.
2.  **An ordered list of values:** Represented as an array wrapped in square brackets `[]`.

```json
{
  "studentId": 1024,
  "fullName": "Ahmed Darwish",
  "isEnrolled": true,
  "gpa": 3.85,
  "skills": ["C++", "C#", "SQL", "Networking"],
  "address": {
    "city": "Cairo",
    "country": "Egypt"
  },
  "graduationDate": null
}
```

*   **Supported Types:**
    *   **String:** Double quotes required (`"text"`).
    *   **Number:** Integer or floating-point (`42`, `3.14`).
    *   **Boolean:** `true` or `false`.
    *   **Array:** Ordered list `["item1", "item2"]`.
    *   **Object:** Nested key-value collection `{ "key": "value" }`.
    *   **Null:** `null`.

### 3. JSON vs. XML Comparison
| Feature | JSON | XML |
| :--- | :--- | :--- |
| **Syntax** | Minimalist key-value & brackets | Verbose opening & closing tags (`<tag></tag>`) |
| **File Size / Bandwidth** | Lightweight, compact payload | Heavy overhead due to repeated tags |
| **Parsing Speed** | Extremely fast and native | Requires complex DOM/SAX parsers |
| **Data Types** | Typed (Number, Boolean, String, Array) | Everything is treated as text by default |
| **Modern Usage** | Default for RESTful Web APIs | Legacy enterprise systems, SOAP, Config files |

### 4. Serialization vs. Deserialization
*   **Serialization (Stringify):** Converting an in-memory runtime object into a JSON string to transmit over the network or save to disk.
*   **Deserialization (Parse):** Converting an incoming JSON text string back into a strongly-typed in-memory object inside your program.

---

## 📝 Self-Assessment Quiz

### Questions
1. **Which of the following data formats is the modern de facto standard for transmitting data in REST APIs due to its lightweight syntax?**
   * A) XML
   * B) JSON
   * C) HTML
   * D) CSV

2. **In standard JSON syntax, which quotation marks MUST be used around keys and string values?**
   * A) Single quotes (`'key'`)
   * B) Backticks (`` `key` ``)
   * C) Double quotes (`"key"`)
   * D) No quotes are allowed

3. **What is the process of converting a JSON text string received from an API into a live data object in programming memory called?**
   * A) Compilation
   * B) Serialization
   * C) Parsing / Deserialization
   * D) Hashing


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* JSON is universally favored in RESTful web services due to its compact size, rapid parsing, and direct mapping to native language objects.
2. **C)**
   * *Explanation:* The official JSON specification strictly requires standard double quotes (`"`) around keys and string literals.
3. **C)**
   * *Explanation:* Parsing (or Deserialization) reads formatted text strings and reconstructs them into usable native objects in RAM.

</details>

---

## 📂 Referenced Resource
* [ProgrammingAdvices - Foundations Level 2: JSON Module](https://programmingadvices.com)
