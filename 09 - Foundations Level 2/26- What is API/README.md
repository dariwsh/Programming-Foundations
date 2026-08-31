# Application Programming Interface (API)

Welcome to the lecture unit dedicated to **Application Programming Interface (API)**. This guide provides an academic summary and explanation of the concepts covered in this module.

---

## 🎓 Learning Objectives
By the end of this unit, you will understand the core definitions, mechanisms, and architectural designs related to **Application Programming Interface (API)**, including request-response lifecycles, protocols, and real-world integration patterns.

---

## 🏫 Lecture Notes (The Doctor's Way)

### 1. What is an API?
An **API (Application Programming Interface)** is a set of defined rules, protocols, and tools that allow different software applications to communicate and exchange data with each other seamlessly, regardless of how they are built internally.

*   **The Classic Restaurant Analogy:**
    *   **Customer (Client / Frontend):** Wants food and looks at the menu.
    *   **Waiter (API):** Takes your order (Request), delivers it to the kitchen, and brings back your prepared meal (Response).
    *   **Kitchen / Chef (Server / Database):** Prepares the data/logic according to the specific request.

### 2. How APIs Work (Request & Response Model)
1.  **Endpoint:** A specific URL where an API receives requests (e.g., `https://api.example.com/v1/users/10`).
2.  **HTTP Methods (Verbs):**
    *   `GET`: Retrieve data (e.g., fetch user profile).
    *   `POST`: Send new data to be created (e.g., submit a registration form).
    *   `PUT` / `PATCH`: Update existing data.
    *   `DELETE`: Remove data.
3.  **Headers & Body (Payload):**
    *   *Headers:* Metadata about the request (e.g., `Content-Type: application/json`, `Authorization: Bearer token`).
    *   *Body:* The actual data payload sent in JSON or XML format.
4.  **Status Codes:** Response numbers indicating the result (`200 OK`, `201 Created`, `400 Bad Request`, `401 Unauthorized`, `404 Not Found`, `500 Internal Server Error`).

### 3. Real-World Examples of APIs
*   **Payment Gateways (Stripe / PayPal / Paymob):** E-commerce websites do not store or process credit cards directly; they send an API request to a secure payment provider to handle the transaction.
*   **Ride-Hailing & Delivery (Uber / Careem):** Utilizes Google Maps API to calculate routes, display live maps, and estimate travel time instead of building their own satellite mapping infrastructure.
*   **Social Logins (OAuth):** "Sign in with Google" or "Sign in with Apple" uses APIs to authenticate user identity securely without exposing passwords.
*   **Weather Widgets:** Mobile apps fetch real-time atmospheric data from meteorological station APIs.

---

## 📝 Self-Assessment Quiz

### Questions
1. **What is the primary purpose of an API in modern software systems?**
   * A) To design user interface buttons and CSS styles.
   * B) To act as an intermediary contract allowing different software programs to communicate and exchange data.
   * C) To increase CPU clock speed on servers.
   * D) To replace relational database management systems.

2. **In the restaurant analogy of APIs, what represents the API?**
   * A) The customer placing the order.
   * B) The kitchen preparing the ingredients.
   * C) The waiter transmitting the order between the customer and the kitchen.
   * D) The bill receipt printed at checkout.

3. **Which HTTP method is typically used when an application wants to request and retrieve data from an API without modifying it?**
   * A) POST
   * B) DELETE
   * C) PUT
   * D) GET


---

<details>
<summary><b>🔍 Click to reveal the Answer Key & Explanations</b></summary>

### Answer Key
1. **B)**
   * *Explanation:* APIs provide standardized endpoints and communication protocols allowing diverse platforms and services to interact reliably.
2. **C)**
   * *Explanation:* The waiter acts as the messenger/interface that delivers requests to the backend system and returns responses to the client.
3. **D)**
   * *Explanation:* The `GET` method is the standard HTTP verb used for safe, idempotent read-only data retrieval.

</details>

---

## 📂 Referenced Resource
* [ProgrammingAdvices - Foundations Level 2: API Module](https://programmingadvices.com)
