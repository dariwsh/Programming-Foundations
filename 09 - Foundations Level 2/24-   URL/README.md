# URL (Uniform Resource Locator)

Welcome to the lecture unit dedicated to **URL (Uniform Resource Locator)**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **URL (Uniform Resource Locator)**.

---

## 🏫 Lecture Notes (The Doctor's Way)

A **URL** is the address of a specific unique resource on the Web.
*   **Anatomy of a URL:**
    `https://admin.example.com:8080/path/to/page.html?user=ahmed#section-1`
    *   `https`: **Protocol / Scheme**
    *   `admin`: **Subdomain**
    *   `example.com`: **Domain Name** (SLD + TLD)
    *   `8080`: **Port Number** (usually omitted if defaults like 80/443 are used)
    *   `/path/to/page.html`: **Path** (resource location on the server filesystem)
    *   `?user=ahmed`: **Query String / Parameters** (pairs of keys and values sending data to the server)
    *   `#section-1`: **Anchor / Fragment** (specifies a location inside the page document)

---

## 📝 Self-Assessment Quiz

### Questions
1. **In the URL 'https://example.com/products?category=shoes#top', what does '?category=shoes' represent?**
   * A) Protocol
   * B) Path
   * C) Query Parameter
   * D) Anchor/Fragment

2. **What part of a URL directs the browser to a specific section/header within a single web page?**
   * A) Scheme
   * B) Fragment/Anchor (starting with #)
   * C) Path
   * D) Subdomain

3. **Which part of the URL 'http://localhost:3000/dashboard' represents the port number?**
   * A) http
   * B) localhost
   * C) 3000
   * D) dashboard


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **C)**
   * *Explanation:* The question mark starts query parameter key-value pairs used to pass variables to the server.
2. **B)**
   * *Explanation:* The hash sign `#` followed by an element ID (fragment identifier) scrolls the page to that element.
3. **C)**
   * *Explanation:* `3000` is the port number indicating which port the development server is listening on.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./24-   URL.pdf)
