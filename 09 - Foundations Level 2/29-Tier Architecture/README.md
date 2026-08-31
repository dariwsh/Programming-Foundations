# N-Tier Architecture

Welcome to the lecture unit dedicated to **N-Tier Architecture**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **N-Tier Architecture**.

---

## 🏫 Lecture Notes (The Doctor's Way)

**N-Tier (Multitier) Architecture** is a software architecture pattern where components are organized into logical layers.
*   **Common Setup (3-Tier):**
    1.  **Presentation Tier (UI):** The client interface (e.g., web app, mobile app) displaying data to the user.
    2.  **Application Tier (Business Logic):** The server-side code processing inputs, calculations, and coordination (e.g., Node.js, Spring Boot, ASP.NET).
    3.  **Data Tier (Database):** Storage and database management systems (e.g., SQL Server, PostgreSQL, MongoDB).
*   **Advantage:** Loose coupling. You can update the database technology without changing the presentation layer, enhancing maintainability and scaling.

---

## 📝 Self-Assessment Quiz

### Questions
1. **Which tier in a 3-tier architecture contains the frontend code rendering buttons and menus for the user?**
   * A) Presentation Tier
   * B) Application Tier
   * C) Data Tier
   * D) Business Logic Tier

2. **What is the main benefit of N-Tier software design?**
   * A) It eliminates the need for servers.
   * B) Separation of concerns, making modules independent and easier to scale and maintain.
   * C) It uses less memory.
   * D) It makes coding faster for single-developer projects.

3. **Where does calculations, user authentication, and business rule enforcement occur in 3-Tier systems?**
   * A) Presentation Tier
   * B) Application Tier (Business Logic)
   * C) Data Tier
   * D) Subdomain Tier


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **A)**
   * *Explanation:* The Presentation Tier handles user interface rendering and client interactions.
2. **B)**
   * *Explanation:* Separation of concerns allows developers to manage layers separately, scaling nodes independently.
3. **B)**
   * *Explanation:* The Application/Business logic layer processes decisions, rules, and coordinate application flow.

</details>

---

## 📂 Referenced Resource
* [View Reference Material](./29-Tier Architecture.pdf)
